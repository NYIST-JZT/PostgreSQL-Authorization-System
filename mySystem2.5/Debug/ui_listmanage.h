/********************************************************************************
** Form generated from reading UI file 'listmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTMANAGE_H
#define UI_LISTMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListManage
{
public:
    QTableView *list_view;
    QPushButton *submitBtn;
    QTextEdit *sqlspace;
    QComboBox *listType;
    QLabel *label;
    QPushButton *addUserBtn;
    QPushButton *delUserBtn;

    void setupUi(QWidget *ListManage)
    {
        if (ListManage->objectName().isEmpty())
            ListManage->setObjectName(QStringLiteral("ListManage"));
        ListManage->resize(583, 418);
        list_view = new QTableView(ListManage);
        list_view->setObjectName(QStringLiteral("list_view"));
        list_view->setGeometry(QRect(10, 40, 571, 271));
        list_view->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        list_view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        submitBtn = new QPushButton(ListManage);
        submitBtn->setObjectName(QStringLiteral("submitBtn"));
        submitBtn->setGeometry(QRect(510, 320, 61, 91));
        submitBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        sqlspace = new QTextEdit(ListManage);
        sqlspace->setObjectName(QStringLiteral("sqlspace"));
        sqlspace->setGeometry(QRect(10, 320, 491, 91));
        sqlspace->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        listType = new QComboBox(ListManage);
        listType->setObjectName(QStringLiteral("listType"));
        listType->setGeometry(QRect(120, 6, 111, 31));
        listType->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        label = new QLabel(ListManage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 111, 41));
        label->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 11pt \"Agency FB\";\n"
"border-style: hidden;"));
        addUserBtn = new QPushButton(ListManage);
        addUserBtn->setObjectName(QStringLiteral("addUserBtn"));
        addUserBtn->setGeometry(QRect(378, 10, 71, 27));
        addUserBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        delUserBtn = new QPushButton(ListManage);
        delUserBtn->setObjectName(QStringLiteral("delUserBtn"));
        delUserBtn->setGeometry(QRect(460, 10, 71, 27));
        delUserBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));

        retranslateUi(ListManage);

        QMetaObject::connectSlotsByName(ListManage);
    } // setupUi

    void retranslateUi(QWidget *ListManage)
    {
        ListManage->setWindowTitle(QString());
        submitBtn->setText(QApplication::translate("ListManage", "\346\217\220\344\272\244", Q_NULLPTR));
        listType->clear();
        listType->insertItems(0, QStringList()
         << QApplication::translate("ListManage", "\351\273\221\345\220\215\345\215\225", Q_NULLPTR)
         << QApplication::translate("ListManage", "\347\231\275\345\220\215\345\215\225", Q_NULLPTR)
        );
        label->setText(QApplication::translate("ListManage", "\351\273\221\347\231\275\345\220\215\345\215\225\351\200\211\346\213\251\357\274\232", Q_NULLPTR));
        addUserBtn->setText(QApplication::translate("ListManage", "\346\210\220\345\221\230\346\267\273\345\212\240", Q_NULLPTR));
        delUserBtn->setText(QApplication::translate("ListManage", "\346\210\220\345\221\230\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListManage: public Ui_ListManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTMANAGE_H
