#ifndef PGINTEGRITY_H
#define PGINTEGRITY_H

#include <QWidget>
#include <qsqlquery.h>
#include <QDebug>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QMessageBox>
#include <QComboBox>
#include "mydatabaseconnect.h"
#include "mytool.h"

namespace Ui {
class pgintegrity;
}

class pgintegrity : public QWidget
{
    Q_OBJECT

public:
    explicit pgintegrity(QWidget *parent = 0);
    ~pgintegrity();

private:
    Ui::pgintegrity *ui;
    QSqlQuery *sql, *itemsql, *au_sql, *view_sql, *trigger_sql, *add_trigger_sql, *vitemsql, *verify_sql;
    QStandardItemModel *model;
    QStandardItemModel *verifymodel;
    QStandardItem *selecteditem;
    QStandardItem *removingitem;
    QStandardItem *verifyparentItem;
    QString selectedTableName;
    QString selectedDb, selectedTable;
    QList<QCheckBox *> dblist,tablelist,funclist,list;
    QStringList selectedTableList;
    myDatabaseConnect dbConnect;
    qint8 type = 1;
    MyTool mytool;
    void setBtn(int);

private slots:
    void loadpgintegrityData();
//    void addtableBtnSlot();
//    void removetbaleBtnSlot();
//    void verifyBtnSlot();
    void clicked(const QModelIndex &index);
    void vclicked(const QModelIndex &index);
    void on_addtable_btn_clicked();
    bool judgeExist(QStandardItem *root, QString tablename);
    bool addTrigger(QString tablename, QSqlDatabase qsqldb);
    bool removeTrigger(QString tablename, QSqlDatabase qsqldb);
    bool judgeTrigger(QString tablename, QSqlDatabase qsqldb);
    void on_removetable_btn_clicked();
    void on_verify_btn_clicked();
};

#endif // PGINTEGRITY_H
