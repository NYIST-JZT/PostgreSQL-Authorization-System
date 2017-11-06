/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QPushButton *loginbtn;
    QPushButton *exitbtn;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *serverAddr;
    QLabel *label_6;
    QLineEdit *port;
    QLabel *label_7;
    QLineEdit *username;
    QLabel *label_8;
    QLineEdit *passwd;

    void setupUi(QWidget *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(635, 377);
        LoginDialog->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 86, 220, 255), stop:1 rgba(255, 184, 184, 255));"));
        loginbtn = new QPushButton(LoginDialog);
        loginbtn->setObjectName(QStringLiteral("loginbtn"));
        loginbtn->setGeometry(QRect(180, 310, 71, 27));
        loginbtn->setStyleSheet(QLatin1String("font: 11pt \"Agency FB\";\n"
"color: rgb(78, 160, 201);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 5px; "));
        exitbtn = new QPushButton(LoginDialog);
        exitbtn->setObjectName(QStringLiteral("exitbtn"));
        exitbtn->setGeometry(QRect(380, 310, 71, 27));
        exitbtn->setStyleSheet(QLatin1String("font: 11pt \"Agency FB\";\n"
"color: rgb(78, 160, 201);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 5px; "));
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 40, 261, 31));
        label_3->setStyleSheet(QLatin1String("font: 15pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: transparent;"));
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(LoginDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 100, 51, 17));
        label_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 11pt \"Agency FB\";\n"
"background-color: transparent;"));
        serverAddr = new QLineEdit(LoginDialog);
        serverAddr->setObjectName(QStringLiteral("serverAddr"));
        serverAddr->setGeometry(QRect(260, 100, 191, 27));
        serverAddr->setStyleSheet(QLatin1String("border-style:hidden;\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(109, 109, 109);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 5px; \n"
""));
        label_6 = new QLabel(LoginDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(180, 140, 67, 31));
        label_6->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 11pt \"Agency FB\";\n"
"background-color: transparent;"));
        port = new QLineEdit(LoginDialog);
        port->setObjectName(QStringLiteral("port"));
        port->setGeometry(QRect(260, 150, 191, 27));
        port->setStyleSheet(QLatin1String("border-style:hidden;\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(109, 109, 109);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 5px; \n"
""));
        label_7 = new QLabel(LoginDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(180, 190, 67, 21));
        label_7->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 11pt \"Agency FB\";\n"
"background-color: transparent;"));
        username = new QLineEdit(LoginDialog);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(260, 190, 191, 27));
        username->setStyleSheet(QLatin1String("border-style:hidden;\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(109, 109, 109);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 5px; \n"
""));
        label_8 = new QLabel(LoginDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(180, 230, 67, 21));
        label_8->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 11pt \"Agency FB\";\n"
"background-color: transparent;"));
        passwd = new QLineEdit(LoginDialog);
        passwd->setObjectName(QStringLiteral("passwd"));
        passwd->setGeometry(QRect(260, 230, 191, 27));
        passwd->setStyleSheet(QLatin1String("border-style:hidden;\n"
"font: 10pt \"Times New Roman\";\n"
"color: rgb(109, 109, 109);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 5px; \n"
""));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QWidget *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        loginbtn->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        exitbtn->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoginDialog", "\350\256\277\351\227\256\346\216\247\345\210\266\347\263\273\347\273\237\347\231\273\345\275\225", Q_NULLPTR));
        label_4->setText(QApplication::translate("LoginDialog", "\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        serverAddr->setText(QApplication::translate("LoginDialog", "localhost", Q_NULLPTR));
        label_6->setText(QApplication::translate("LoginDialog", "\347\253\257\345\217\243\345\217\267", Q_NULLPTR));
        port->setText(QApplication::translate("LoginDialog", "5432", Q_NULLPTR));
        label_7->setText(QApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        username->setText(QApplication::translate("LoginDialog", "postgres", Q_NULLPTR));
        label_8->setText(QApplication::translate("LoginDialog", "\345\257\206    \347\240\201", Q_NULLPTR));
        passwd->setText(QApplication::translate("LoginDialog", "1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
