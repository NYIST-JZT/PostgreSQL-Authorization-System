#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

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
class Authorization;
}

class Authorization : public QWidget
{
    Q_OBJECT

public:
    explicit Authorization(QWidget *parent = 0);
    ~Authorization();

private:
    Ui::Authorization *ui;
    QSqlQuery *sql, *itemsql, *au_sql, *view_sql, *func_sql, *pro_sql;
    QStandardItemModel *model;
    QString selectedRoleName;
    QString selectedDb, selectedTable, selectedFunc;
    QList<QCheckBox *> dblist,tablelist,funclist,list;
    QStringList selectedAuth;
    myDatabaseConnect dbConnect;
    qint8 type = 1;
    MyTool mytool;
    void setBtn(int);

private slots:
    void loadAuthorizationData(QString);
    void submitBtnSlot();
    void clicked(const QModelIndex &index);
    void opBtnSlot();
};

#endif // AUTHORIZATION_H
