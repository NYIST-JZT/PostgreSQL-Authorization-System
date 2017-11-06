#include "roleauth.h"
#include "ui_roleauth.h"
#include <QDebug>
#include <qsqlerror.h>
#include <QDesktopWidget>
#include"custommessagebox.h"

RoleAuth::RoleAuth(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RoleAuth)
{
    ui->setupUi(this);
    ui->role_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->role_view->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->role_view->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->role_view->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->role_view->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->role_view->verticalHeader()->hide();
    model=new QSqlTableModel(this);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setTable("pg_roles");
    model->setHeaderData(0,Qt::Horizontal,"角色名");
    t_authorization = new Authorization;
    connect(ui->doAuthBtn,SIGNAL(clicked()),this,SLOT(doAuthBtnSlot()));
    connect(this,SIGNAL(comeToAuthorization(QString)),t_authorization,SLOT(loadAuthorizationData(QString)));
    t_authChek = new AuthCheck;
    connect(ui->authCheckBtn,SIGNAL(clicked()),this,SLOT(authCheckBtnSlot()));
    connect(this,SIGNAL(comeToAuthCheck(QString)),t_authChek,SLOT(loadAuthCheckData(QString)));
}


RoleAuth::~RoleAuth()
{
    delete ui;
}

void RoleAuth::loadRoleAuthData(){
    model->select();
    ui->role_view->setModel(model);
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
#include <QDesktopWidget>
        }
    }
    for(int i = 1; i < model->columnCount(); i++)
        ui->role_view->hideColumn(i);
}

void RoleAuth::doAuthBtnSlot(){
    int row= ui->role_view->currentIndex().row();
    QModelIndex index = model->index(row,0);
    if(row == -1){
        CCustomMessageBox *meg=new CCustomMessageBox("请点击选择您要操作的角色");
        meg->exec();
        //QMessageBox::warning(NULL,"提示","",QMessageBox::Yes);
        return;
    }

    t_authorization->show();
    t_authorization->move((QApplication::desktop()->width() - t_authorization->width())/2,(QApplication::desktop()->height() - t_authorization->height())/2);
    emit comeToAuthorization(mytool.add_prefix(index.data().toString(), 1));
}

void RoleAuth::authCheckBtnSlot(){
    int row= ui->role_view->currentIndex().row();
    QModelIndex index = model->index(row,0);
    if(row == -1){
        CCustomMessageBox *meg=new CCustomMessageBox("请点击选择您要操作的角色");
        meg->exec();
       // QMessageBox::warning(NULL,"提示","",QMessageBox::Yes);
        return;
    }
    t_authChek->show();
    t_authChek->move((QApplication::desktop()->width() - t_authChek->width())/2,(QApplication::desktop()->height() - t_authChek->height())/2);
    emit comeToAuthCheck(mytool.add_prefix(index.data().toString(), 1));
}
