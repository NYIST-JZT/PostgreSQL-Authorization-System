#include "modifyroledialog.h"
#include "ui_modifyroledialog.h"

extern QStringList modifyRoleData;
ModifyRoleDialog::ModifyRoleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyRoleDialog)
{
    ui->setupUi(this);
    ui->dte_authdate->setCalendarPopup(true);
    ui->dte_authdate->setDate(QDate::currentDate());
    ui->dte_authdate->setDisplayFormat("yyyy-MM-dd HH:mm:ss");
    connect(ui->pbt_OK,SIGNAL(clicked(bool)),this,SLOT(closethisDialog()));
    connect(ui->pbt_Cancle,SIGNAL(clicked(bool)),this,SLOT(reject()));
    ui->lb_RoleName->setText(modifyRoleData[0]);
    modifyRoleData[1]=="false"? ui->cbb_IsSuper->setCurrentIndex(0):ui->cbb_IsSuper->setCurrentIndex(1);
    ui->cbb_IsInherit->setCurrentText(modifyRoleData[2]);
    ui->cbb_CreatRole->setCurrentText(modifyRoleData[3]);
    ui->cbb_CreatDB->setCurrentText(modifyRoleData[4]);
    ui->cbb_IsLogin->setCurrentText(modifyRoleData[5]);
    QString coutstr=modifyRoleData[7];
    ui->cbb_IsFlowCopy->setCurrentText(modifyRoleData[6]);
    ui->sb_connect->setValue(coutstr.toInt());
    QString datetime=modifyRoleData[9];
    ui->dte_authdate->setDateTime(QDateTime::fromString(datetime));
    ui->cbb_IsSkipAuth->setCurrentText(modifyRoleData[10]);
}

ModifyRoleDialog::~ModifyRoleDialog()
{
    delete ui;
}
void ModifyRoleDialog::closethisDialog()
{
    modifyRoleData.clear();
    modifyRoleData<<ui->lb_RoleName->text();
    modifyRoleData<<ui->cbb_IsSuper->currentText();
    modifyRoleData<<ui->cbb_IsInherit->currentText();
    modifyRoleData<<ui->cbb_CreatRole->currentText();
    modifyRoleData<<ui->cbb_CreatDB->currentText();
    modifyRoleData<<ui->cbb_IsLogin->currentText();
    modifyRoleData<<ui->cbb_IsFlowCopy->currentText();
    modifyRoleData<<ui->sb_connect->text();
    QDateTime unitTime=ui->dte_authdate->dateTime();
    if(unitTime>QDateTime::currentDateTime())
    {
        modifyRoleData<<ui->dte_authdate->text();
    }
    else {
        modifyRoleData<<"";
    }
    modifyRoleData<<ui->cbb_IsSkipAuth->currentText();
    accept();
}
