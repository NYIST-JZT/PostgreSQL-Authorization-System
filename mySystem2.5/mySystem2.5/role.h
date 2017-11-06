#ifndef ROLE_H
#define ROLE_H

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
extern QString username;

namespace Ui {
class role;
}

class role : public QWidget
{
    Q_OBJECT

public:
    explicit role(QWidget *parent = 0);
    ~role();

private:
    Ui::role *ui;
    QSqlTableModel *model;
    QSqlQuery *sql;
    MyTool mytool;
    void saveAddRole(QStringList);
    void saveModifyRole(QStringList);
private slots:
    void loadRoleData();
    void addRowSlot();
    void saveDataSlot();
    void dropDataSlot();
    void updateDataSlot();

};
#endif // ROLE_H
