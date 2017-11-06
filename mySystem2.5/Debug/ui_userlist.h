/********************************************************************************
** Form generated from reading UI file 'userlist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLIST_H
#define UI_USERLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Userlist
{
public:
    QListView *listView;
    QPushButton *addBtn;

    void setupUi(QWidget *Userlist)
    {
        if (Userlist->objectName().isEmpty())
            Userlist->setObjectName(QStringLiteral("Userlist"));
        Userlist->resize(293, 415);
        listView = new QListView(Userlist);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 50, 271, 361));
        listView->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        addBtn = new QPushButton(Userlist);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(220, 20, 61, 27));
        addBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));

        retranslateUi(Userlist);

        QMetaObject::connectSlotsByName(Userlist);
    } // setupUi

    void retranslateUi(QWidget *Userlist)
    {
        Userlist->setWindowTitle(QApplication::translate("Userlist", "\347\224\250\346\210\267\351\200\211\346\213\251\345\210\227\350\241\250", Q_NULLPTR));
        addBtn->setText(QApplication::translate("Userlist", "\347\241\256\350\256\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Userlist: public Ui_Userlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLIST_H
