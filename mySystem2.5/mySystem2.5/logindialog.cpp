#include <QDesktopWidget>
#include "logindialog.h"
#include "ui_logindialog.h"
#include "custommessagebox.h"
QString w_username;
QString w_passwd;
QString w_serverAddr;
QString w_port;

LoginDialog::LoginDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->passwd->setEchoMode( QLineEdit::Password );
    connect(ui->loginbtn,SIGNAL(clicked()),this,SLOT(loginSlot()));
    connect(ui->exitbtn,SIGNAL(clicked()),this,SLOT(exitSlot()));
    mydb = new myDatabaseConnect;
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::loginSlot(){
    QString username = QString(ui->username->text()).trimmed();
    QString passwd = QString(ui->passwd->text()).trimmed();
    QString serverAddr = QString(ui->serverAddr->text()).trimmed();
    QString port = QString(ui->port->text()).trimmed();
    w_username = username;
    if(username == "" || passwd == "" || serverAddr == "" || port == ""){
        CCustomMessageBox *meg=new CCustomMessageBox("信息不能为空");
        meg->exec();
        //QMessageBox::information(this,"提示","信息不能为空",QMessageBox::Yes);
        return;
    }
    QSqlDatabase db=QSqlDatabase::addDatabase("QPSQL");
    db.setHostName(serverAddr);
    db.setUserName(username);
    db.setPassword(passwd);
    db.setDatabaseName("postgres");
    if(db.open())
    {
        s = new MainWindow;
        s->show();
        s->move((QApplication::desktop()->width() - s->width())/2,(QApplication::desktop()->height() - s->height())/2);
        w_username = username;
        w_passwd = passwd;
        w_serverAddr = serverAddr;
        w_port = port;
        this->hide();
    }
    else
    {
        CCustomMessageBox *meg=new CCustomMessageBox("系统载入数据库失败，无法运行");
        meg->exec();
        //QMessageBox::information(NULL,"提示","系统载入数据库失败，无法运行",QMessageBox::Yes);
    }
}

void LoginDialog::exitSlot(){
    this->hide();
}
