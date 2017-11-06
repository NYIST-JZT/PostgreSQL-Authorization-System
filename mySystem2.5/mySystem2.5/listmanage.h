#ifndef LISTMANAGE_H
#define LISTMANAGE_H

#include <QWidget>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlRecord>
#include <QSqlField>
#include "userlist.h"
#include "mytool.h"

namespace Ui {
class ListManage;
}

class ListManage : public QWidget
{
    Q_OBJECT

public:
    explicit ListManage(QWidget *parent = 0);
    ~ListManage();

private slots:
    void loadlistManageData();
    void addUserBtnSlot();
    void searchBtnSlot();
    void delUserBtnSlot();

signals:
    void comeToUserlist(qint8);

private:
    Ui::ListManage *ui;
    QSqlTableModel *model;
    QSqlQuery *sql;
    Userlist *userlist;
    MyTool mytool;
};

#endif // LISTMANAGE_H
