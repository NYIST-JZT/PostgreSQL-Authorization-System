#ifndef MODIFYROLEDIALOG_H
#define MODIFYROLEDIALOG_H

#include <QDialog>

namespace Ui {
class ModifyRoleDialog;
}

class ModifyRoleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyRoleDialog(QWidget *parent = 0);
    ~ModifyRoleDialog();

private:
    Ui::ModifyRoleDialog *ui;

private slots:
    void closethisDialog();
};

#endif // MODIFYROLEDIALOG_H
