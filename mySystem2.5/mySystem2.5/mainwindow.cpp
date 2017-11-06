#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>

extern QString w_username;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    roleManage=new role;
    ui->funcstack->addWidget(roleManage);
    roleManage->hide();
    ui->lb_username->setText(w_username+",欢迎您");
    connect(ui->roleManage_btn,SIGNAL(clicked()),this,SLOT(roleManagebtnSlot()));
    connect(this,SIGNAL(comeToRole()),roleManage,SLOT(loadRoleData()));
    roleauthManage = new RoleAuth;
    ui->funcstack->addWidget(roleauthManage);
    connect(ui->role_permission_btn,SIGNAL(clicked()),this,SLOT(roleAuthBtnSlot()));
    connect(this,SIGNAL(comeToRoleAuth()),roleauthManage,SLOT(loadRoleAuthData()));
    userManage = new UserManage;
    ui->funcstack->addWidget(userManage);
    connect(ui->userManage_btn,SIGNAL(clicked()),this,SLOT(userManageBtnSlot()));
    connect(this,SIGNAL(comeTouserManage()),userManage,SLOT(loaduserManageData()));
    listManage = new ListManage;
    ui->funcstack->addWidget(listManage);
    connect(ui->listManage_btn,SIGNAL(clicked()),this,SLOT(listManageBtnSlot()));
    connect(this,SIGNAL(comeTolistManage()),listManage,SLOT(loadlistManageData()));
    pginte = new pgintegrity;
    ui->funcstack->addWidget(pginte);
    connect(ui->pgintegrity_btn, SIGNAL(clicked()), this, SLOT(pgintegrityBtnSlot()));
    connect(this, SIGNAL(comeTopgintegrity()), pginte, SLOT(loadpgintegrityData()));

    connect(ui->pb_Exit,SIGNAL(clicked(bool)),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::roleManagebtnSlot(){
    roleManage->show();
    ui->funcstack->setCurrentIndex(0);
     ui->funcstack->setCurrentWidget(roleManage);
    emit comeToRole();
}

void MainWindow::roleAuthBtnSlot(){
    roleauthManage->show();
    ui->funcstack->setCurrentIndex(1);
    ui->funcstack->setCurrentWidget(roleauthManage);
    emit comeToRoleAuth();
}

void MainWindow::userManageBtnSlot(){
    userManage->show();
    ui->funcstack->setCurrentIndex(2);
    ui->funcstack->setCurrentWidget(userManage);
    emit comeTouserManage();
}

void MainWindow::listManageBtnSlot(){
    listManage->show();
    ui->funcstack->setCurrentIndex(3);
    ui->funcstack->setCurrentWidget(listManage);
    emit comeTolistManage();
}

void MainWindow::pgintegrityBtnSlot(){
    pginte->show();
    ui->funcstack->setCurrentIndex(4);
    ui->funcstack->setCurrentWidget(pginte);
    emit comeTopgintegrity();
}
