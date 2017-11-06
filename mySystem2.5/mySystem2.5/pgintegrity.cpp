#include "pgintegrity.h"
#include "ui_pgintegrity.h"

pgintegrity::pgintegrity(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pgintegrity)
{
    ui->setupUi(this);
    ui->alltable_qtview->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->alltable_qtview->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->alltable_qtview->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

pgintegrity::~pgintegrity()
{
    delete ui;
}


void pgintegrity::loadpgintegrityData() {
    sql = new QSqlQuery();
    sql = new QSqlQuery("SELECT datname FROM pg_database");
    model = new  QStandardItemModel;
    model->setHorizontalHeaderLabels(QStringList()<<QStringLiteral("数据域"));    
    verifymodel = new QStandardItemModel;
    verifymodel->setHorizontalHeaderLabels(QStringList() << QStringLiteral("验证域"));

    QStandardItem *parentItem = model->invisibleRootItem();
    QStandardItem *vparentItem = verifymodel->invisibleRootItem();
    selecteditem = new QStandardItem;
    QSqlDatabase mydb;
    QSqlDatabase vmydb;
    while (sql->next()) {
      QString database = sql->value(0).toString();
      if(database != QString("template0") && database != QString("template1") && database != QString("postgres") && database != QString("contrib_regression") && database != QString("pg") && database != QString("cc")){
          QStandardItem *dbitem = new QStandardItem(QString(database));
          parentItem->appendRow(dbitem);
          if(database != QString("postgres")){
              mydb = dbConnect.getConnectionByName(database);
              itemsql = new QSqlQuery("select tablename from pg_tables where schemaname='public'",mydb);
              view_sql = new QSqlQuery("select viewname from pg_views where schemaname ='public'",mydb);
          }else{
              itemsql = new QSqlQuery("select tablename from pg_tables");
              view_sql = new QSqlQuery("select viewname from pg_views");
          }
          QStandardItem *tableTree = new QStandardItem("数据表");
          dbitem->appendRow(tableTree);
          while(itemsql->next()){
              QString table = itemsql->value(0).toString();
              QStandardItem *tableitem = new QStandardItem(QString(table));
              tableTree->appendRow(tableitem);
          }
      }

      /* process verifyedtree */
      QString vdatabase = sql->value(0).toString();
      bool existVerifyedTable = false;
      if(vdatabase != QString("template0") && vdatabase != QString("template1")){
          QStandardItem *vdbitem = new QStandardItem(QString(vdatabase));
          if(database != QString("postgres")){
              vmydb = dbConnect.getConnectionByName(database);
              vitemsql = new QSqlQuery("select tablename from pg_tables where schemaname='public'",mydb);
          }else{
              vitemsql = new QSqlQuery("select tablename from pg_tables");
          }
          QStandardItem *vtableTree = new QStandardItem("数据表");
          vdbitem->appendRow(vtableTree);
          while(vitemsql->next()){
              QString vtable = vitemsql->value(0).toString();
              QStandardItem *vtableitem = new QStandardItem(QString(vtable));

              bool existtri = judgeTrigger(QString(vtable), vmydb);
              if(existtri) {
                  vtableTree->appendRow(vtableitem);
                  existVerifyedTable =true;
              }
          }

          if(existVerifyedTable) {
              vparentItem->appendRow(vdbitem);
          }
      }
    }
    ui->alltable_qtview->setModel(model);
    ui->verifyedtable_qtview->setModel(verifymodel);

    connect(ui->alltable_qtview, SIGNAL(clicked(QModelIndex)),this, SLOT(clicked(QModelIndex)));
    connect(ui->verifyedtable_qtview, SIGNAL(clicked(QModelIndex)),this, SLOT(vclicked(QModelIndex)),Qt::UniqueConnection);
    connect(ui->addtable_btn, SIGNAL(clicked()), this, SLOT(on_addtable_btn_clicked()),Qt::UniqueConnection);
    connect(ui->removetable_btn, SIGNAL(clicked()), this, SLOT(on_removetable_clicked()),Qt::UniqueConnection);


}

void pgintegrity::clicked(const QModelIndex &index) {
    QStandardItem *item = model->itemFromIndex(index);
    selecteditem = item;
}

void pgintegrity::vclicked(const QModelIndex &index) {
    QStandardItem *item = verifymodel->itemFromIndex(index);
    removingitem = item;
}


void pgintegrity::on_addtable_btn_clicked() {
    QStandardItem *item = selecteditem;
    if(item->text() == "视图" || item->text() == "数据表"){
        return;
    }
    if(item->hasChildren()) {
        return;
    } else {
        bool isexist = false;
        verifyparentItem = verifymodel->invisibleRootItem();
        QString tablename = item->text();
        isexist = judgeExist(verifyparentItem, tablename);
        qDebug("[on_addtable_btn_clicked] judge result: %d", isexist);
        if(verifyparentItem->hasChildren()) {
        }
        if(!isexist) {
            int childcount = verifyparentItem->rowCount();
            for(int i=0; i<childcount; i++) {
                QStandardItem *databaseitem = verifyparentItem->child(i);
                if(databaseitem->text().compare(item->parent()->parent()->text())==0) {
                    QStandardItem *tableitem = new QStandardItem(item->text().toStdString().data());
                    databaseitem->child(0)->appendRow(tableitem);
                    ui->verifyedtable_qtview->setModel(verifymodel);
                    QSqlDatabase currentdb = dbConnect.getConnectionByName(databaseitem->text());
                    bool addresult = addTrigger(tableitem->text(), currentdb);
                    return;
                }
            }

            QStandardItem *dbitem= new QStandardItem(item->parent()->parent()->text().toStdString().data());
            QStandardItem *typeitem = new QStandardItem(item->parent()->text().toStdString().data());
            QStandardItem *tableitem = new QStandardItem(item->text().toStdString().data());

            typeitem->appendRow(tableitem);
            dbitem->appendRow(typeitem);
            verifyparentItem->appendRow(dbitem);
            ui->verifyedtable_qtview->setModel(verifymodel);
            QSqlDatabase currentdb = dbConnect.getConnectionByName(dbitem->text());
            bool addresult = addTrigger(tableitem->text(), currentdb);
            return;

        } else {
            return;
        }
    }
}


bool pgintegrity::addTrigger(QString tablename, QSqlDatabase qsqldb) {
    bool result = false;

    QString addtrigstat = "CREATE TRIGGER pg_integrity AFTER INSERT OR UPDATE OR DELETE ON ";
    addtrigstat.append(tablename);
    addtrigstat.append(" FOR EACH ROW EXECUTE PROCEDURE pg_integrity()");
    add_trigger_sql = new QSqlQuery(addtrigstat, qsqldb);
    result = add_trigger_sql->isActive();
    qDebug("add trigger succ: %d", result);
    return result;bool addTrigger(QString tablename, QSqlDatabase qsqldb);

}

bool pgintegrity::removeTrigger(QString tablename, QSqlDatabase qsqldb) {
    bool result = false;
//    QString sqlstat = "select tgname from ( pg_trigger join pg_class on tgrelid=pg_class.oid ) join pg_proc on tgfoid=pg_proc.oid where pg_class.relname = '";
//    sqlstat.append(tablename);
//    sqlstat.append("'");
//    qDebug("select trgger stat: %s", sqlstat.toStdString().data());
//    trigger_sql = new QSqlQuery(sqlstat, qsqldb);
//    while(trigger_sql->next()) {
//        QString triggername = trigger_sql->value(0).toString();
//        QString triggerTag = "t_pgintegrity";
//        if(triggername.compare(triggerTag) == 0) {
//            return false;
//        }
//        qDebug("trigger name: %s", triggername.toStdString().data());
//    }
    QString addtrigstat = "DROP TRIGGER pg_integrity ON ";
    addtrigstat.append(tablename);
    add_trigger_sql = new QSqlQuery(addtrigstat, qsqldb);
    result = add_trigger_sql->isActive();
    qDebug("remove trigger succ: %d", result);
    return result;

}

bool pgintegrity::judgeTrigger(QString tablename, QSqlDatabase qsqldb) {
    bool result = false;
    QString sqlstat = "select tgname from ( pg_trigger join pg_class on tgrelid=pg_class.oid ) join pg_proc on tgfoid=pg_proc.oid where pg_class.relname = '";
    sqlstat.append(tablename);
    sqlstat.append("'");
    qDebug("select trgger stat: %s", sqlstat.toStdString().data());
    trigger_sql = new QSqlQuery(sqlstat, qsqldb);
    while(trigger_sql->next()) {
        QString triggername = trigger_sql->value(0).toString();
        QString triggerTag = "pg_integrity";
        qDebug("compare result: %d", triggername.compare(triggerTag));
        if(triggername.compare(triggerTag) == 0) {
            return true;
        }
        qDebug("trigger name: %s", triggername.toStdString().data());
    }

    return result;
}

bool pgintegrity::judgeExist(QStandardItem *root, QString tablename) {
    bool result = false;
    if(root->hasChildren()) {
        int count = root->rowCount();
        for(int i=0; i<count; i++) {
            QStandardItem *child = root->child(i);
            if(judgeExist(child, tablename) == true) {
                result = true;
            }
        }

    }else {
        QString rootname = root->text();;
        QString tablenamechar = tablename;
        if(rootname.compare(tablenamechar) == 0) {
            result = true;
        }
    }

    return result;
}

void pgintegrity::on_removetable_btn_clicked() {
    QStandardItem *item = removingitem;
    if(item->text() == "视图" || item->text() == "数据表"){
        return;
    }
    if(item->hasChildren()) {
        return;
    } else {
        bool isexist = false;
        verifyparentItem = verifymodel->invisibleRootItem();
        QString tablename = item->text();
        isexist = judgeExist(verifyparentItem, tablename);
        qDebug("[on_removetable_btn_clicked] judge result: %d", isexist);
        if(isexist) {
            int childcount = verifyparentItem->rowCount();
            qDebug("[on_removeable_btn_clicked] child count: %d", childcount);
            for(int i=0; i<childcount; i++) {
                QStandardItem *databaseitem = verifyparentItem->child(i);
                if(databaseitem->text().compare(item->parent()->parent()->text())==0) {
                    int tablecount = databaseitem->child(0)->rowCount();
                    qDebug("[on_removeable_btn_clicked] table count: %d", tablecount);
                    for(int j=0; j<tablecount; j++) {
                        qDebug("[on_removeable_btn_clicked] circu count: %d", j);
                        if(databaseitem->child(0)->child(j)->text().compare(item->text())==0) {
                            QSqlDatabase currentdb = dbConnect.getConnectionByName(databaseitem->text());
                            bool removeresult = removeTrigger(databaseitem->child(0)->child(j)->text(), currentdb);
                            qDebug("[on_removeable_btn_clicked] remove result: %d", removeresult);

                            qDebug("[on_removeable_btn_clicked] enter if: %s", item->text().toStdString().data());
                            databaseitem->child(0)->removeRow(j);
                            if(tablecount == 1) {
                                verifyparentItem->removeRow(i);
                                ui->verifyedtable_qtview->setModel(NULL);
                                ui->verifyedtable_qtview->setModel(verifymodel);
                                removingitem = NULL;
                                return;
                            } else {
                                ui->verifyedtable_qtview->setModel(NULL);
                                ui->verifyedtable_qtview->setModel(verifymodel);
                                ui->verifyedtable_qtview->expand(verifymodel->indexFromItem(databaseitem));
                                ui->verifyedtable_qtview->expand(verifymodel->indexFromItem(databaseitem->child(0)));
                                removingitem = NULL;
                                return;
                            }

                        }
                    }
                    return;
                }
            }
        } else {
            return;
        }
    }
}

void pgintegrity::on_verify_btn_clicked() {
    if(removingitem == NULL) {
        return;
    }
    QStandardItem *item = removingitem;
    if(item->text() == "视图" || item->text() == "数据表"){
        return;
    }
    if(item->hasChildren()) {
        return;
    } else {
        QStandardItem *databaseitem = removingitem->parent()->parent();
        QSqlDatabase verifydb = dbConnect.getConnectionByName(databaseitem->text());
        QString verifystat = "select * from pgintegrity_check('";
        verifystat.append(item->text());
        verifystat.append("')");
        verify_sql = new QSqlQuery(verifystat, verifydb);
        QString result_str = "";
        while(verify_sql->next()) {
            qDebug("verify reuslt: %s", verify_sql->value(0).toString().toStdString().data());
            result_str.append(verify_sql->value(0).toString());
            result_str.append("\n");
        }
        ui->output_textedit->setText(result_str);
    }
}
