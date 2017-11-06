/********************************************************************************
** Form generated from reading UI file 'addroledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDROLEDIALOG_H
#define UI_ADDROLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddRoleDialog
{
public:
    QLabel *label;
    QLineEdit *le_RoleName;
    QLabel *label_2;
    QComboBox *cbb_IsSuper;
    QLabel *label_3;
    QComboBox *cbb_IsInherit;
    QLabel *label_4;
    QComboBox *cbb_CreatRole;
    QLabel *label_5;
    QComboBox *cbb_CreatDB;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *cbb_IsLogin;
    QComboBox *cbb_IsFlowCopy;
    QSpinBox *sb_connect;
    QLabel *label_10;
    QComboBox *cbb_IsSkipAuth;
    QPushButton *pbt_OK;
    QPushButton *pbt_Cancle;
    QLabel *label_11;
    QLineEdit *le_passwd;

    void setupUi(QDialog *AddRoleDialog)
    {
        if (AddRoleDialog->objectName().isEmpty())
            AddRoleDialog->setObjectName(QStringLiteral("AddRoleDialog"));
        AddRoleDialog->resize(400, 393);
        label = new QLabel(AddRoleDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 67, 21));
        label->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        le_RoleName = new QLineEdit(AddRoleDialog);
        le_RoleName->setObjectName(QStringLiteral("le_RoleName"));
        le_RoleName->setGeometry(QRect(170, 30, 151, 25));
        le_RoleName->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        label_2 = new QLabel(AddRoleDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 60, 91, 21));
        label_2->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        cbb_IsSuper = new QComboBox(AddRoleDialog);
        cbb_IsSuper->setObjectName(QStringLiteral("cbb_IsSuper"));
        cbb_IsSuper->setGeometry(QRect(170, 60, 86, 25));
        cbb_IsSuper->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        label_3 = new QLabel(AddRoleDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 90, 91, 21));
        label_3->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        cbb_IsInherit = new QComboBox(AddRoleDialog);
        cbb_IsInherit->setObjectName(QStringLiteral("cbb_IsInherit"));
        cbb_IsInherit->setGeometry(QRect(170, 90, 86, 25));
        cbb_IsInherit->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        label_4 = new QLabel(AddRoleDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 120, 91, 21));
        label_4->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        cbb_CreatRole = new QComboBox(AddRoleDialog);
        cbb_CreatRole->setObjectName(QStringLiteral("cbb_CreatRole"));
        cbb_CreatRole->setGeometry(QRect(170, 120, 86, 25));
        cbb_CreatRole->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        label_5 = new QLabel(AddRoleDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 150, 91, 21));
        label_5->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        cbb_CreatDB = new QComboBox(AddRoleDialog);
        cbb_CreatDB->setObjectName(QStringLiteral("cbb_CreatDB"));
        cbb_CreatDB->setGeometry(QRect(170, 150, 86, 25));
        cbb_CreatDB->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        label_6 = new QLabel(AddRoleDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 180, 91, 21));
        label_6->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        label_7 = new QLabel(AddRoleDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 210, 121, 21));
        label_7->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        label_8 = new QLabel(AddRoleDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 240, 91, 21));
        label_8->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        cbb_IsLogin = new QComboBox(AddRoleDialog);
        cbb_IsLogin->setObjectName(QStringLiteral("cbb_IsLogin"));
        cbb_IsLogin->setGeometry(QRect(170, 180, 86, 25));
        cbb_IsLogin->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        cbb_IsFlowCopy = new QComboBox(AddRoleDialog);
        cbb_IsFlowCopy->setObjectName(QStringLiteral("cbb_IsFlowCopy"));
        cbb_IsFlowCopy->setGeometry(QRect(170, 210, 71, 25));
        cbb_IsFlowCopy->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        sb_connect = new QSpinBox(AddRoleDialog);
        sb_connect->setObjectName(QStringLiteral("sb_connect"));
        sb_connect->setGeometry(QRect(170, 240, 48, 26));
        sb_connect->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        label_10 = new QLabel(AddRoleDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 300, 141, 21));
        label_10->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        cbb_IsSkipAuth = new QComboBox(AddRoleDialog);
        cbb_IsSkipAuth->setObjectName(QStringLiteral("cbb_IsSkipAuth"));
        cbb_IsSkipAuth->setGeometry(QRect(170, 300, 71, 25));
        cbb_IsSkipAuth->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        pbt_OK = new QPushButton(AddRoleDialog);
        pbt_OK->setObjectName(QStringLiteral("pbt_OK"));
        pbt_OK->setGeometry(QRect(80, 340, 61, 27));
        pbt_OK->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        pbt_Cancle = new QPushButton(AddRoleDialog);
        pbt_Cancle->setObjectName(QStringLiteral("pbt_Cancle"));
        pbt_Cancle->setGeometry(QRect(220, 340, 61, 27));
        pbt_Cancle->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        label_11 = new QLabel(AddRoleDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 270, 71, 21));
        label_11->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        le_passwd = new QLineEdit(AddRoleDialog);
        le_passwd->setObjectName(QStringLiteral("le_passwd"));
        le_passwd->setGeometry(QRect(170, 270, 151, 25));
        le_passwd->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        le_passwd->setEchoMode(QLineEdit::Password);

        retranslateUi(AddRoleDialog);

        QMetaObject::connectSlotsByName(AddRoleDialog);
    } // setupUi

    void retranslateUi(QDialog *AddRoleDialog)
    {
        AddRoleDialog->setWindowTitle(QApplication::translate("AddRoleDialog", "\346\267\273\345\212\240\350\247\222\350\211\262\344\277\241\346\201\257", Q_NULLPTR));
        label->setText(QApplication::translate("AddRoleDialog", "<html><head/><body><p>\350\247\222\350\211\262\345\220\215\357\274\232</p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddRoleDialog", "<html><head/><body><p>\350\266\205\347\272\247\347\256\241\347\220\206\345\221\230\357\274\232</p></body></html>", Q_NULLPTR));
        cbb_IsSuper->clear();
        cbb_IsSuper->insertItems(0, QStringList()
         << QApplication::translate("AddRoleDialog", "false", Q_NULLPTR)
         << QApplication::translate("AddRoleDialog", "true", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("AddRoleDialog", "<html><head/><body><p>\347\273\247\346\211\277\357\274\232</p></body></html>", Q_NULLPTR));
        cbb_IsInherit->clear();
        cbb_IsInherit->insertItems(0, QStringList()
         << QApplication::translate("AddRoleDialog", "false", Q_NULLPTR)
         << QApplication::translate("AddRoleDialog", "true", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("AddRoleDialog", "<html><head/><body><p>\345\210\233\345\273\272\350\247\222\350\211\262\357\274\232</p></body></html>", Q_NULLPTR));
        cbb_CreatRole->clear();
        cbb_CreatRole->insertItems(0, QStringList()
         << QApplication::translate("AddRoleDialog", "false", Q_NULLPTR)
         << QApplication::translate("AddRoleDialog", "true", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("AddRoleDialog", "<html><head/><body><p>\345\210\233\345\273\272\346\225\260\346\215\256\345\272\223\357\274\232</p></body></html>", Q_NULLPTR));
        cbb_CreatDB->clear();
        cbb_CreatDB->insertItems(0, QStringList()
         << QApplication::translate("AddRoleDialog", "false", Q_NULLPTR)
         << QApplication::translate("AddRoleDialog", "true", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("AddRoleDialog", "<html><head/><body><p>\350\203\275\345\220\246\347\231\273\345\275\225\357\274\232</p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("AddRoleDialog", "<html><head/><body><p>\350\203\275\345\220\246\345\217\221\350\265\267\346\265\201\345\244\215\345\210\266\357\274\232</p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("AddRoleDialog", "<html><head/><body><p>\345\271\266\345\217\221\351\223\276\346\216\245\346\225\260\357\274\232</p></body></html>", Q_NULLPTR));
        cbb_IsLogin->clear();
        cbb_IsLogin->insertItems(0, QStringList()
         << QApplication::translate("AddRoleDialog", "false", Q_NULLPTR)
         << QApplication::translate("AddRoleDialog", "true", Q_NULLPTR)
        );
        cbb_IsFlowCopy->clear();
        cbb_IsFlowCopy->insertItems(0, QStringList()
         << QApplication::translate("AddRoleDialog", "false", Q_NULLPTR)
         << QApplication::translate("AddRoleDialog", "true", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("AddRoleDialog", "<html><head/><body><p>\350\203\275\345\220\246\347\273\225\350\277\207\345\256\211\345\205\250\346\243\200\346\265\213\357\274\232</p></body></html>", Q_NULLPTR));
        cbb_IsSkipAuth->clear();
        cbb_IsSkipAuth->insertItems(0, QStringList()
         << QApplication::translate("AddRoleDialog", "false", Q_NULLPTR)
         << QApplication::translate("AddRoleDialog", "true", Q_NULLPTR)
        );
        pbt_OK->setText(QApplication::translate("AddRoleDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        pbt_Cancle->setText(QApplication::translate("AddRoleDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        label_11->setText(QApplication::translate("AddRoleDialog", "<html><head/><body><p>\345\257\206\347\240\201\357\274\232</p></body></html>", Q_NULLPTR));
        le_passwd->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddRoleDialog: public Ui_AddRoleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDROLEDIALOG_H
