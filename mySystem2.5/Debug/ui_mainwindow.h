/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QListView *listView;
    QColumnView *header_view;
    QStackedWidget *funcstack;
    QWidget *page_3;
    QWidget *page_4;
    QPushButton *roleManage_btn;
    QPushButton *role_permission_btn;
    QPushButton *userManage_btn;
    QPushButton *listManage_btn;
    QPushButton *pgintegrity_btn;
    QPushButton *pb_Exit;
    QLabel *label;
    QLabel *lb_username;
    QLabel *label_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(841, 610);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(0, 90, 181, 501));
        listView->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(8, 199, 255, 255), stop:1 rgba(0, 65, 211, 255));\n"
"border-style:hidden"));
        header_view = new QColumnView(centralWidget);
        header_view->setObjectName(QStringLiteral("header_view"));
        header_view->setGeometry(QRect(1, 0, 841, 91));
        header_view->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(8, 199, 255, 255), stop:1 rgba(0, 65, 211, 255));\n"
"border-style: hidden;"));
        funcstack = new QStackedWidget(centralWidget);
        funcstack->setObjectName(QStringLiteral("funcstack"));
        funcstack->setGeometry(QRect(210, 110, 601, 471));
        funcstack->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        funcstack->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        funcstack->addWidget(page_4);
        roleManage_btn = new QPushButton(centralWidget);
        roleManage_btn->setObjectName(QStringLiteral("roleManage_btn"));
        roleManage_btn->setGeometry(QRect(30, 120, 121, 41));
        roleManage_btn->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:hidden;\n"
"font: 11pt \"Agency FB\";\n"
"background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(8, 199, 255, 255), stop:1 rgba(0, 65, 211, 255));"));
        role_permission_btn = new QPushButton(centralWidget);
        role_permission_btn->setObjectName(QStringLiteral("role_permission_btn"));
        role_permission_btn->setGeometry(QRect(30, 190, 121, 41));
        role_permission_btn->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:hidden;\n"
"font: 11pt \"Agency FB\";\n"
"background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(8, 199, 255, 255), stop:1 rgba(0, 65, 211, 255));"));
        userManage_btn = new QPushButton(centralWidget);
        userManage_btn->setObjectName(QStringLiteral("userManage_btn"));
        userManage_btn->setGeometry(QRect(30, 260, 121, 41));
        userManage_btn->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:hidden;\n"
"font: 11pt \"Agency FB\";\n"
"background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(8, 199, 255, 255), stop:1 rgba(0, 65, 211, 255));"));
        listManage_btn = new QPushButton(centralWidget);
        listManage_btn->setObjectName(QStringLiteral("listManage_btn"));
        listManage_btn->setGeometry(QRect(30, 330, 121, 41));
        listManage_btn->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:hidden;\n"
"font: 11pt \"Agency FB\";\n"
"background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(8, 199, 255, 255), stop:1 rgba(0, 65, 211, 255));"));
        pgintegrity_btn = new QPushButton(centralWidget);
        pgintegrity_btn->setObjectName(QStringLiteral("pgintegrity_btn"));
        pgintegrity_btn->setGeometry(QRect(30, 400, 121, 41));
        pgintegrity_btn->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:hidden;\n"
"font: 11pt \"Agency FB\";\n"
"background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(8, 199, 255, 255), stop:1 rgba(0, 65, 211, 255));"));
        pb_Exit = new QPushButton(centralWidget);
        pb_Exit->setObjectName(QStringLiteral("pb_Exit"));
        pb_Exit->setGeometry(QRect(710, 30, 101, 31));
        pb_Exit->setStyleSheet(QLatin1String("background-color: rgba(0, 65, 211, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 11pt \"Agency FB\";"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 141, 51));
        label->setStyleSheet(QLatin1String("background-color: transparent;\n"
"color: rgb(255, 255, 255);"));
        lb_username = new QLabel(centralWidget);
        lb_username->setObjectName(QStringLiteral("lb_username"));
        lb_username->setGeometry(QRect(430, 20, 121, 51));
        lb_username->setStyleSheet(QLatin1String("background-color: transparent;\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 20, 121, 51));
        label_2->setStyleSheet(QLatin1String("background-color: transparent;\n"
"color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        funcstack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\256\277\351\227\256\346\216\247\345\210\266\347\263\273\347\273\237", Q_NULLPTR));
        roleManage_btn->setText(QApplication::translate("MainWindow", "\350\247\222\350\211\262\347\256\241\347\220\206", Q_NULLPTR));
        role_permission_btn->setText(QApplication::translate("MainWindow", "\346\235\203\351\231\220\347\256\241\347\220\206", Q_NULLPTR));
        userManage_btn->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\347\256\241\347\220\206", Q_NULLPTR));
        listManage_btn->setText(QApplication::translate("MainWindow", "\351\273\221\347\231\275\345\220\215\345\215\225", Q_NULLPTR));
        pgintegrity_btn->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\351\252\214\350\257\201", Q_NULLPTR));
        pb_Exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\270\255\345\233\275\347\224\265\347\275\221", Q_NULLPTR));
        lb_username->setText(QApplication::translate("MainWindow", "xxx\357\274\214\346\254\242\350\277\216\346\202\250", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\350\256\277\351\227\256\346\216\247\345\210\266\347\263\273\347\273\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
