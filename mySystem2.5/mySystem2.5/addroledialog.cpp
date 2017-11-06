#include "addroledialog.h"
#include "ui_addroledialog.h"
#include "qstring.h"
#include<QMessageBox>
#include"custommessagebox.h"
#include<QRegExp>
#include<QRegExpValidator>
QStringList addRoleData;
extern bool IS_ADD_ROLE;
AddRoleDialog::AddRoleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddRoleDialog)
{
    ui->setupUi(this);
    //ui->dte_authdate->setCalendarPopup(true);
    //ui->dte_authdate->setDate(QDate::currentDate());
    connect(ui->pbt_Cancle,SIGNAL(clicked(bool)),this,SLOT(reject()));
    connect(ui->pbt_OK,SIGNAL(clicked(bool)),this,SLOT(closethisDialog()));
}
AddRoleDialog::~AddRoleDialog()
{
    delete ui;
}
void AddRoleDialog::closethisDialog()
{
    QRegExp rx("(?!^\\d+$)(?!^[a-zA-Z]+$)(?!^[_#@]+$).{8,}");
    QRegExpValidator v(rx, 0);
    QString pwd=ui->le_passwd->text();
    int pos=0;
    if(v.validate(pwd,pos)!=QValidator::Acceptable)
    {
        CCustomMessageBox *meg=new CCustomMessageBox("密码的长度不能小于8位，而且必须是数字，字母，_,#,@的两种以上组合！");
        meg->exec();
        return;
    }
    addRoleData.clear();
    QString rolename=ui->le_RoleName->text();
    if(rolename.size()<=0)
    {
        CCustomMessageBox *meg=new CCustomMessageBox("角色名不能为空");
        meg->exec();
        //QMessageBox::warning(this,"提示","角色名不能为空",QMessageBox::Yes);
        return;
    }
    addRoleData<<ui->le_RoleName->text();
    addRoleData<<ui->cbb_IsSuper->currentText();
    addRoleData<<ui->cbb_IsInherit->currentText();
    addRoleData<<ui->cbb_CreatRole->currentText();
    addRoleData<<ui->cbb_CreatDB->currentText();
    addRoleData<<ui->cbb_IsLogin->currentText();
    addRoleData<<ui->cbb_IsFlowCopy->currentText();
    addRoleData<<ui->sb_connect->text();
    addRoleData<<ui->le_passwd->text();
    addRoleData<<ui->cbb_IsSkipAuth->currentText();
    accept();
}
