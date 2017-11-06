#include "passwddialog.h"
#include "ui_passwddialog.h"
#include<QMessageBox>
#include "custommessagebox.h"
QString updateUserPWD;
PasswdDialog::PasswdDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PasswdDialog)
{
    ui->setupUi(this);
    connect(ui->pbt_OK,SIGNAL(clicked()),this,SLOT(closethisDiolag()));
    connect(ui->pbt_Cancle,SIGNAL(clicked()),this,SLOT(reject()));
}

PasswdDialog::~PasswdDialog()
{
    delete ui;
}
void PasswdDialog::closethisDiolag()
{
    QRegExp rx("(?!^\\d+$)(?!^[a-zA-Z]+$)(?!^[_#@]+$).{8,}");
    QRegExpValidator v(rx, 0);
    QString pwd=ui->newpw->text();
    int pos=0;
    if(v.validate(pwd,pos)!=QValidator::Acceptable)
    {
        CCustomMessageBox *meg=new CCustomMessageBox("密码的长度不能小于8位，而且必须是数字，字母，_,#,@的两种以上组合！");
        meg->exec();
        return;
    }
    if(ui->newpw->text()!=ui->newpw1->text())
    {
        CCustomMessageBox *meg=new CCustomMessageBox("两次输入的密码不一致！");
        meg->exec();
        //QMessageBox::warning(this,"提示","两次输入的密码不一致！",QMessageBox::Yes);
        return;
    }
    updateUserPWD=ui->newpw->text();
    accept();
}
