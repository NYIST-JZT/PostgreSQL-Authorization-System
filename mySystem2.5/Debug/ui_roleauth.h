/********************************************************************************
** Form generated from reading UI file 'roleauth.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROLEAUTH_H
#define UI_ROLEAUTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoleAuth
{
public:
    QPushButton *doAuthBtn;
    QTableView *role_view;
    QPushButton *authCheckBtn;

    void setupUi(QWidget *RoleAuth)
    {
        if (RoleAuth->objectName().isEmpty())
            RoleAuth->setObjectName(QStringLiteral("RoleAuth"));
        RoleAuth->resize(543, 418);
        doAuthBtn = new QPushButton(RoleAuth);
        doAuthBtn->setObjectName(QStringLiteral("doAuthBtn"));
        doAuthBtn->setGeometry(QRect(320, 10, 81, 27));
        doAuthBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        role_view = new QTableView(RoleAuth);
        role_view->setObjectName(QStringLiteral("role_view"));
        role_view->setGeometry(QRect(10, 40, 521, 371));
        role_view->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        role_view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        authCheckBtn = new QPushButton(RoleAuth);
        authCheckBtn->setObjectName(QStringLiteral("authCheckBtn"));
        authCheckBtn->setGeometry(QRect(420, 10, 111, 27));
        authCheckBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));

        retranslateUi(RoleAuth);

        QMetaObject::connectSlotsByName(RoleAuth);
    } // setupUi

    void retranslateUi(QWidget *RoleAuth)
    {
        RoleAuth->setWindowTitle(QString());
        doAuthBtn->setText(QApplication::translate("RoleAuth", "\350\247\222\350\211\262\346\216\210\346\235\203", Q_NULLPTR));
        authCheckBtn->setText(QApplication::translate("RoleAuth", "\346\216\210\346\235\203\350\256\260\345\275\225\346\237\245\347\234\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RoleAuth: public Ui_RoleAuth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROLEAUTH_H
