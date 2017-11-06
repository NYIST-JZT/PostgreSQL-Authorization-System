#include "role.h"
#include "ui_role.h"
#include "qstring.h"
#include <qdebug.h>
#include "addroledialog.h"
#include "modifyroledialog.h"
#include "custommessagebox.h"
extern QString w_username;
extern QStringList addRoleData;
QStringList modifyRoleData;
role::role(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::role)
{
    ui->setupUi(this);
    model=new QSqlTableModel(this);

    // ui->role_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->role_view->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->role_view->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->role_view->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->role_view->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->role_view->verticalHeader()->hide();
    connect(ui->addBtn,SIGNAL(clicked()),this,SLOT(addRowSlot()));
    //connect(ui->saveBtn,SIGNAL(clicked()),this,SLOT(saveDataSlot()));
    connect(ui->delBtn,SIGNAL(clicked()),this,SLOT(dropDataSlot()));
    connect(ui->updateBtn,SIGNAL(clicked()),this,SLOT(updateDataSlot()));
    connect(ui->pbt_Refresh,SIGNAL(clicked(bool)),this,SLOT(loadRoleData()));

    //model->setHeaderData(0,Qt::Horizontal,"能否发起流复制");
}

role::~role()
{
    delete ui;
}

//load current data
void role::loadRoleData(){
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setTable("pg_roles");
    model->select();
    model->setHeaderData(0,Qt::Horizontal,"角色名");
    model->setHeaderData(1,Qt::Horizontal,"超级管理员");
    model->setHeaderData(2,Qt::Horizontal,"继承");
    model->setHeaderData(3,Qt::Horizontal,"创建角色");
    model->setHeaderData(4,Qt::Horizontal,"创建数据库");
    model->setHeaderData(5,Qt::Horizontal,"能否登录");
    model->setHeaderData(6,Qt::Horizontal,"能否发起流复制");
    model->setHeaderData(7,Qt::Horizontal,"并发连接数");
    model->setHeaderData(9,Qt::Horizontal,"口令失效时间");
    model->setHeaderData(10,Qt::Horizontal,"是否绕过行级安全检测");
    if(model->data(model->index(0,0)).toString().isEmpty())
    {
        CCustomMessageBox *meg=new CCustomMessageBox("角色信息为空，请增加角色信息");
        meg->exec();
        //QMessageBox::information(this,"提示","角色信息为空，请增加角色信息",QMessageBox::Yes);
        //emit EmitToTeacherManageToChangeStack();
        //this->hide();
        return;
    }
    ui->role_view->setModel(model);
    ui->role_view->hideColumn(8);
    ui->role_view->hideColumn(12);
    for(int i = 0; i < model->rowCount(); i++){
        QSqlRecord record = model->record(i);
        QString rolename = record.field(0).value().toString();
        if(rolename != "postgres" && rolename != "pg_signal_backend"){
            if(mytool.checkType(rolename) == 2)
                ui->role_view->hideRow(i);
            else{
                record.setValue(0, mytool.del_prefix(rolename));
                model->setRecord(i, record);
            }
        }
    }
    ui->sqlspace->setText("select * from pg_roles");
}

//add a row
void role::addRowSlot(){
    //model->insertRow(model->rowCount());
    AddRoleDialog addrole;
    if(addrole.exec()==QDialog::Accepted)
    {
        QSqlRecord record_Role=model->record();
        for(int i=0;i<addRoleData.size();i++)
        {
            record_Role.setValue(i,addRoleData[i]);
        }
        model->insertRecord(0,record_Role);
        this->saveAddRole(addRoleData);
    }
}
void role::saveAddRole(QStringList datalist)
{
    sql = new QSqlQuery;
    if(datalist[0].isNull()){
        CCustomMessageBox *meg=new CCustomMessageBox("角色名不能为空");
        meg->exec();
        //QMessageBox::warning(this,"提示","角色名不能为空",QMessageBox::Yes);
        return;
    }
    QString myquery = "create role "+mytool.add_prefix(datalist[0], 1);
    for(int i = 1; i < 9; i++){
        if(!datalist[i].isNull()){
            switch (i) {
            case 1:
                if(datalist[i]=="true")
                    myquery += " SUPERUSER";
                else
                    myquery += " NOSUPERUSER";
                break;
            case 2:
                if(datalist[i]=="true")
                    myquery += " INHERIT";
                else
                    myquery += " NOINHERIT";
                break;
            case 3:
                if(datalist[i]=="true")
                    myquery += " CREATEROLE";
                else
                    myquery += " NOCREATEROLE";
                break;
            case 4:
                if(datalist[i]=="true")
                    myquery += " CREATEDB";
                else
                    myquery += " NOCREATEDB";
                break;
            case 5:
                if(datalist[i]=="true")
                    myquery += " LOGIN";
                else
                    myquery += " NOLOGIN";
                break;
            case 6:
                if(datalist[i]=="true")
                    myquery += " REPLICATION";
                else
                    myquery += " NOREPLICATION";
                break;
            case 7:
                myquery += " CONNECTION LIMIT "+datalist[i];
                break;
            case 8:
                myquery += " PASSWORD '"+datalist[i]+"'";
                break;
            case 9:
                if(datalist[i]=="true")
                    myquery += " BYPASSRLS";
                else
                    myquery += " NOBYPASSRLS";
                break;
            default:
                break;
            }
        }
    }
    ui->sqlspace->setText(myquery);
    if(sql->exec(myquery)){
        CCustomMessageBox *meg=new CCustomMessageBox("角色信息添加成功");
        meg->exec();
        //QMessageBox::information(this,"提示","",QMessageBox::Yes);
    }else{
        CCustomMessageBox *meg=new CCustomMessageBox("角色信息添加失败 错误原因："+sql->lastError().databaseText(),3);
        meg->exec();
        //QMessageBox::warning(this,"提示","角色信息添加失败 错误原因："+sql->lastError().databaseText(),QMessageBox::Yes);
    }
}
void role::saveDataSlot(){
    sql = new QSqlQuery;
    QModelIndex index = model->index(0,0,QModelIndex());
    if(index.data().isNull()){
        CCustomMessageBox *meg=new CCustomMessageBox("角色名不能为空");
        meg->exec();
        //QMessageBox::warning(this,"提示","",QMessageBox::Yes);
        return;
    }
    QString myquery = "create role "+mytool.add_prefix(index.data().toString(), 1);
    for(int i = 1; i < 12; i++){
        QModelIndex index = model->index(model->rowCount()-1,i,QModelIndex());
        if(!index.data().isNull()){
            switch (i) {
            case 1:
                if(index.data().toBool())
                    myquery += " SUPERUSER";
                else
                    myquery += " NOSUPERUSER";
                break;
            case 2:
                if(index.data().toBool())
                    myquery += " INHERIT";
                else
                    myquery += " NOINHERIT";
                break;
            case 3:
                if(index.data().toBool())
                    myquery += " CREATEROLE";
                else
                    myquery += " NOCREATEROLE";
                break;
            case 4:
                if(index.data().toBool())
                    myquery += " CREATEDB";
                else
                    myquery += " NOCREATEDB";
                break;
            case 5:
                if(index.data().toBool())
                    myquery += " LOGIN";
                else
                    myquery += " NOLOGIN";
                break;
            case 6:
                if(index.data().toBool())
                    myquery += " REPLICATION";
                else
                    myquery += " NOREPLICATION";
                break;
            case 7:
                myquery += " CONNECTION LIMIT "+index.data().toInt();
                break;
            case 8:
                myquery += " PASSWORD "+index.data().toString();
                break;
            case 10:
                if(index.data().toBool())
                    myquery += " BYPASSRLS";
                else
                    myquery += " NOBYPASSRLS";
                break;
            default:
                break;
            }
        }
    }
    ui->sqlspace->setText(myquery);
    if(sql->exec(myquery)){
        CCustomMessageBox *meg=new CCustomMessageBox("角色信息添加成功");
        meg->exec();
        //QMessageBox::information(this,"提示","角色信息添加成功",QMessageBox::Yes);
    }else{
        CCustomMessageBox *meg=new CCustomMessageBox("角色信息添加失败 错误原因："+sql->lastError().databaseText());
        meg->exec();
        //QMessageBox::warning(this,"提示","角色信息添加失败 错误原因："+sql->lastError().databaseText(),QMessageBox::Yes);
    }
}


void role::dropDataSlot(){
    int row= ui->role_view->currentIndex().row();
    if(row<0) {
        //QMessageBox::warning(this,"提示","请选中一行数据！",QMessageBox::Yes);
        CCustomMessageBox *meg=new CCustomMessageBox("请选中一行数据！");
        meg->exec();
        return;
    }
    QMessageBox::StandardButton rb = QMessageBox::question(this,"提示","删除角色前，请清除角色所有授权！你确定要删除吗？", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(rb==QMessageBox::Yes)
    {
        CCustomMessageBox *meg=new CCustomMessageBox("删除角色前，请清除角色所有授权！");
        meg->exec();
        //QMessageBox::information(this,"提示","删除角色前，请清除角色所有授权！",QMessageBox::Yes);
        sql = new QSqlQuery;
        QModelIndex index = model->index(row,0);//选中行第一列的内容myquery
        if(index.data().toString() == "postgres" || index.data().toString() == "pg_signal_backend" || index.data().toString() == "whiterole" || index.data().toString() == "blackrole"){
            //QMessageBox::warning(this,"提示","不能删除系统角色", QMessageBox::Yes);
            CCustomMessageBox *meg=new CCustomMessageBox("不能删除系统角色");
            meg->exec();
            return;
        }
        QString myquery = "drop role "+mytool.add_prefix(index.data().toString(), 1);
        if(sql->exec(myquery)){
            //QMessageBox::information(this,"提示","角色信息删除成功",QMessageBox::Yes);
            CCustomMessageBox *meg=new CCustomMessageBox("角色信息删除成功");
            meg->exec();
            ui->sqlspace->setText(myquery);
            ui->role_view->setRowHidden(row,true);
        }else{
            CCustomMessageBox *meg=new CCustomMessageBox("角色信息删除失败 错误原因："+sql->lastError().databaseText());
            meg->exec();
            //QMessageBox::warning(this,"提示","角色信息删除失败 错误原因："+sql->lastError().databaseText(),QMessageBox::Yes);
        }
    }
}

void role::updateDataSlot(){
    int row= ui->role_view->currentIndex().row();
    if(row<0) {
        CCustomMessageBox *meg=new CCustomMessageBox("请选中一行数据！");
        meg->exec();
        return;
    }
    QModelIndex index = model->index(row,0);//选中行第一列的内容myquery
    if(index.data().toString() == "postgres" || index.data().toString() == "pg_signal_backend"){
        CCustomMessageBox *meg=new CCustomMessageBox("不能修改系统角色");
        meg->exec();
        //QMessageBox::warning(this,"提示","不能修改系统角色", QMessageBox::Yes);
        return;
    }
    modifyRoleData.clear();
    for(int i = 0; i < 11; i++){
        QModelIndex index = model->index(row,i,QModelIndex());
        modifyRoleData<<index.data().toString();
    }
    ModifyRoleDialog *modifyrole=new ModifyRoleDialog(this);
    if(modifyrole->exec()==QDialog::Accepted)
    {
        QSqlRecord record_Role=model->record();
        for(int i=0;i<modifyRoleData.size();i++)
        {
            record_Role.setValue(i,modifyRoleData[i]);
        }
        model->setRecord(row,record_Role);
        saveModifyRole(modifyRoleData);
    }
    delete modifyrole;
}
void role::saveModifyRole(QStringList datalist)
{
    sql = new QSqlQuery;
    QString myquery = "alter role "+mytool.add_prefix(datalist[0], 1);
    for(int i = 1; i <datalist.size(); i++){
        if(!datalist[i].isNull()){
            switch (i) {
            case 1:
                if(datalist[i]=="true")
                    myquery += " SUPERUSER";
                else
                    myquery += " NOSUPERUSER";
                break;
            case 2:
                if(datalist[i]=="true")
                    myquery += " INHERIT";
                else
                    myquery += " NOINHERIT";
                break;
            case 3:
                if(datalist[i]=="true")
                    myquery += " CREATEROLE";
                else
                    myquery += " NOCREATEROLE";
                break;
            case 4:
                if(datalist[i]=="true")
                    myquery += " CREATEDB";
                else
                    myquery += " NOCREATEDB";
                break;
            case 5:
                if(datalist[i]=="true")
                    myquery += " LOGIN";
                else
                    myquery += " NOLOGIN";
                break;
            case 6:
                if(datalist[i]=="true")
                    myquery += " REPLICATION";
                else
                    myquery += " NOREPLICATION";
                break;
            case 7:
                myquery += " CONNECTION LIMIT "+datalist[i];
                break;
            case 8:
                if(datalist[i]!="")
                {
                    myquery += " VALID UNTIL '"+datalist[i]+"'";
                }
                break;
            case 9:
                if(datalist[i]=="true")
                    myquery += " BYPASSRLS";
                else
                    myquery += " NOBYPASSRLS";
                break;
            default:
                break;
            }
        }
    }
    ui->sqlspace->setText(myquery);
    if(sql->exec(myquery)){
        CCustomMessageBox *meg=new CCustomMessageBox("角色信息修改成功");
        meg->exec();
        //QMessageBox::information(this,"提示","角色信息修改成功",QMessageBox::Yes);
    }else {
        CCustomMessageBox *meg=new CCustomMessageBox("角色信息修改失败 错误原因："+sql->lastError().databaseText());
        meg->exec();
        //QMessageBox::warning(this,"提示","角色信息修改失败 错误原因："+sql->lastError().databaseText(),QMessageBox::Yes);
    }
}
