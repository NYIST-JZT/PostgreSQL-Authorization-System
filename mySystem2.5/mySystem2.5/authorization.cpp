#include "authorization.h"
#include "ui_authorization.h"
#include <qsqlerror.h>
#include <QCheckBox>

Authorization::Authorization(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Authorization)
{
    ui->setupUi(this);
    ui->dbtree->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->dbtree->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->dbtree->setEditTriggers(QAbstractItemView::NoEditTriggers);
    connect(ui->submitBtn,SIGNAL(clicked()),this,SLOT(submitBtnSlot()));
    //connect(ui->typeBox,SIGNAL(currentIndexChanged(int index)),this,SLOT(typeBoxChangeSlot(int)));
    list << ui->select << ui->allPrivileges << ui->create << ui->connect << ui->del << ui->execute << ui->insert << ui->trigger <<
                ui->references << ui->temporary << ui->truncate << ui->update;
    dblist << ui->connect << ui->create << ui->temporary;
    tablelist << ui->select << ui->del << ui->insert << ui->trigger << ui->references << ui->truncate << ui->update;
    funclist << ui->execute;
    for(int i = 0; i < 12; i++)
        connect(list[i],SIGNAL(clicked()),this,SLOT(opBtnSlot()));
}

Authorization::~Authorization()
{
    delete ui;
}

void Authorization::loadAuthorizationData(QString rolename){
    this->setBtn(type);
    selectedRoleName = rolename;
    ui->rolename->setText(mytool.del_prefix(rolename));
    sql = new QSqlQuery("SELECT datname FROM pg_database");
    model = new  QStandardItemModel;
    model->setHorizontalHeaderLabels(QStringList()<<QStringLiteral("数据域"));
    QStandardItem *parentItem = model->invisibleRootItem();
    QSqlDatabase mydb;
    while (sql->next()) {
      QString database = sql->value(0).toString();
      if(database != QString("template0") && database != QString("template1")){
          QStandardItem *dbitem = new QStandardItem(QString(database));
          parentItem->appendRow(dbitem);
          if(database != QString("postgres")){
              mydb = dbConnect.getConnectionByName(database);
              itemsql = new QSqlQuery("select tablename from pg_tables where schemaname='public'",mydb);
              view_sql = new QSqlQuery("select viewname from pg_views where schemaname ='public'",mydb);
              func_sql = new QSqlQuery("select proname from pg_proc where pronamespace = 2200",mydb);
          }else{
              itemsql = new QSqlQuery("select tablename from pg_tables");
              view_sql = new QSqlQuery("select viewname from pg_views");
              func_sql = new QSqlQuery("select proname from pg_proc where pronamespace = 11");
          }
          QStandardItem *tableTree = new QStandardItem("数据表");
          QStandardItem *viewTree = new QStandardItem("视图");
          QStandardItem *funcTree = new QStandardItem("函数");
          dbitem->appendRow(tableTree);
          dbitem->appendRow(viewTree);
          dbitem->appendRow(funcTree);
          while(itemsql->next()){
              QString table = itemsql->value(0).toString();
              QStandardItem *tableitem = new QStandardItem(QString(table));
              tableTree->appendRow(tableitem);
          }
          while(view_sql->next()){
              QString view = view_sql->value(0).toString();
              QStandardItem *viewitem = new QStandardItem(QString(view));
              viewTree->appendRow(viewitem);
          }
          while(func_sql->next()){
              QString func = func_sql->value(0).toString();
              if(database != QString("postgres")){
                  pro_sql = new QSqlQuery("select pronargs from pg_proc where proname = '"+func+"'",mydb);
              }else{
                  pro_sql = new QSqlQuery("select pronargs from pg_proc where proname = '"+func+"'");
              }
              QList<QString> args;
              if(pro_sql->next()){
                  qint8 num = pro_sql->value(0).toInt();
                  for(int i = 0; i < num; i++){
                      QString mysqltext = QString("select typname from pg_proc as a,pg_type as b where a.proname = '%1' and a.proargtypes[%2]=b.oid").arg(func).arg(i);
                      if(database != QString("postgres")){
                          pro_sql = new QSqlQuery(mysqltext ,mydb);
                      }else{
                          pro_sql = new QSqlQuery(mysqltext);
                      }
                      if(pro_sql->next())
                        args << pro_sql->value(0).toString();
                  }

              }
              QString argString = args.join(",");
              func = func+"("+argString+")";
              QStandardItem *funcitem = new QStandardItem(QString(func));
              funcTree->appendRow(funcitem);
          }
      }
    }
    ui->dbtree->setModel(model);
   connect(ui->dbtree, SIGNAL(clicked(QModelIndex)),this, SLOT(clicked(QModelIndex)));
   //connect(ui->opbox, SIGNAL(clicked(bool)), this, SLOT(onStateChanged(bool)));

}

//show the table's authorization
void Authorization::clicked(const QModelIndex &index){
   this->setBtn(type);
   selectedAuth.clear();
   QStandardItem *item = model->itemFromIndex(index);
   if(item->text() == "视图" || item->text() == "数据表" || item->text() == "函数"){
       return;
   }
   //not the root node
   if(item->hasChildren()){
       type = 1;
       selectedDb = item->text();
   }
   else{
       selectedDb = item->parent()->parent()->text();
       QString middle = item->parent()->text();
       if(middle == "数据表" || middle == "视图"){
           type = 2;
           selectedTable = item->text();
       }
       else if(middle == "函数"){
           type = 3;
           selectedFunc = item->text();
       }
   }
   this->setBtn(type);
   //handle the table authoriation
   QString database;
   if(type != 1)
       database = item->parent()->parent()->text();
   else
       database = item->text();
   QSqlDatabase mydb;
   QString sqltext = "";
   if(type == 2){
       sqltext = "select privilege_type from INFORMATION_SCHEMA.role_table_grants where grantee='"+selectedRoleName+"'and table_name='"+item->text()+"'";
   }else if(type == 1){
        sqltext = "select datacl from pg_database where datname = '"+selectedDb+"'";
   }else if(type == 3){
        sqltext = "select privilege_type from INFORMATION_SCHEMA.routine_privileges where grantee='"+selectedRoleName+"'and routine_name='"+item->text().section('(', 0, 0).trimmed()+"'";
   }
   if(database != "postgres"){
       mydb=dbConnect.getConnectionByName(database);
       sql = new QSqlQuery(sqltext,mydb);
   }else{
      sql = new QSqlQuery(sqltext);
   }
   if(type == 1){
       if(sql->next()){
           QString s_auth = sql->value(0).toString();
           s_auth = s_auth.left(s_auth.length()-1);
           s_auth = s_auth.right(s_auth.length()-1);
           QList<QString> arr = s_auth.split(",");
           foreach(QString s_item, arr){
               QString u_role = s_item.section('=', 0, 0).trimmed();
               if(u_role == selectedRoleName){
                   QString u_auth = s_item.section('=',1,1);
                   u_auth = u_auth.section('/',0,0);
                   foreach(QString temp, u_auth)
                       if(temp == "C"){
                           ui->create->setCheckState(Qt::Checked);
                       }else if(temp == "c"){
                             ui->connect->setCheckState(Qt::Checked);
                       }else if(temp == "T"){
                             ui->temporary->setCheckState(Qt::Checked);
                       }
               }
           }
       }
   }else{
       while (sql->next()) {
         QString auth = sql->value(0).toString();
         selectedAuth << auth;
         foreach(QCheckBox *item, list){
             if(item->text() == auth){
                 item->setCheckState(Qt::Checked);
                 break;
             }
         }
       }
   }
   QString authorization = selectedAuth.join(",");
   if(type == 1){
        ui->sqlspace->setText("grant "+authorization+" on database "+selectedDb+" to "+selectedRoleName);
   }else if(type == 2){
        ui->sqlspace->setText("grant "+authorization+" on table "+selectedTable+" to "+selectedRoleName);
   }else if(type == 3){
        ui->sqlspace->setText("grant "+authorization+" on function "+selectedFunc+" to "+selectedRoleName);
   }
}

void Authorization::setBtn(int type){
    //qint8 auth_type = ui->typeBox->currentIndex();
    for(int i = 0; i < 12; i++)
        list[i]->setCheckState(Qt::Unchecked);
    if(type == 1){
        foreach(QCheckBox *item, tablelist)
            item->setEnabled(false);
        foreach(QCheckBox *item, dblist)
            item->setEnabled(true);
        foreach(QCheckBox *item, funclist)
            item->setEnabled(false);
        ui->allPrivileges->setEnabled(true);
    }else if(type == 2){
        foreach(QCheckBox *item, tablelist)
            item->setEnabled(true);
        foreach(QCheckBox *item, dblist)
            item->setEnabled(false);
        foreach(QCheckBox *item, funclist)
            item->setEnabled(false);
        ui->allPrivileges->setEnabled(true);
    }else if(type == 3){
        foreach(QCheckBox *item, tablelist)
            item->setEnabled(false);
        foreach(QCheckBox *item, dblist)
            item->setEnabled(false);
        foreach(QCheckBox *item, funclist)
            item->setEnabled(true);
    }
}

void Authorization::submitBtnSlot(){
   if(selectedDb.isEmpty()){
        QMessageBox::warning(NULL,"提示","请点击选择您需要授权的数据库对象",QMessageBox::Yes);
        return;
    } 
    QSqlDatabase mydb;
    if(selectedDb != "postgres"){
        mydb = mydb=dbConnect.getConnectionByName(selectedDb);
        au_sql = new QSqlQuery(mydb);
    }else{
        au_sql = new QSqlQuery();
    }
    if(type == 1){
        au_sql->exec("revoke ALL PRIVILEGES ON "+selectedDb+" FROM "+selectedRoleName);
    }else if(type == 2){
        au_sql->exec("revoke ALL PRIVILEGES ON "+selectedTable+" FROM "+selectedRoleName);
    }else if(type ==3){
        au_sql->exec("revoke EXECUTE ON FUNCTION "+selectedFunc+" FROM "+selectedRoleName);
    }
    //qDebug() << selectedAuth;
    if(!selectedAuth.isEmpty()){
        if(au_sql->exec(ui->sqlspace->toPlainText())){
            QMessageBox::information(this,"提示","授权操作添加成功",QMessageBox::Yes);
        }else{
            QMessageBox::information(this,"提示","授权失败!错误原因："+au_sql->lastError().databaseText(),QMessageBox::Yes);
        }
    }else{
         QMessageBox::information(this,"提示","清除授权操作成功",QMessageBox::Yes);
    }
}

void Authorization::opBtnSlot(){
    QCheckBox *selectedop = qobject_cast<QCheckBox*>(sender());
    if(selectedop->isChecked()){
        if(selectedop->text() == "ALL PRIVILEGES"){
            selectedAuth.clear();
            selectedAuth << "ALL PRIVILEGES";
            foreach(QCheckBox *item, list){
                if(item->text()!="ALL PRIVILEGES"){
                    item->setEnabled(false);
                    item->setCheckState(Qt::Unchecked);
                }
            }
        }else
            selectedAuth << selectedop->text();
    }else{
        if(selectedop->text() == "ALL PRIVILEGES"){
            selectedAuth.clear();
            if(type == 1){
                foreach(QCheckBox *item, dblist){
                    item->setEnabled(true);
                }
                ui->allPrivileges->setEnabled(true);
            }else if(type == 2){
                foreach(QCheckBox *item, tablelist){
                    item->setEnabled(true);
                }
                ui->allPrivileges->setEnabled(true);
            }else if(type == 3){
                foreach(QCheckBox *item, funclist){
                    item->setEnabled(true);
                }
            }
        }else
            selectedAuth.removeAll(selectedop->text());

    }
    QString authorization = selectedAuth.join(",");
    if(type == 1)
        ui->sqlspace->setText("grant "+authorization+" on database "+selectedDb+" to "+selectedRoleName);
    else if(type == 2)
       ui->sqlspace->setText("grant "+authorization+" on table "+selectedTable+" to "+selectedRoleName);
    else if(type == 3)
        ui->sqlspace->setText("grant "+authorization+" on function "+selectedFunc+" to "+selectedRoleName);
}

