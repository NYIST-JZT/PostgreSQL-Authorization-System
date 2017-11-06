#ifndef DISTRIROLELIST_H
#define DISTRIROLELIST_H

#include <QWidget>
#include <QSqlQuery>
#include <QCheckBox>
#include <QSqlError>
#include <QVBoxLayout>
#include <QGroupBox>
#include "mytool.h"
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QSqlField>
#include <QCheckBox>
#include <QMessageBox>
#include <QList>

namespace Ui {
class DistriRoleList;
}

class DistriRoleList : public QWidget
{
    Q_OBJECT

public:
    explicit DistriRoleList(QWidget *parent = 0);
    ~DistriRoleList();
private slots:
    void loadRoleList(QString, QString);
    void saveBtnSlot();


private:
    Ui::DistriRoleList *ui;
    QSqlQuery *sql;
    MyTool mytool;
    QSqlTableModel *model;
    QStringList authRole;
    QList<QCheckBox *> freshList;
    QString rolename;
};

#endif // DISTRIROLELIST_H
