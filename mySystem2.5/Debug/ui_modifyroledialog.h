/********************************************************************************
** Form generated from reading UI file 'modifyroledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYROLEDIALOG_H
#define UI_MODIFYROLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ModifyRoleDialog
{
public:
    QComboBox *cbb_IsFlowCopy;
    QLabel *label_10;
    QLabel *lb_RoleName;
    QComboBox *cbb_IsLogin;
    QComboBox *cbb_CreatRole;
    QDateTimeEdit *dte_authdate;
    QLabel *label_3;
    QLabel *label_2;
    QSpinBox *sb_connect;
    QLabel *label_4;
    QPushButton *pbt_Cancle;
    QComboBox *cbb_IsSkipAuth;
    QLabel *label;
    QLabel *label_8;
    QComboBox *cbb_CreatDB;
    QPushButton *pbt_OK;
    QLabel *label_5;
    QComboBox *cbb_IsInherit;
    QLabel *label_9;
    QComboBox *cbb_IsSuper;
    QLabel *label_7;
    QLabel *label_6;

    void setupUi(QDialog *ModifyRoleDialog)
    {
        if (ModifyRoleDialog->objectName().isEmpty())
            ModifyRoleDialog->setObjectName(QStringLiteral("ModifyRoleDialog"));
        ModifyRoleDialog->resize(400, 381);
        cbb_IsFlowCopy = new QComboBox(ModifyRoleDialog);
        cbb_IsFlowCopy->setObjectName(QStringLiteral("cbb_IsFlowCopy"));
        cbb_IsFlowCopy->setGeometry(QRect(180, 200, 71, 25));
        cbb_IsFlowCopy->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        label_10 = new QLabel(ModifyRoleDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 290, 141, 21));
        label_10->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        lb_RoleName = new QLabel(ModifyRoleDialog);
        lb_RoleName->setObjectName(QStringLiteral("lb_RoleName"));
        lb_RoleName->setGeometry(QRect(180, 20, 171, 21));
        lb_RoleName->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Times New Roman\";\n"
"border-style: hidden;"));
        cbb_IsLogin = new QComboBox(ModifyRoleDialog);
        cbb_IsLogin->setObjectName(QStringLiteral("cbb_IsLogin"));
        cbb_IsLogin->setGeometry(QRect(180, 170, 86, 25));
        cbb_IsLogin->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        cbb_CreatRole = new QComboBox(ModifyRoleDialog);
        cbb_CreatRole->setObjectName(QStringLiteral("cbb_CreatRole"));
        cbb_CreatRole->setGeometry(QRect(180, 110, 86, 25));
        cbb_CreatRole->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        dte_authdate = new QDateTimeEdit(ModifyRoleDialog);
        dte_authdate->setObjectName(QStringLiteral("dte_authdate"));
        dte_authdate->setGeometry(QRect(180, 260, 194, 26));
        dte_authdate->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        label_3 = new QLabel(ModifyRoleDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 80, 91, 21));
        label_3->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        label_2 = new QLabel(ModifyRoleDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 50, 91, 21));
        label_2->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        sb_connect = new QSpinBox(ModifyRoleDialog);
        sb_connect->setObjectName(QStringLiteral("sb_connect"));
        sb_connect->setGeometry(QRect(180, 230, 48, 26));
        sb_connect->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        label_4 = new QLabel(ModifyRoleDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 110, 91, 21));
        label_4->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        pbt_Cancle = new QPushButton(ModifyRoleDialog);
        pbt_Cancle->setObjectName(QStringLiteral("pbt_Cancle"));
        pbt_Cancle->setGeometry(QRect(240, 340, 61, 27));
        pbt_Cancle->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        cbb_IsSkipAuth = new QComboBox(ModifyRoleDialog);
        cbb_IsSkipAuth->setObjectName(QStringLiteral("cbb_IsSkipAuth"));
        cbb_IsSkipAuth->setGeometry(QRect(180, 290, 71, 25));
        cbb_IsSkipAuth->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        label = new QLabel(ModifyRoleDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 20, 67, 21));
        label->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        label_8 = new QLabel(ModifyRoleDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 230, 91, 21));
        label_8->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        cbb_CreatDB = new QComboBox(ModifyRoleDialog);
        cbb_CreatDB->setObjectName(QStringLiteral("cbb_CreatDB"));
        cbb_CreatDB->setGeometry(QRect(180, 140, 86, 25));
        cbb_CreatDB->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        pbt_OK = new QPushButton(ModifyRoleDialog);
        pbt_OK->setObjectName(QStringLiteral("pbt_OK"));
        pbt_OK->setGeometry(QRect(80, 340, 61, 27));
        pbt_OK->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        label_5 = new QLabel(ModifyRoleDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 140, 91, 21));
        label_5->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        cbb_IsInherit = new QComboBox(ModifyRoleDialog);
        cbb_IsInherit->setObjectName(QStringLiteral("cbb_IsInherit"));
        cbb_IsInherit->setGeometry(QRect(180, 80, 86, 25));
        cbb_IsInherit->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        label_9 = new QLabel(ModifyRoleDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 260, 91, 21));
        label_9->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        cbb_IsSuper = new QComboBox(ModifyRoleDialog);
        cbb_IsSuper->setObjectName(QStringLiteral("cbb_IsSuper"));
        cbb_IsSuper->setGeometry(QRect(180, 50, 86, 25));
        cbb_IsSuper->setStyleSheet(QLatin1String("border-radius: 5px; \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(78, 160, 201);"));
        label_7 = new QLabel(ModifyRoleDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 200, 121, 21));
        label_7->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));
        label_6 = new QLabel(ModifyRoleDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 170, 91, 21));
        label_6->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 10pt \"Agency FB\";\n"
"border-style: hidden;"));

        retranslateUi(ModifyRoleDialog);

        QMetaObject::connectSlotsByName(ModifyRoleDialog);
    } // setupUi

    void retranslateUi(QDialog *ModifyRoleDialog)
    {
        ModifyRoleDialog->setWindowTitle(QApplication::translate("ModifyRoleDialog", "\344\277\256\346\224\271\350\247\222\350\211\262\344\277\241\346\201\257", Q_NULLPTR));
        cbb_IsFlowCopy->clear();
        cbb_IsFlowCopy->insertItems(0, QStringList()
         << QApplication::translate("ModifyRoleDialog", "false", Q_NULLPTR)
         << QApplication::translate("ModifyRoleDialog", "true", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("ModifyRoleDialog", "<html><head/><body><p>\350\203\275\345\220\246\347\273\225\350\277\207\345\256\211\345\205\250\346\243\200\346\265\213\357\274\232</p></body></html>", Q_NULLPTR));
        lb_RoleName->setText(QApplication::translate("ModifyRoleDialog", "TextLabel", Q_NULLPTR));
        cbb_IsLogin->clear();
        cbb_IsLogin->insertItems(0, QStringList()
         << QApplication::translate("ModifyRoleDialog", "false", Q_NULLPTR)
         << QApplication::translate("ModifyRoleDialog", "true", Q_NULLPTR)
        );
        cbb_CreatRole->clear();
        cbb_CreatRole->insertItems(0, QStringList()
         << QApplication::translate("ModifyRoleDialog", "false", Q_NULLPTR)
         << QApplication::translate("ModifyRoleDialog", "true", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("ModifyRoleDialog", "<html><head/><body><p>\347\273\247\346\211\277\357\274\232</p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("ModifyRoleDialog", "<html><head/><body><p>\350\266\205\347\272\247\347\256\241\347\220\206\345\221\230\357\274\232</p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("ModifyRoleDialog", "<html><head/><body><p>\345\210\233\345\273\272\350\247\222\350\211\262\357\274\232</p></body></html>", Q_NULLPTR));
        pbt_Cancle->setText(QApplication::translate("ModifyRoleDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        cbb_IsSkipAuth->clear();
        cbb_IsSkipAuth->insertItems(0, QStringList()
         << QApplication::translate("ModifyRoleDialog", "false", Q_NULLPTR)
         << QApplication::translate("ModifyRoleDialog", "true", Q_NULLPTR)
        );
        label->setText(QApplication::translate("ModifyRoleDialog", "<html><head/><body><p>\350\247\222\350\211\262\345\220\215\357\274\232</p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("ModifyRoleDialog", "<html><head/><body><p>\345\271\266\345\217\221\351\223\276\346\216\245\346\225\260\357\274\232</p></body></html>", Q_NULLPTR));
        cbb_CreatDB->clear();
        cbb_CreatDB->insertItems(0, QStringList()
         << QApplication::translate("ModifyRoleDialog", "false", Q_NULLPTR)
         << QApplication::translate("ModifyRoleDialog", "true", Q_NULLPTR)
        );
        pbt_OK->setText(QApplication::translate("ModifyRoleDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("ModifyRoleDialog", "<html><head/><body><p>\345\210\233\345\273\272\346\225\260\346\215\256\345\272\223\357\274\232</p></body></html>", Q_NULLPTR));
        cbb_IsInherit->clear();
        cbb_IsInherit->insertItems(0, QStringList()
         << QApplication::translate("ModifyRoleDialog", "false", Q_NULLPTR)
         << QApplication::translate("ModifyRoleDialog", "true", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("ModifyRoleDialog", "<html><head/><body><p>\350\277\207\346\234\237\346\227\266\351\227\264\357\274\232</p></body></html>", Q_NULLPTR));
        cbb_IsSuper->clear();
        cbb_IsSuper->insertItems(0, QStringList()
         << QApplication::translate("ModifyRoleDialog", "false", Q_NULLPTR)
         << QApplication::translate("ModifyRoleDialog", "true", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("ModifyRoleDialog", "<html><head/><body><p>\350\203\275\345\220\246\345\217\221\350\265\267\346\265\201\345\244\215\345\210\266\357\274\232</p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("ModifyRoleDialog", "<html><head/><body><p>\350\203\275\345\220\246\347\231\273\345\275\225\357\274\232</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ModifyRoleDialog: public Ui_ModifyRoleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYROLEDIALOG_H
