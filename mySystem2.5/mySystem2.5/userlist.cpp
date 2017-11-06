#include "userlist.h"
#include "ui_userlist.h"
#include <QDebug>
#include "custommessagebox.h"

Userlist::Userlist(QWidget *parent) :
   QDialog(parent),
    ui(new Ui::Userlist)
{
    ui->setupUi(this);
    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->listView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->listView->setSelectionBehavior(QAbstractItemView::SelectRows);
    model = new QStringListModel;
    connect(ui->addBtn,SIGNAL(clicked()),this,SLOT(addBtnSlot()));
    connect(this,SIGNAL(showAddWhiteOrBlackRole()),parent,SLOT(searchBtnSlot()));
    //connect(this,SIGNAL(addSucess()),this,SLOT(addBtnSlot()));

}

Userlist::~Userlist()
{
    delete ui;
}

void Userlist::loadUserListData(qint8 type){
    listType = type;
    sql = new QSqlQuery("SELECT usename FROM pg_user");
    QStringList userList;
    while (sql->next()) {
       QString str = sql->value(0).toString();
       if(mytool.checkType(str) == 2)
            userList << mytool.del_prefix(str);
    }
    model->setStringList(userList);
    ui->listView->setModel(model);
}

void Userlist::addBtnSlot(){
    int row= ui->listView->currentIndex().row();
    if(row<0) {
        CCustomMessageBox *meg=new CCustomMessageBox("请选中一行数据！");
        meg->exec();
        //QMessageBox::warning(this,"提示","",QMessageBox::Yes);
        return;
    }
    QModelIndex index = model->index(row,0);
    checkSql = new QSqlQuery(QString("select * from listmember where username = '%1'").arg(mytool.add_prefix(index.data().toString(), 2)));
    qDebug() << checkSql->lastError();
    if(checkSql->next()){
        CCustomMessageBox *meg=new CCustomMessageBox("用户不能被同时添加到黑白名单!");
        meg->exec();
        //QMessageBox::warning(this,"提示","",QMessageBox::Yes);
        return;
    }
    sql = new QSqlQuery;
    sql->prepare("INSERT INTO listmember (username, type) "
"VALUES (:username, :type)");
    sql->bindValue(0, mytool.add_prefix(index.data().toString(), 2));
    sql->bindValue(1, listType);
    QString role;
    if(listType == 1){
        role = "role_blackrole";
    }else{
        role = "role_whiterole";
    }
    if(sql->exec()){
        if(sql->exec("grant "+mytool.add_prefix(index.data().toString(), 2)+" to "+role)){
            CCustomMessageBox *meg=new CCustomMessageBox("添加成功！");
            meg->exec();
            //QMessageBox::information(this,"提示","添加成功",QMessageBox::Yes);
            emit(showAddWhiteOrBlackRole());
        }else{
            CCustomMessageBox *meg=new CCustomMessageBox("添加失败 失败原因:"+sql->lastError().databaseText());
            meg->exec();
            //QMessageBox::information(this,"提示","添加失败 失败原因:"+sql->lastError().databaseText(),QMessageBox::Yes);
        }
    }else{
        CCustomMessageBox *meg=new CCustomMessageBox("添加失败 失败原因:"+sql->lastError().databaseText());
        meg->exec();
        //QMessageBox::information(this,"提示","添加失败 失败原因:"+sql->lastError().databaseText(),QMessageBox::Yes);
    }
}
