#include "usermanage.h"
#include "ui_usermanage.h"
#include "passwddialog.h"
#include <QDebug>
#include <QLineEdit>
#include "adduserdialog.h"
#include "custommessagebox.h"

extern QStringList addUserData;
extern QString updateUserPWD;
UserManage::UserManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserManage)
{
    ui->setupUi(this);
    model=new QSqlTableModel;
    // ui->role_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model=new QSqlTableModel(this);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setTable("pg_user");
    model->setHeaderData(0,Qt::Horizontal,"用户名");
    model->setHeaderData(6,Qt::Horizontal,"密码");
    ui->role_view->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->role_view->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->role_view->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->role_view->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //ui->role_view->horizontalHeader()->setDefaultSectionSize(totalwidth/3);
    // ui->role_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->role_view->verticalHeader()->hide();
    connect(ui->addBtn,SIGNAL(clicked()),this,SLOT(addRowSlot()));
    //connect(ui->saveBtn,SIGNAL(clicked()),this,SLOT(saveDataSlot()));
    connect(ui->delBtn,SIGNAL(clicked()),this,SLOT(dropDataSlot()));
    connect(ui->updateBtn,SIGNAL(clicked()),this,SLOT(updateDataSlot()));
    connect(ui->pbt_Refresh,SIGNAL(clicked()),this,SLOT(loaduserManageData()));
}

UserManage::~UserManage()
{
    delete ui;
}

void UserManage::loaduserManageData(){
    model->select();
    if(model->data(model->index(0,0)).toString().isEmpty())
    {
        CCustomMessageBox *meg=new CCustomMessageBox("用户信息为空，请增加用户信息！");
        meg->exec();
        //QMessageBox::information(this,"提示","用户信息为空，请增加用户信息",QMessageBox::Yes);
        //emit EmitToTeacherManageToChangeStack();
        //this->hide();
        return;
    }
    model->insertColumn(9);
    ui->role_view->setModel(model);

    model->setHeaderData(9,Qt::Horizontal,"所属角色");
    //model->setHeaderData()
    for(int i = 0; i < model->rowCount(); i++){
        QSqlRecord record = model->record(i);
        QString username = record.field(0).value().toString();
        if(username != "postgres" && username != "pg_signal_backend"){
            if(mytool.checkType(username) == 1)
                ui->role_view->hideRow(i);
            else{
                record.setValue(0, mytool.del_prefix(username));
                model->setRecord(i, record);
                QModelIndex index = model->index(i,9,QModelIndex());
                QPushButton *roleBtn = new QPushButton("角色分配");
                roleBtn->setObjectName(record.field(1).value().toString()+","+mytool.add_prefix(record.field(0).value().toString(), 2));
                ui->role_view->setIndexWidget(index, roleBtn);
                connect(roleBtn,SIGNAL(clicked()),this,SLOT(roleBtnSlot()));
            }
        }
    }
    for(int i = 1; i < 6; i++)
        ui->role_view->hideColumn(i);
    ui->role_view->hideColumn(7);
    ui->role_view->hideColumn(8);
    ui->sqlspace->setText("select * from pg_user");
}

//add a row
void UserManage::addRowSlot(){
    //model->insertRow(model->rowCount());
    sql = new QSqlQuery;
    AddUserDialog *adduserdia=new AddUserDialog(this);
    if(adduserdia->exec()==QDialog::Accepted)
    {
        /*QSqlRecord record_User=model->record();
        record_User.setValue(0,addUserData[0]);
        record_User.setValue(1,addUserData[1]);
        model->insertRecord(0,record_User);*/
        QString username = mytool.add_prefix(addUserData[0],2);
        QString passwd = addUserData[1];
        QString myquery = "create user "+username+" password '"+passwd +"'";
        ui->sqlspace->setText(myquery);
        if(sql->exec(myquery)){
            CCustomMessageBox *meg=new CCustomMessageBox("用户信息添加成功");
            meg->exec();
           // QMessageBox::information(this,"提示","用户信息添加成功",QMessageBox::Yes);
        }else{
            CCustomMessageBox *meg=new CCustomMessageBox("用户信息添加失败 错误原因："+sql->lastError().databaseText());
            meg->exec();
            //QMessageBox::warning(this,"提示","用户信息添加失败 错误原因："+sql->lastError().databaseText(),QMessageBox::Yes);
        }
        loaduserManageData();
    }
    delete adduserdia;
}

void UserManage::saveDataSlot(){
    sql = new QSqlQuery;
    QModelIndex index = model->index(model->rowCount()-1,0,QModelIndex());
    QModelIndex index2 = model->index(model->rowCount()-1,6,QModelIndex());
    if(index.data().isNull()){
        CCustomMessageBox *meg=new CCustomMessageBox("用户名不能为空");
        meg->exec();
        //QMessageBox::warning(this,"提示","用户名不能为空",QMessageBox::Yes);
        return;
    }
    QString username = mytool.add_prefix(index.data().toString(), 2);
    QString passwd = index2.data().toString();
    QString myquery = "create user "+username+" password '"+passwd +"'";

    ui->sqlspace->setText(myquery);
    if(sql->exec(myquery)){
        CCustomMessageBox *meg=new CCustomMessageBox("用户信息添加成功");
        meg->exec();
       // QMessageBox::information(this,"提示","用户信息添加成功",QMessageBox::Yes);
    }else{
        CCustomMessageBox *meg=new CCustomMessageBox("用户信息添加失败 错误原因："+sql->lastError().databaseText());
        meg->exec();
        //QMessageBox::warning(this,"提示","用户信息添加失败 错误原因："+sql->lastError().databaseText(),QMessageBox::Yes);
    }
}


void UserManage::dropDataSlot(){
    int row= ui->role_view->currentIndex().row();
    if(row<0) {
        CCustomMessageBox *meg=new CCustomMessageBox("请选中一行数据！");
        meg->exec();
        //QMessageBox::warning(this,"提示","请选中一行数据！",QMessageBox::Yes);
        return;
    }
    //QMessageBox::information(this,"提示","删除用户前，请清除用户所有授权！",QMessageBox::Yes);
    QMessageBox::StandardButton rb = QMessageBox::question(this,"提示","删除用户前，请清除用户所有授权！你确定要删除吗？", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(rb==QMessageBox::Yes)
    {
        //int row= ui->role_view->currentIndex().row();
        sql = new QSqlQuery;
        QModelIndex index = model->index(row,0);//选中行第一列的内容myquery
        QString myquery = "drop role "+mytool.add_prefix(index.data().toString(), 2);
        if(sql->exec(myquery)){
            CCustomMessageBox *meg=new CCustomMessageBox("用户信息删除成功！");
            meg->exec();
            //QMessageBox::information(this,"提示","用户信息删除成功",QMessageBox::Yes);
            ui->sqlspace->setText(myquery);
            ui->role_view->setRowHidden(row,true);
        }else{
            CCustomMessageBox *meg=new CCustomMessageBox("用户信息删除失败 错误原因："+sql->lastError().databaseText(),3);
            meg->exec();
            //QMessageBox::warning(this,"提示","用户信息删除失败 错误原因："+sql->lastError().databaseText(),QMessageBox::Yes);
        }
    }
}

void UserManage::updateDataSlot(){

    /* sql = new QSqlQuery;
    QModelIndex index = model->index(row,0);//选中行第一列的内容myquery
    QModelIndex index2 = model->index(model->rowCount()-1,6,QModelIndex());
    QString username = mytool.add_prefix(index.data().toString(), 2);
    QString passwd = index2.data().toString();
    QString myquery = "alter role "+username+" password '"+passwd +"'";

    ui->sqlspace->setText(myquery);
    if(sql->exec(myquery)){
        QMessageBox::information(this,"提示","用户信息修改成功",QMessageBox::Yes);
    }else {
        QMessageBox::warning(this,"提示","用户信息修改失败 错误原因："+sql->lastError().databaseText(),QMessageBox::Yes);
    }*/
    int row= ui->role_view->currentIndex().row();
    if(row<0) {
        CCustomMessageBox *meg=new CCustomMessageBox("请选中一行数据！");
        meg->exec();
        return;
    }
    PasswdDialog *dialog = new PasswdDialog(this);
    if(dialog->exec()==QDialog::Accepted)
    {
        sql = new QSqlQuery;
        QModelIndex index = model->index(row,0);//选中行第一列的内容myquery
        QString username = mytool.add_prefix(index.data().toString(), 2);
        QString passwd = updateUserPWD;
        QString myquery = "alter role "+username+" password '"+passwd +"'";

        ui->sqlspace->setText(myquery);
        if(sql->exec(myquery)){
            CCustomMessageBox *meg=new CCustomMessageBox("用户信息修改成功！");
            meg->exec();
           // QMessageBox::information(this,"提示","用户信息修改成功",QMessageBox::Yes);
        }else {
            CCustomMessageBox *meg=new CCustomMessageBox("用户信息修改失败 错误原因："+sql->lastError().databaseText(),3);
            meg->exec();
            //QMessageBox::warning(this,"提示","用户信息修改失败 错误原因："+sql->lastError().databaseText(),QMessageBox::Yes);
        }
    }
    delete dialog;
}

void UserManage::roleBtnSlot(){
    distrirolelist = new DistriRoleList;
    distrirolelist->show();
    connect(this,SIGNAL(comeToRoleList(QString, QString)),distrirolelist,SLOT(loadRoleList(QString, QString)));
    QPushButton *selectedBtn = qobject_cast<QPushButton*>(sender());
    QString str = selectedBtn->objectName();
    QStringList arg = str.split(",");
    emit(comeToRoleList(arg[0], arg[1]));
}
