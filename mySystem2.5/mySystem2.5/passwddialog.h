#ifndef PASSWDDIALOG_H
#define PASSWDDIALOG_H

#include <QDialog>

namespace Ui {
class PasswdDialog;
}

class PasswdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PasswdDialog(QWidget *parent = 0);
    ~PasswdDialog();
private slots:
    void closethisDiolag();
private:
    Ui::PasswdDialog *ui;
};

#endif // PASSWDDIALOG_H
