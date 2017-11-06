/********************************************************************************
** Form generated from reading UI file 'usermanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMANAGE_H
#define UI_USERMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserManage
{
public:
    QTableView *role_view;
    QPushButton *delBtn;
    QPushButton *updateBtn;
    QPushButton *addBtn;
    QPushButton *submitBtn;
    QTextEdit *sqlspace;
    QPushButton *pbt_Refresh;

    void setupUi(QWidget *UserManage)
    {
        if (UserManage->objectName().isEmpty())
            UserManage->setObjectName(QStringLiteral("UserManage"));
        UserManage->resize(583, 418);
        role_view = new QTableView(UserManage);
        role_view->setObjectName(QStringLiteral("role_view"));
        role_view->setGeometry(QRect(10, 40, 561, 271));
        role_view->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        role_view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        delBtn = new QPushButton(UserManage);
        delBtn->setObjectName(QStringLiteral("delBtn"));
        delBtn->setGeometry(QRect(440, 10, 41, 27));
        delBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        updateBtn = new QPushButton(UserManage);
        updateBtn->setObjectName(QStringLiteral("updateBtn"));
        updateBtn->setGeometry(QRect(390, 10, 41, 27));
        updateBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        addBtn = new QPushButton(UserManage);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(340, 10, 41, 27));
        addBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        submitBtn = new QPushButton(UserManage);
        submitBtn->setObjectName(QStringLiteral("submitBtn"));
        submitBtn->setGeometry(QRect(500, 320, 61, 91));
        submitBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        sqlspace = new QTextEdit(UserManage);
        sqlspace->setObjectName(QStringLiteral("sqlspace"));
        sqlspace->setGeometry(QRect(10, 320, 481, 91));
        sqlspace->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        pbt_Refresh = new QPushButton(UserManage);
        pbt_Refresh->setObjectName(QStringLiteral("pbt_Refresh"));
        pbt_Refresh->setGeometry(QRect(490, 10, 41, 27));
        pbt_Refresh->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));

        retranslateUi(UserManage);

        QMetaObject::connectSlotsByName(UserManage);
    } // setupUi

    void retranslateUi(QWidget *UserManage)
    {
        UserManage->setWindowTitle(QString());
        delBtn->setText(QApplication::translate("UserManage", "\345\210\240\351\231\244", Q_NULLPTR));
        updateBtn->setText(QApplication::translate("UserManage", "\344\277\256\346\224\271", Q_NULLPTR));
        addBtn->setText(QApplication::translate("UserManage", "\345\242\236\345\212\240", Q_NULLPTR));
        submitBtn->setText(QApplication::translate("UserManage", "\346\217\220\344\272\244", Q_NULLPTR));
        pbt_Refresh->setText(QApplication::translate("UserManage", "\345\210\267\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserManage: public Ui_UserManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMANAGE_H
