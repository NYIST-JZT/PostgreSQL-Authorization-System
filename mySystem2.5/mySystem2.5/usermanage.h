#ifndef USERMANAGE_H
#define USERMANAGE_H
#include <QWidget>
#include <QSqlTableModel>
#include <QModelIndex>
#include <QMessageBox>
#include <QSqlRecord>
#include <QSqlError>
#include <QSqlQuery>
#include "mydatabaseconnect.h"
#include "mytool.h"
#include <QSqlRecord>
#include <QSqlField>
#include <QSqlRecord>
#include <QPushButton>
#include <distrirolelist.h>

namespace Ui {
class UserManage;
}

class UserManage : public QWidget
{
    Q_OBJECT

public:
    explicit UserManage(QWidget *parent = 0);
    ~UserManage();
private slots:
    void loaduserManageData();
    void addRowSlot();
    void saveDataSlot();
    void dropDataSlot();
    void updateDataSlot();
    void roleBtnSlot();
signals:
    void comeToRoleList(QString, QString);
private:
    Ui::UserManage *ui;
    QSqlTableModel *model;
    MyTool mytool;
    QSqlQuery *sql;
    DistriRoleList *distrirolelist;
};

#endif // USERMANAGE_H
