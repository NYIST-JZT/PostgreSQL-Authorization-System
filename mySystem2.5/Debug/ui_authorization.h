/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authorization
{
public:
    QListView *oplist;
    QTreeView *dbtree;
    QTextEdit *sqlspace;
    QPushButton *submitBtn;
    QGroupBox *opbox;
    QVBoxLayout *verticalLayout;
    QCheckBox *select;
    QCheckBox *insert;
    QCheckBox *update;
    QCheckBox *del;
    QCheckBox *truncate;
    QCheckBox *references;
    QCheckBox *trigger;
    QCheckBox *create;
    QCheckBox *connect;
    QCheckBox *temporary;
    QCheckBox *execute;
    QCheckBox *allPrivileges;
    QLabel *label;
    QLabel *rolename;

    void setupUi(QWidget *Authorization)
    {
        if (Authorization->objectName().isEmpty())
            Authorization->setObjectName(QStringLiteral("Authorization"));
        Authorization->resize(541, 497);
        oplist = new QListView(Authorization);
        oplist->setObjectName(QStringLiteral("oplist"));
        oplist->setGeometry(QRect(260, 50, 271, 341));
        oplist->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        dbtree = new QTreeView(Authorization);
        dbtree->setObjectName(QStringLiteral("dbtree"));
        dbtree->setGeometry(QRect(10, 50, 241, 341));
        dbtree->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        sqlspace = new QTextEdit(Authorization);
        sqlspace->setObjectName(QStringLiteral("sqlspace"));
        sqlspace->setGeometry(QRect(10, 400, 451, 91));
        sqlspace->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        submitBtn = new QPushButton(Authorization);
        submitBtn->setObjectName(QStringLiteral("submitBtn"));
        submitBtn->setGeometry(QRect(470, 400, 61, 91));
        submitBtn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        opbox = new QGroupBox(Authorization);
        opbox->setObjectName(QStringLiteral("opbox"));
        opbox->setGeometry(QRect(300, 60, 191, 311));
        opbox->setStyleSheet(QLatin1String("border-style:hidden;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        verticalLayout = new QVBoxLayout(opbox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        select = new QCheckBox(opbox);
        select->setObjectName(QStringLiteral("select"));
        select->setEnabled(true);
        select->setStyleSheet(QStringLiteral("font: 9pt \"Times New Roman\";"));

        verticalLayout->addWidget(select);

        insert = new QCheckBox(opbox);
        insert->setObjectName(QStringLiteral("insert"));
        insert->setStyleSheet(QStringLiteral("font: 9pt \"Times New Roman\";"));

        verticalLayout->addWidget(insert);

        update = new QCheckBox(opbox);
        update->setObjectName(QStringLiteral("update"));
        update->setStyleSheet(QStringLiteral("font: 9pt \"Times New Roman\";"));

        verticalLayout->addWidget(update);

        del = new QCheckBox(opbox);
        del->setObjectName(QStringLiteral("del"));
        del->setStyleSheet(QStringLiteral("font: 9pt \"Times New Roman\";"));

        verticalLayout->addWidget(del);

        truncate = new QCheckBox(opbox);
        truncate->setObjectName(QStringLiteral("truncate"));
        truncate->setStyleSheet(QStringLiteral("font: 9pt \"Times New Roman\";"));

        verticalLayout->addWidget(truncate);

        references = new QCheckBox(opbox);
        references->setObjectName(QStringLiteral("references"));
        references->setStyleSheet(QStringLiteral("font: 9pt \"Times New Roman\";"));

        verticalLayout->addWidget(references);

        trigger = new QCheckBox(opbox);
        trigger->setObjectName(QStringLiteral("trigger"));
        trigger->setStyleSheet(QStringLiteral("font: 9pt \"Times New Roman\";"));

        verticalLayout->addWidget(trigger);

        create = new QCheckBox(opbox);
        create->setObjectName(QStringLiteral("create"));
        create->setStyleSheet(QStringLiteral("font: 9pt \"Times New Roman\";"));

        verticalLayout->addWidget(create);

        connect = new QCheckBox(opbox);
        connect->setObjectName(QStringLiteral("connect"));
        connect->setStyleSheet(QStringLiteral("font: 9pt \"Times New Roman\";"));

        verticalLayout->addWidget(connect);

        temporary = new QCheckBox(opbox);
        temporary->setObjectName(QStringLiteral("temporary"));
        temporary->setStyleSheet(QStringLiteral("font: 9pt \"Times New Roman\";"));

        verticalLayout->addWidget(temporary);

        execute = new QCheckBox(opbox);
        execute->setObjectName(QStringLiteral("execute"));
        execute->setStyleSheet(QStringLiteral("font: 9pt \"Times New Roman\";"));

        verticalLayout->addWidget(execute);

        allPrivileges = new QCheckBox(opbox);
        allPrivileges->setObjectName(QStringLiteral("allPrivileges"));
        allPrivileges->setStyleSheet(QStringLiteral("font: 9pt \"Times New Roman\";"));

        verticalLayout->addWidget(allPrivileges);

        label = new QLabel(Authorization);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 111, 31));
        label->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 11pt \"Agency FB\";\n"
"border-style: hidden;"));
        rolename = new QLabel(Authorization);
        rolename->setObjectName(QStringLiteral("rolename"));
        rolename->setGeometry(QRect(120, 20, 141, 17));
        rolename->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Times New Roman\";\n"
"border-style: hidden;"));

        retranslateUi(Authorization);

        QMetaObject::connectSlotsByName(Authorization);
    } // setupUi

    void retranslateUi(QWidget *Authorization)
    {
        Authorization->setWindowTitle(QApplication::translate("Authorization", "\346\235\203\351\231\220\350\256\276\347\275\256", Q_NULLPTR));
        submitBtn->setText(QApplication::translate("Authorization", "\346\217\220\344\272\244", Q_NULLPTR));
        select->setText(QApplication::translate("Authorization", "SELECT", Q_NULLPTR));
        insert->setText(QApplication::translate("Authorization", "INSERT", Q_NULLPTR));
        update->setText(QApplication::translate("Authorization", "UPDATE", Q_NULLPTR));
        del->setText(QApplication::translate("Authorization", "DELETE", Q_NULLPTR));
        truncate->setText(QApplication::translate("Authorization", "TRUNCATE", Q_NULLPTR));
        references->setText(QApplication::translate("Authorization", "REFERENCES", Q_NULLPTR));
        trigger->setText(QApplication::translate("Authorization", "TRIGGER", Q_NULLPTR));
        create->setText(QApplication::translate("Authorization", "CREATE", Q_NULLPTR));
        connect->setText(QApplication::translate("Authorization", "CONNECT", Q_NULLPTR));
        temporary->setText(QApplication::translate("Authorization", "TEMPORARY", Q_NULLPTR));
        execute->setText(QApplication::translate("Authorization", "EXECUTE", Q_NULLPTR));
        allPrivileges->setText(QApplication::translate("Authorization", "ALL PRIVILEGES", Q_NULLPTR));
        label->setText(QApplication::translate("Authorization", "\345\275\223\345\211\215\346\223\215\344\275\234\350\247\222\350\211\262\357\274\232", Q_NULLPTR));
        rolename->setText(QApplication::translate("Authorization", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Authorization: public Ui_Authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
