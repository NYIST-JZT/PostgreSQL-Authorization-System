#include "authcheck.h"
#include "ui_authcheck.h"
#include<QDebug>
#include<QSqlError>

AuthCheck::AuthCheck(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AuthCheck)
{
    ui->setupUi(this);
    model = new QSqlQueryModel;
    ui->auth_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->auth_view->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->auth_view->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->auth_view->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->auth_view->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->auth_view->setSortingEnabled(true);
    sql = new QSqlQuery("SELECT datname FROM pg_database");
    while (sql->next()) {
      QString database = sql->value(0).toString();
      if(database != QString("template0") && database != QString("template1"))
         ui->database->addItem(database);
    }
    connect(ui->searchBtn,SIGNAL(clicked()),this,SLOT(searchSlot()));
}

AuthCheck::~AuthCheck()
{
    delete ui;
}

void AuthCheck::loadAuthCheckData(QString rolename){
    t_rolename = rolename;
    ui->rolename_1->setText(mytool.del_prefix(rolename));
    model->setQuery("select * from INFORMATION_SCHEMA.role_table_grants where grantee='"+rolename+"'");
    model->setHeaderData(0,Qt::Horizontal,"授权者");
    model->setHeaderData(1,Qt::Horizontal,"权限获得者");
    model->setHeaderData(2,Qt::Horizontal,"表_目录");
    model->setHeaderData(3,Qt::Horizontal,"表_模式");
    model->setHeaderData(4,Qt::Horizontal,"表_名称");
    model->setHeaderData(5,Qt::Horizontal,"权限类型");
    model->setHeaderData(6,Qt::Horizontal,"是否可授权");
    model->setHeaderData(7,Qt::Horizontal,"是否可继承");
    QSortFilterProxyModel *sqlproxy = new QSortFilterProxyModel(this);
    sqlproxy->setSourceModel(model);
    ui->auth_view->setModel(model);
}

void AuthCheck::searchSlot(){
    QString database = ui->database->currentText();
    QSqlDatabase mydb;
    if(database != "postgres"){
        mydb = dbConnect.getConnectionByName(database);
        model->setQuery("select * from INFORMATION_SCHEMA.role_table_grants where grantee='"+QString(t_rolename)+"'",mydb);
    }else{
        model->setQuery("select * from INFORMATION_SCHEMA.role_table_grants where grantee='"+QString(t_rolename)+"'");
    }
}
