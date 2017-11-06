/********************************************************************************
** Form generated from reading UI file 'distrirolelist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTRIROLELIST_H
#define UI_DISTRIROLELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DistriRoleList
{
public:
    QTableView *role_view;
    QPushButton *saveBtn;
    QLabel *label;
    QLabel *username;

    void setupUi(QWidget *DistriRoleList)
    {
        if (DistriRoleList->objectName().isEmpty())
            DistriRoleList->setObjectName(QStringLiteral("DistriRoleList"));
        DistriRoleList->resize(292, 426);
        role_view = new QTableView(DistriRoleList);
        role_view->setObjectName(QStringLiteral("role_view"));
        role_view->setGeometry(QRect(10, 50, 271, 371));
        role_view->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        role_view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        saveBtn = new QPushButton(DistriRoleList);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setGeometry(QRect(220, 10, 61, 27));
        saveBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        label = new QLabel(DistriRoleList);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 16, 71, 21));
        label->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 11pt \"Agency FB\";\n"
"border-style: hidden;"));
        username = new QLabel(DistriRoleList);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(80, 10, 71, 31));
        username->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 11pt \"Agency FB\";\n"
"border-style: hidden;"));

        retranslateUi(DistriRoleList);

        QMetaObject::connectSlotsByName(DistriRoleList);
    } // setupUi

    void retranslateUi(QWidget *DistriRoleList)
    {
        DistriRoleList->setWindowTitle(QApplication::translate("DistriRoleList", "\350\247\222\350\211\262\345\210\206\351\205\215", Q_NULLPTR));
        saveBtn->setText(QApplication::translate("DistriRoleList", "\344\277\235\345\255\230", Q_NULLPTR));
        label->setText(QApplication::translate("DistriRoleList", "\345\275\223\345\211\215\350\247\222\350\211\262\357\274\232", Q_NULLPTR));
        username->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DistriRoleList: public Ui_DistriRoleList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTRIROLELIST_H
