#ifndef ADDROLEDIALOG_H
#define ADDROLEDIALOG_H
#include <QDialog>
#include <QString>
namespace Ui {
class AddRoleDialog;
}
class AddRoleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddRoleDialog(QWidget *parent = 0);
    ~AddRoleDialog();
private:
    Ui::AddRoleDialog *ui;

private slots:
    void closethisDialog();
};

#endif // ADDROLEDIALOG_H
