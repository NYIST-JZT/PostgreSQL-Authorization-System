#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QWidget>
#include "mainwindow.h"
#include <QMessageBox>
#include "mydatabaseconnect.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QWidget
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

private slots:
    void loginSlot();
    void exitSlot();

private:
    Ui::LoginDialog *ui;
    MainWindow *s;
    myDatabaseConnect *mydb;
};

#endif // LOGINDIALOG_H
