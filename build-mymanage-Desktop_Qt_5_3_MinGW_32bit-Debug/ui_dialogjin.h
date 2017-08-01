/********************************************************************************
** Form generated from reading UI file 'dialogjin.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGJIN_H
#define UI_DIALOGJIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogJin
{
public:
    QPushButton *pushButtonCalculate;
    QPushButton *pushButtonClear;
    QTextEdit *textEdit;
    QLabel *labelAll;
    QLabel *labelRate;
    QLabel *labelTime;
    QLineEdit *lineEditAll;
    QLineEdit *lineEditTime;
    QLineEdit *lineEditRate;
    QPushButton *pushButtonBack;
    QLabel *labelTimeYear;
    QLabel *labelTimeWan;
    QLabel *labelAllShoufu;
    QLabel *labelAllBank;
    QLineEdit *lineEditAShoufu;
    QLineEdit *lineEditAllBank;
    QLabel *labelGong;
    QLineEdit *lineEditGong;

    void setupUi(QDialog *DialogJin)
    {
        if (DialogJin->objectName().isEmpty())
            DialogJin->setObjectName(QStringLiteral("DialogJin"));
        DialogJin->resize(695, 516);
        pushButtonCalculate = new QPushButton(DialogJin);
        pushButtonCalculate->setObjectName(QStringLiteral("pushButtonCalculate"));
        pushButtonCalculate->setGeometry(QRect(460, 460, 112, 34));
        pushButtonClear = new QPushButton(DialogJin);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));
        pushButtonClear->setGeometry(QRect(320, 460, 112, 34));
        textEdit = new QTextEdit(DialogJin);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(40, 130, 611, 311));
        labelAll = new QLabel(DialogJin);
        labelAll->setObjectName(QStringLiteral("labelAll"));
        labelAll->setGeometry(QRect(60, 20, 81, 18));
        labelRate = new QLabel(DialogJin);
        labelRate->setObjectName(QStringLiteral("labelRate"));
        labelRate->setGeometry(QRect(370, 20, 101, 20));
        labelTime = new QLabel(DialogJin);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setGeometry(QRect(220, 20, 81, 18));
        lineEditAll = new QLineEdit(DialogJin);
        lineEditAll->setObjectName(QStringLiteral("lineEditAll"));
        lineEditAll->setGeometry(QRect(40, 60, 121, 21));
        lineEditTime = new QLineEdit(DialogJin);
        lineEditTime->setObjectName(QStringLiteral("lineEditTime"));
        lineEditTime->setGeometry(QRect(200, 60, 121, 21));
        lineEditRate = new QLineEdit(DialogJin);
        lineEditRate->setObjectName(QStringLiteral("lineEditRate"));
        lineEditRate->setGeometry(QRect(360, 60, 121, 21));
        pushButtonBack = new QPushButton(DialogJin);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        pushButtonBack->setGeometry(QRect(610, 460, 71, 34));
        labelTimeYear = new QLabel(DialogJin);
        labelTimeYear->setObjectName(QStringLiteral("labelTimeYear"));
        labelTimeYear->setGeometry(QRect(330, 60, 61, 18));
        labelTimeWan = new QLabel(DialogJin);
        labelTimeWan->setObjectName(QStringLiteral("labelTimeWan"));
        labelTimeWan->setGeometry(QRect(170, 60, 61, 18));
        labelAllShoufu = new QLabel(DialogJin);
        labelAllShoufu->setObjectName(QStringLiteral("labelAllShoufu"));
        labelAllShoufu->setGeometry(QRect(40, 460, 131, 18));
        labelAllBank = new QLabel(DialogJin);
        labelAllBank->setObjectName(QStringLiteral("labelAllBank"));
        labelAllBank->setGeometry(QRect(40, 490, 131, 18));
        lineEditAShoufu = new QLineEdit(DialogJin);
        lineEditAShoufu->setObjectName(QStringLiteral("lineEditAShoufu"));
        lineEditAShoufu->setGeometry(QRect(190, 460, 121, 21));
        lineEditAllBank = new QLineEdit(DialogJin);
        lineEditAllBank->setObjectName(QStringLiteral("lineEditAllBank"));
        lineEditAllBank->setGeometry(QRect(190, 490, 121, 21));
        labelGong = new QLabel(DialogJin);
        labelGong->setObjectName(QStringLiteral("labelGong"));
        labelGong->setGeometry(QRect(530, 20, 101, 20));
        lineEditGong = new QLineEdit(DialogJin);
        lineEditGong->setObjectName(QStringLiteral("lineEditGong"));
        lineEditGong->setGeometry(QRect(520, 60, 121, 21));

        retranslateUi(DialogJin);

        QMetaObject::connectSlotsByName(DialogJin);
    } // setupUi

    void retranslateUi(QDialog *DialogJin)
    {
        DialogJin->setWindowTitle(QApplication::translate("DialogJin", "Dialog", 0));
        pushButtonCalculate->setText(QApplication::translate("DialogJin", "\350\256\241\347\256\227", 0));
        pushButtonClear->setText(QApplication::translate("DialogJin", "\346\270\205\351\231\244", 0));
        labelAll->setText(QApplication::translate("DialogJin", "\350\264\267\346\254\276\346\200\273\351\242\235", 0));
        labelRate->setText(QApplication::translate("DialogJin", "\350\264\267\346\254\276\346\234\210\345\210\251\347\216\207", 0));
        labelTime->setText(QApplication::translate("DialogJin", "\350\264\267\346\254\276\346\234\237\351\231\220", 0));
        pushButtonBack->setText(QApplication::translate("DialogJin", "\350\277\224\345\233\236", 0));
        labelTimeYear->setText(QApplication::translate("DialogJin", "\345\271\264", 0));
        labelTimeWan->setText(QApplication::translate("DialogJin", "\344\270\207", 0));
        labelAllShoufu->setText(QApplication::translate("DialogJin", "\351\246\226\344\273\230\351\207\221\351\242\235\357\274\210\344\270\207\357\274\211\357\274\232", 0));
        labelAllBank->setText(QApplication::translate("DialogJin", "\351\223\266\350\241\214\345\210\251\347\216\207\357\274\210\345\271\264\357\274\211\357\274\232", 0));
        labelGong->setText(QApplication::translate("DialogJin", "\346\257\217\346\234\210\345\205\254\347\247\257\351\207\221", 0));
        lineEditGong->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogJin: public Ui_DialogJin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGJIN_H
