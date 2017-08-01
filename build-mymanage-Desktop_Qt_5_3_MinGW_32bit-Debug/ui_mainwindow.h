/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *rate;
    QLineEdit *rateEdit;
    QLabel *capital;
    QLineEdit *capitalEdit;
    QTextEdit *textEdit;
    QLabel *time;
    QLineEdit *timeEdit;
    QLineEdit *areaEdit;
    QLabel *area;
    QPushButton *calculateButton;
    QPushButton *calculateClearButton;
    QTextEdit *textEditTotal;
    QPushButton *buttonJin;
    QPushButton *buttonXin;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(676, 539);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        rate = new QLabel(centralWidget);
        rate->setObjectName(QStringLiteral("rate"));
        rate->setGeometry(QRect(45, 30, 111, 31));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rate->sizePolicy().hasHeightForWidth());
        rate->setSizePolicy(sizePolicy);
        rateEdit = new QLineEdit(centralWidget);
        rateEdit->setObjectName(QStringLiteral("rateEdit"));
        rateEdit->setGeometry(QRect(150, 30, 113, 25));
        sizePolicy.setHeightForWidth(rateEdit->sizePolicy().hasHeightForWidth());
        rateEdit->setSizePolicy(sizePolicy);
        capital = new QLabel(centralWidget);
        capital->setObjectName(QStringLiteral("capital"));
        capital->setGeometry(QRect(380, 30, 41, 31));
        capitalEdit = new QLineEdit(centralWidget);
        capitalEdit->setObjectName(QStringLiteral("capitalEdit"));
        capitalEdit->setGeometry(QRect(430, 30, 113, 25));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 110, 361, 271));
        time = new QLabel(centralWidget);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(380, 70, 41, 31));
        timeEdit = new QLineEdit(centralWidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(430, 70, 113, 25));
        areaEdit = new QLineEdit(centralWidget);
        areaEdit->setObjectName(QStringLiteral("areaEdit"));
        areaEdit->setGeometry(QRect(150, 70, 113, 25));
        area = new QLabel(centralWidget);
        area->setObjectName(QStringLiteral("area"));
        area->setGeometry(QRect(100, 70, 51, 31));
        calculateButton = new QPushButton(centralWidget);
        calculateButton->setObjectName(QStringLiteral("calculateButton"));
        calculateButton->setGeometry(QRect(550, 400, 112, 34));
        calculateClearButton = new QPushButton(centralWidget);
        calculateClearButton->setObjectName(QStringLiteral("calculateClearButton"));
        calculateClearButton->setGeometry(QRect(420, 400, 112, 34));
        textEditTotal = new QTextEdit(centralWidget);
        textEditTotal->setObjectName(QStringLiteral("textEditTotal"));
        textEditTotal->setGeometry(QRect(380, 110, 291, 271));
        buttonJin = new QPushButton(centralWidget);
        buttonJin->setObjectName(QStringLiteral("buttonJin"));
        buttonJin->setGeometry(QRect(10, 400, 112, 34));
        buttonXin = new QPushButton(centralWidget);
        buttonXin->setObjectName(QStringLiteral("buttonXin"));
        buttonXin->setGeometry(QRect(150, 400, 112, 34));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 676, 30));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        rate->setText(QApplication::translate("MainWindow", "\351\242\204\346\234\237\345\271\264\345\210\251\347\216\207:", 0));
        capital->setText(QApplication::translate("MainWindow", "\346\234\254\351\207\221\357\274\232", 0));
        time->setText(QApplication::translate("MainWindow", "\346\234\237\351\231\220\357\274\232", 0));
        areaEdit->setText(QString());
        area->setText(QApplication::translate("MainWindow", "\351\235\242\347\247\257:", 0));
        calculateButton->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227", 0));
        calculateClearButton->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244", 0));
        buttonJin->setText(QApplication::translate("MainWindow", "\347\255\211\351\242\235\346\234\254\351\207\221", 0));
        buttonXin->setText(QApplication::translate("MainWindow", "\347\255\211\351\242\235\346\234\254\346\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
