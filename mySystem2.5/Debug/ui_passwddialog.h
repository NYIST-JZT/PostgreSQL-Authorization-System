/********************************************************************************
** Form generated from reading UI file 'passwddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWDDIALOG_H
#define UI_PASSWDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PasswdDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *newpw;
    QLineEdit *newpw1;
    QPushButton *pbt_OK;
    QPushButton *pbt_Cancle;

    void setupUi(QDialog *PasswdDialog)
    {
        if (PasswdDialog->objectName().isEmpty())
            PasswdDialog->setObjectName(QStringLiteral("PasswdDialog"));
        PasswdDialog->resize(389, 172);
        label = new QLabel(PasswdDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 111, 17));
        label->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        label_2 = new QLabel(PasswdDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 141, 17));
        label_2->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        newpw = new QLineEdit(PasswdDialog);
        newpw->setObjectName(QStringLiteral("newpw"));
        newpw->setGeometry(QRect(160, 20, 171, 25));
        newpw->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        newpw->setEchoMode(QLineEdit::Password);
        newpw1 = new QLineEdit(PasswdDialog);
        newpw1->setObjectName(QStringLiteral("newpw1"));
        newpw1->setGeometry(QRect(160, 50, 171, 25));
        newpw1->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        newpw1->setEchoMode(QLineEdit::Password);
        pbt_OK = new QPushButton(PasswdDialog);
        pbt_OK->setObjectName(QStringLiteral("pbt_OK"));
        pbt_OK->setGeometry(QRect(80, 110, 61, 27));
        pbt_OK->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        pbt_Cancle = new QPushButton(PasswdDialog);
        pbt_Cancle->setObjectName(QStringLiteral("pbt_Cancle"));
        pbt_Cancle->setGeometry(QRect(250, 110, 61, 27));
        pbt_Cancle->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));

        retranslateUi(PasswdDialog);

        QMetaObject::connectSlotsByName(PasswdDialog);
    } // setupUi

    void retranslateUi(QDialog *PasswdDialog)
    {
        PasswdDialog->setWindowTitle(QApplication::translate("PasswdDialog", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("PasswdDialog", "\350\257\267\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("PasswdDialog", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pbt_OK->setText(QApplication::translate("PasswdDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        pbt_Cancle->setText(QApplication::translate("PasswdDialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PasswdDialog: public Ui_PasswdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWDDIALOG_H
