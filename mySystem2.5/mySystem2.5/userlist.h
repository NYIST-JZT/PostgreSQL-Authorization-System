#ifndef USERLIST_H
#define USERLIST_H

#include <QWidget>
#include <QStringListModel>
#include <QSqlQuery>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include "mytool.h"

namespace Ui {
class Userlist;
}

class Userlist : public QDialog
{
    Q_OBJECT

public:
    explicit Userlist(QWidget *parent = 0);
    ~Userlist();

signals:
    void showAddWhiteOrBlackRole();
private slots:
    void loadUserListData(qint8);
    void addBtnSlot();

private:
    Ui::Userlist *ui;
    QStringListModel *model;
    QSqlQuery *sql, *checkSql;
    qint8 listType;
    MyTool mytool;
};

#endif // USERLIST_H

