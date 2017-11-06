/********************************************************************************
** Form generated from reading UI file 'role.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROLE_H
#define UI_ROLE_H

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

class Ui_role
{
public:
    QTableView *role_view;
    QPushButton *addBtn;
    QPushButton *delBtn;
    QTextEdit *sqlspace;
    QPushButton *submitBtn;
    QPushButton *updateBtn;
    QPushButton *pbt_Refresh;

    void setupUi(QWidget *role)
    {
        if (role->objectName().isEmpty())
            role->setObjectName(QStringLiteral("role"));
        role->resize(583, 418);
        role_view = new QTableView(role);
        role_view->setObjectName(QStringLiteral("role_view"));
        role_view->setGeometry(QRect(10, 40, 571, 271));
        role_view->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        role_view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        addBtn = new QPushButton(role);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(340, 10, 41, 27));
        addBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        delBtn = new QPushButton(role);
        delBtn->setObjectName(QStringLiteral("delBtn"));
        delBtn->setGeometry(QRect(440, 10, 41, 27));
        delBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        sqlspace = new QTextEdit(role);
        sqlspace->setObjectName(QStringLiteral("sqlspace"));
        sqlspace->setGeometry(QRect(10, 320, 491, 91));
        sqlspace->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        submitBtn = new QPushButton(role);
        submitBtn->setObjectName(QStringLiteral("submitBtn"));
        submitBtn->setGeometry(QRect(510, 320, 61, 91));
        submitBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        updateBtn = new QPushButton(role);
        updateBtn->setObjectName(QStringLiteral("updateBtn"));
        updateBtn->setGeometry(QRect(390, 10, 41, 27));
        updateBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        pbt_Refresh = new QPushButton(role);
        pbt_Refresh->setObjectName(QStringLiteral("pbt_Refresh"));
        pbt_Refresh->setGeometry(QRect(490, 10, 41, 27));
        pbt_Refresh->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));

        retranslateUi(role);

        QMetaObject::connectSlotsByName(role);
    } // setupUi

    void retranslateUi(QWidget *role)
    {
        role->setWindowTitle(QString());
        addBtn->setText(QApplication::translate("role", "\345\242\236\345\212\240", Q_NULLPTR));
        delBtn->setText(QApplication::translate("role", "\345\210\240\351\231\244", Q_NULLPTR));
        submitBtn->setText(QApplication::translate("role", "\346\217\220\344\272\244", Q_NULLPTR));
        updateBtn->setText(QApplication::translate("role", "\344\277\256\346\224\271", Q_NULLPTR));
        pbt_Refresh->setText(QApplication::translate("role", "\345\210\267\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class role: public Ui_role {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROLE_H
