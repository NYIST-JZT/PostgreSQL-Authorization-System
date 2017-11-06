#include "adduserdialog.h"
#include "ui_adduserdialog.h"
#include "custommessagebox.h"
#include"QString"
QStringList addUserData;
AddUserDialog::AddUserDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddUserDialog)
{
    ui->setupUi(this);
    connect(ui->pbt_OK,SIGNAL(clicked()),this,SLOT(closethisDialog()));
    connect(ui->pbt_Cancle,SIGNAL(clicked()),this,SLOT(reject()));
}
AddUserDialog::~AddUserDialog()
{
    delete ui;
}
void AddUserDialog::closethisDialog()
{
    QRegExp rx("(?!^\\d+$)(?!^[a-zA-Z]+$)(?!^[_#@]+$).{8,}");
    QRegExpValidator v(rx, 0);
    QString pwd=ui->le_pwd->text();
    int pos=0;
    if(v.validate(pwd,pos)!=QValidator::Acceptable)
    {
        CCustomMessageBox *meg=new CCustomMessageBox("密码的长度不能小于8位，而且必须是数字，字母，_,#,@的两种以上组合！");
        meg->exec();
        return;
    }
    QString rolename=ui->le_UserName->text();
    if(rolename.size()<=0)
    {
        CCustomMessageBox *msg=new CCustomMessageBox("用户名不能为空");
        msg->exec();
        //QMessageBox::warning(this,"提示","用户名不能为空",QMessageBox::Yes);
        return;
    }
    if(ui->le_pwd->text()!=ui->le_RoleName_4->text())
    {
        CCustomMessageBox *msg=new CCustomMessageBox("两次输入的密码不一致！");
        msg->exec();
        //QMessageBox::warning(this,"提示","两次输入的密码不一致！",QMessageBox::Yes);
        return;
    }
    addUserData.clear();
    addUserData<<ui->le_UserName->text();
    addUserData<<ui->le_pwd->text();
    accept();
}
