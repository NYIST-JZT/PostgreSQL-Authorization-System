#ifndef ROLEAUTH_H
#define ROLEAUTH_H

#include <QWidget>
#include <QSqlTableModel>

#include "authorization.h"
#include "authcheck.h"
#include <QSqlRecord>
#include <QSqlField>
#include "mytool.h"

namespace Ui {
class RoleAuth;
}

class RoleAuth : public QWidget
{
    Q_OBJECT

public:
    explicit RoleAuth(QWidget *parent = 0);
    ~RoleAuth();

private:
    Ui::RoleAuth *ui;
    QSqlTableModel *model;
    Authorization *t_authorization;
    AuthCheck *t_authChek;
    MyTool mytool;

signals:
    void comeToAuthorization(QString);
    void comeToAuthCheck(QString);

private slots:
    void loadRoleAuthData();
    void doAuthBtnSlot();
    void authCheckBtnSlot();
};

#endif // ROLEAUTH_H
