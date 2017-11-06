/********************************************************************************
** Form generated from reading UI file 'authcheck.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHCHECK_H
#define UI_AUTHCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthCheck
{
public:
    QTableView *auth_view;
    QLabel *label;
    QLabel *label_2;
    QComboBox *database;
    QPushButton *searchBtn;
    QLabel *rolename_1;

    void setupUi(QWidget *AuthCheck)
    {
        if (AuthCheck->objectName().isEmpty())
            AuthCheck->setObjectName(QStringLiteral("AuthCheck"));
        AuthCheck->resize(543, 429);
        auth_view = new QTableView(AuthCheck);
        auth_view->setObjectName(QStringLiteral("auth_view"));
        auth_view->setGeometry(QRect(10, 90, 521, 331));
        auth_view->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        auth_view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(AuthCheck);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 111, 31));
        label->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 11pt \"Agency FB\";"));
        label_2 = new QLabel(AuthCheck);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 111, 31));
        label_2->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 11pt \"Agency FB\";"));
        database = new QComboBox(AuthCheck);
        database->setObjectName(QStringLiteral("database"));
        database->setGeometry(QRect(120, 50, 151, 27));
        database->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        searchBtn = new QPushButton(AuthCheck);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        searchBtn->setGeometry(QRect(470, 60, 61, 27));
        searchBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        rolename_1 = new QLabel(AuthCheck);
        rolename_1->setObjectName(QStringLiteral("rolename_1"));
        rolename_1->setGeometry(QRect(120, 20, 67, 17));
        rolename_1->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Times New Roman\";"));

        retranslateUi(AuthCheck);

        QMetaObject::connectSlotsByName(AuthCheck);
    } // setupUi

    void retranslateUi(QWidget *AuthCheck)
    {
        AuthCheck->setWindowTitle(QApplication::translate("AuthCheck", "\346\235\203\351\231\220\350\256\276\347\275\256\350\256\260\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("AuthCheck", "\345\275\223\345\211\215\350\247\222\350\211\262\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("AuthCheck", "\346\225\260\346\215\256\345\237\237\351\200\211\346\213\251\357\274\232", Q_NULLPTR));
        searchBtn->setText(QApplication::translate("AuthCheck", "\346\237\245\350\257\242", Q_NULLPTR));
        rolename_1->setText(QApplication::translate("AuthCheck", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AuthCheck: public Ui_AuthCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHCHECK_H
