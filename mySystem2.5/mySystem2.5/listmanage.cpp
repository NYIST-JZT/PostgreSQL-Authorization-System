#include "listmanage.h"
#include "ui_listmanage.h"
#include <QDebug>
#include "custommessagebox.h"
ListManage::ListManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListManage)
{
    ui->setupUi(this);
    model=new QSqlTableModel(this);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setTable("listmember");
    model->setHeaderData(0,Qt::Horizontal,"编号");
    model->setHeaderData(1,Qt::Horizontal,"用户名");
    model->setHeaderData(2,Qt::Horizontal,"类型");
    ui->list_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->list_view->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->list_view->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->list_view->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->list_view->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    connect(ui->addUserBtn,SIGNAL(clicked()),this,SLOT(addUserBtnSlot()));
    connect(ui->listType,SIGNAL(currentIndexChanged(int)),this,SLOT(searchBtnSlot()));
    userlist = new Userlist(this);
    connect(this,SIGNAL(comeToUserlist(qint8)),userlist,SLOT(loadUserListData(qint8)));
    connect(ui->delUserBtn,SIGNAL(clicked()),this,SLOT(delUserBtnSlot()));
}

ListManage::~ListManage()
{
    delete ui;
}

void ListManage::loadlistManageData(){
    model->select();
    if(model->data(model->index(0,0)).toString().isEmpty())
    {
        CCustomMessageBox *meg=new CCustomMessageBox("名单信息为空，请增加名单信息");
        meg->exec();
        //QMessageBox::information(this,"提示","名单信息为空，请增加名单信息",QMessageBox::Yes);
        //emit EmitToTeacherManageToChangeStack();
        //this->hide();
    }
    for(int i = 0; i < model->rowCount(); i++){
        QSqlRecord record = model->record(i);
        if(record.field(2).value().toInt() == 1){
            record.setValue(2, QString("黑名单"));
        }else{
            record.setValue(2, QString("白名单"));
        }
        record.setValue(1,mytool.del_prefix(record.field(1).value().toString()));
        model->setRecord(i, record);
    }
    ui->list_view->setModel(model);
    ui->list_view->hideColumn(0);
    ui->sqlspace->setText("select * from listmember");
}

void ListManage::searchBtnSlot(){
    qint8 type;
    if(ui->listType->currentText() == QString("白名单"))
        type = 2;
    else
        type = 1;
    model->select();
    model->setFilter(QString("type = %1").arg(type));
    for(int i = 0; i < model->rowCount(); i++){
        QSqlRecord record = model->record(i);
        if(record.field(2).value().toInt() == 1){
            record.setValue(2, QString("黑名单"));
        }else{
            record.setValue(2, QString("白名单"));
        }
        record.setValue(1,mytool.del_prefix(record.field(1).value().toString()));
        model->setRecord(i, record);
    }
    ui->list_view->setModel(model);
    ui->sqlspace->setText(QString("select * from listmember where type = %1").arg(type));
}

void ListManage::addUserBtnSlot(){
    userlist->show();
    qint8 type;
    if(ui->listType->currentText() == QString("白名单"))
        type = 2;
    else
        type = 1;
    emit(comeToUserlist(type));
}

void ListManage::delUserBtnSlot(){
    qint8 type;
    QString role;
    int row= ui->list_view->currentIndex().row();
    if(row<0) {
        CCustomMessageBox *meg=new CCustomMessageBox("请选中一行数据！");
        meg->exec();
        //QMessageBox::warning(this,"提示","请选中一行数据！",QMessageBox::Yes);
        return;
    }
    QMessageBox::StandardButton rb = QMessageBox::question(this,"提示","你确定要删除吗？", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(rb==QMessageBox::Yes)
    {
        QModelIndex index1 = model->index(row,0);
        QModelIndex index2 = model->index(row,1);
        QModelIndex index3 = model->index(row,2);
        if(index3.data().toString() == "黑名单"){
            type = 1;
            role = "role_whiterole";
        }
        else{
            type = 2;
            role = "role_blackrole";
        }
        sql = new QSqlQuery;
        if(sql->exec(QString("delete from listmember where id = %1").arg(index1.data().toInt()))){
            /* if(sql->exec("revoke "+index2.data().toString()+" from "+role)){*/
            //QMessageBox::information(this,"提示","删除成功",QMessageBox::Yes);
            CCustomMessageBox *meg=new CCustomMessageBox("删除成功");
            meg->exec();
            ui->list_view->hideRow(row);
            /*  }else{
            QMessageBox::information(this,"提示","删除失败 失败原因:"+sql->lastError().databaseText(),QMessageBox::Yes);
        }*/
        }else{
            CCustomMessageBox *meg=new CCustomMessageBox("删除失败 失败原因:"+sql->lastError().databaseText());
            meg->exec();
            //QMessageBox::information(this,"提示","删除失败 失败原因:"+sql->lastError().databaseText(),QMessageBox::Yes);
        }
    }
}
