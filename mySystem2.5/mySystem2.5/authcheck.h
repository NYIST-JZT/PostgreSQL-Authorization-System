#ifndef AUTHCHECK_H
#define AUTHCHECK_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include "mydatabaseconnect.h"
#include "mytool.h"
#include <QSortFilterProxyModel>

namespace Ui {
class AuthCheck;
}

class AuthCheck : public QWidget
{
    Q_OBJECT

public:
    explicit AuthCheck(QWidget *parent = 0);
    ~AuthCheck();
private slots:
    void loadAuthCheckData(QString);
    void searchSlot();

private:
    Ui::AuthCheck *ui;
    QSqlQueryModel *model;
    QSqlQuery *sql;
    QString t_rolename;
    myDatabaseConnect dbConnect;
    MyTool mytool;
};

#endif // AUTHCHECK_H
