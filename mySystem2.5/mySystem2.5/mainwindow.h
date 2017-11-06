#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "role.h"
#include "roleauth.h"
#include "usermanage.h"
#include "listmanage.h"
#include "pgintegrity.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void roleManagebtnSlot();
    void roleAuthBtnSlot();
    void userManageBtnSlot();
    void listManageBtnSlot();
    void pgintegrityBtnSlot();

private:
    Ui::MainWindow *ui;
    role *roleManage;
    RoleAuth *roleauthManage;
    UserManage *userManage;
    ListManage *listManage;
    pgintegrity *pginte;


signals:
    void comeToRole();
    void comeToRoleAuth();
    void comeTouserManage();
    void comeTolistManage();
    void comeTopgintegrity();
};

#endif // MAINWINDOW_H
