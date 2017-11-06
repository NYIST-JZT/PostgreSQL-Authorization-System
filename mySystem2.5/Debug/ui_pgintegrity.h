/********************************************************************************
** Form generated from reading UI file 'pgintegrity.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PGINTEGRITY_H
#define UI_PGINTEGRITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pgintegrity
{
public:
    QTreeView *alltable_qtview;
    QLabel *verfy_label;
    QTreeView *verifyedtable_qtview;
    QPushButton *addtable_btn;
    QPushButton *removetable_btn;
    QTextEdit *output_textedit;
    QLabel *output_label;
    QPushButton *verify_btn;
    QPushButton *clear_btn;

    void setupUi(QWidget *pgintegrity)
    {
        if (pgintegrity->objectName().isEmpty())
            pgintegrity->setObjectName(QStringLiteral("pgintegrity"));
        pgintegrity->setEnabled(true);
        pgintegrity->resize(543, 467);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pgintegrity->sizePolicy().hasHeightForWidth());
        pgintegrity->setSizePolicy(sizePolicy);
        pgintegrity->setFocusPolicy(Qt::NoFocus);
        alltable_qtview = new QTreeView(pgintegrity);
        alltable_qtview->setObjectName(QStringLiteral("alltable_qtview"));
        alltable_qtview->setGeometry(QRect(10, 30, 221, 261));
        alltable_qtview->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        verfy_label = new QLabel(pgintegrity);
        verfy_label->setObjectName(QStringLiteral("verfy_label"));
        verfy_label->setGeometry(QRect(10, 10, 151, 17));
        verfy_label->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 11pt \"Agency FB\";\n"
"border-style: hidden;"));
        verifyedtable_qtview = new QTreeView(pgintegrity);
        verifyedtable_qtview->setObjectName(QStringLiteral("verifyedtable_qtview"));
        verifyedtable_qtview->setGeometry(QRect(300, 30, 221, 261));
        verifyedtable_qtview->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        addtable_btn = new QPushButton(pgintegrity);
        addtable_btn->setObjectName(QStringLiteral("addtable_btn"));
        addtable_btn->setGeometry(QRect(240, 110, 51, 31));
        addtable_btn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        removetable_btn = new QPushButton(pgintegrity);
        removetable_btn->setObjectName(QStringLiteral("removetable_btn"));
        removetable_btn->setGeometry(QRect(240, 160, 51, 31));
        removetable_btn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        output_textedit = new QTextEdit(pgintegrity);
        output_textedit->setObjectName(QStringLiteral("output_textedit"));
        output_textedit->setGeometry(QRect(10, 320, 511, 91));
        output_textedit->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(190,190,190);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 6px; "));
        output_label = new QLabel(pgintegrity);
        output_label->setObjectName(QStringLiteral("output_label"));
        output_label->setGeometry(QRect(10, 300, 101, 17));
        output_label->setStyleSheet(QLatin1String("color: rgb(78, 160, 201);\n"
"font: 11pt \"Agency FB\";\n"
"border-style: hidden;"));
        verify_btn = new QPushButton(pgintegrity);
        verify_btn->setObjectName(QStringLiteral("verify_btn"));
        verify_btn->setGeometry(QRect(130, 430, 61, 27));
        verify_btn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));
        clear_btn = new QPushButton(pgintegrity);
        clear_btn->setObjectName(QStringLiteral("clear_btn"));
        clear_btn->setGeometry(QRect(350, 430, 61, 27));
        clear_btn->setStyleSheet(QLatin1String("font: 10pt \"Agency FB\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(78, 160, 201);\n"
"border-radius: 5px; \n"
""));

        retranslateUi(pgintegrity);

        QMetaObject::connectSlotsByName(pgintegrity);
    } // setupUi

    void retranslateUi(QWidget *pgintegrity)
    {
        pgintegrity->setWindowTitle(QApplication::translate("pgintegrity", "Form", Q_NULLPTR));
        verfy_label->setText(QApplication::translate("pgintegrity", "\351\200\211\346\213\251\345\276\205\351\252\214\350\257\201\346\225\260\346\215\256\350\241\250\357\274\232", Q_NULLPTR));
        addtable_btn->setText(QApplication::translate("pgintegrity", ">>", Q_NULLPTR));
        removetable_btn->setText(QApplication::translate("pgintegrity", "<<", Q_NULLPTR));
        output_label->setText(QApplication::translate("pgintegrity", "\346\216\247\345\210\266\345\217\260\350\276\223\345\207\272\357\274\232", Q_NULLPTR));
        verify_btn->setText(QApplication::translate("pgintegrity", "\351\252\214\350\257\201", Q_NULLPTR));
        clear_btn->setText(QApplication::translate("pgintegrity", "\346\270\205\347\251\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pgintegrity: public Ui_pgintegrity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PGINTEGRITY_H
