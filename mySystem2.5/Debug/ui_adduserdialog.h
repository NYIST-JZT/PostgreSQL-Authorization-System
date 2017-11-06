/********************************************************************************
** Form generated from reading UI file 'adduserdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERDIALOG_H
#define UI_ADDUSERDIALOG_H

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

class Ui_AddUserDialog
{
public:
    QLineEdit *le_UserName;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *le_pwd;
    QLineEdit *le_RoleName_4;
    QLabel *label_11;
    QPushButton *pbt_Cancle;
    QPushButton *pbt_OK;

    void setupUi(QDialog *AddUserDialog)
    {
        if (AddUserDialog->objectName().isEmpty())
            AddUserDialog->setObjectName(QStringLiteral("AddUserDialog"));
        AddUserDialog->resize(350, 226);
        le_UserName = new QLineEdit(AddUserDialog);
        le_UserName->setObjectName(QStringLiteral("le_UserName"));
        le_UserName->setGeometry(QRect(110, 30, 151, 25));
        le_UserName->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 5px; \n"
"color: rgb(109, 109, 109);"));
        label_9 = new QLabel(AddUserDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 30, 67, 21));
        label_9->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        label_10 = new QLabel(AddUserDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 70, 67, 21));
        label_10->setStyleSheet(QLatin1String("border-style:hidden;\n"
"color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";"));
        le_pwd = new QLineEdit(AddUserDialog);
        le_pwd->setObjectName(QStringLiteral("le_pwd"));
        le_pwd->setGeometry(QRect(110, 70, 151, 25));
        le_pwd->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 5px; \n"
"color: rgb(109, 109, 109);"));
        le_pwd->setEchoMode(QLineEdit::Password);
        le_RoleName_4 = new QLineEdit(AddUserDialog);
        le_RoleName_4->setObjectName(QStringLiteral("le_RoleName_4"));
        le_RoleName_4->setGeometry(QRect(110, 110, 151, 25));
        le_RoleName_4->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 5px; \n"
"color: rgb(109, 109, 109);"));
        le_RoleName_4->setEchoMode(QLineEdit::Password);
        label_11 = new QLabel(AddUserDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 110, 67, 21));
        label_11->setStyleSheet(QLatin1String("border-style:hidden;\n"
"color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";"));
        pbt_Cancle = new QPushButton(AddUserDialog);
        pbt_Cancle->setObjectName(QStringLiteral("pbt_Cancle"));
        pbt_Cancle->setGeometry(QRect(200, 170, 61, 27));
        pbt_Cancle->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        pbt_OK = new QPushButton(AddUserDialog);
        pbt_OK->setObjectName(QStringLiteral("pbt_OK"));
        pbt_OK->setGeometry(QRect(70, 170, 61, 27));
        pbt_OK->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));

        retranslateUi(AddUserDialog);

        QMetaObject::connectSlotsByName(AddUserDialog);
    } // setupUi

    void retranslateUi(QDialog *AddUserDialog)
    {
        AddUserDialog->setWindowTitle(QApplication::translate("AddUserDialog", "\346\267\273\345\212\240\347\224\250\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        label_9->setText(QApplication::translate("AddUserDialog", "<html><head/><body><p>\347\224\250\346\210\267\345\220\215\357\274\232</p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("AddUserDialog", "<html><head/><body><p>\345\257\206\347\240\201\357\274\232</p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("AddUserDialog", "<html><head/><body><p>\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232</p></body></html>", Q_NULLPTR));
        pbt_Cancle->setText(QApplication::translate("AddUserDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        pbt_OK->setText(QApplication::translate("AddUserDialog", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddUserDialog: public Ui_AddUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERDIALOG_H
