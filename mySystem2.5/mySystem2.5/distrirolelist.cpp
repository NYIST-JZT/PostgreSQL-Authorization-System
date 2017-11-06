#include "distrirolelist.h"
#include "ui_distrirolelist.h"
#include <QDebug>
#include <QDesktopWidget>
#include "custommessagebox.h"
DistriRoleList::DistriRoleList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DistriRoleList)
{
    ui->setupUi(this);
    QDesktopWidget *desktop = QApplication::desktop(); // =qApp->desktop();也可以
    move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
    model=new QSqlTableModel(this);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setTable("pg_roles");
    model->setHeaderData(0,Qt::Horizontal,"角色名");
    ui->role_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->role_view->setSelectionMode(QAbstractItemView::SingleSelection);
    // ui->role_view->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->role_view->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->role_view->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->role_view->verticalHeader()->hide();
    connect(ui->saveBtn,SIGNAL(clicked()),this,SLOT(saveBtnSlot()));
    authRole.clear();
}

DistriRoleList::~DistriRoleList()
{
    delete ui;
}

void DistriRoleList::loadRoleList(QString oid, QString username){
    rolename = username;
    ui->username->setText(mytool.del_prefix(username));
    model->select();
    ui->role_view->setModel(model);
    model->insertColumn(13);
    model->setHeaderData(13,Qt::Horizontal,"授权");
    sql = new QSqlQuery("SELECT rolname FROM pg_authid a,pg_auth_members am WHERE a.oid = am.roleid and am.member = "+oid);
    while (sql->next()) {
        authRole << sql->value(0).toString();
    }
    for(int i = 0; i < model->rowCount(); i++){
        QSqlRecord record = model->record(i);
        QString rolename = record.field(0).value().toString();
        if(rolename != "postgres" && rolename != "pg_signal_backend" && rolename != "role_whiterole" && rolename != "role_blackrole"){
            if(mytool.checkType(rolename) == 2)
                ui->role_view->hideRow(i);
            else{
                record.setValue(0, mytool.del_prefix(rolename));
                model->setRecord(i, record);
                QModelIndex index = model->index(i,13,QModelIndex());
                QCheckBox *t = new QCheckBox;
                t->setObjectName(rolename);
                freshList << t;
                if(authRole.indexOf(rolename) != -1)
                    t->setCheckState(Qt::Checked);
                ui->role_view->setIndexWidget(index, t);
            }
        }
    }
    for(int i = 1; i < 13; i++)
        ui->role_view->hideColumn(i);
}



void DistriRoleList::saveBtnSlot(){
    if(authRole.length() != 0){
        QString role = authRole.join(",");
        qDebug() << "need revoke:"+role;
        sql = new QSqlQuery("revoke "+role+" from "+rolename);
    }
    authRole.clear();
    QStringList freshRoleList;
    for(int i = 0; i < freshList.length(); i++){
        if(freshList[i]->isChecked())
            freshRoleList << freshList[i]->objectName();
    }
    if(freshRoleList.length() > 0){
        QString role = freshRoleList.join(",");
        qDebug() << "need grant:"+role;
        sql = new QSqlQuery;
        if(sql->exec("grant "+role+" to "+rolename)){
            CCustomMessageBox *meg=new CCustomMessageBox("授权成功!");
            meg->exec();
            // QMessageBox::warning(this,"提示","授权成功",QMessageBox::Yes);
            authRole = freshRoleList;
        }else{
            CCustomMessageBox *meg=new CCustomMessageBox("授权失败 失败原因: "+sql->lastError().databaseText());
            meg->exec();
            //QMessageBox::warning(this,"提示","授权失败 失败原因: "+sql->lastError().databaseText(),QMessageBox::Yes);
        }
    }else{
        CCustomMessageBox *meg=new CCustomMessageBox("清除授权成功");
        meg->exec();
        //QMessageBox::warning(this,"提示","清除授权成功",QMessageBox::Yes);
    }
}
