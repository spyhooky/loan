#ifndef DIALOGJIN_H
#define DIALOGJIN_H

#include <QDialog>

namespace Ui {
class DialogJin;
}

class DialogJin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogJin(QWidget *parent = 0);
    ~DialogJin();
    int initData();
    int initFram();
    int loadData();
    int calculateJin();


private slots:
    void on_pushButtonCalculate_clicked();

    void on_pushButtonClear_clicked();

    void on_pushButtonBack_clicked();

private:
    Ui::DialogJin *ui;
    int benjin;
    double rateMon;
    int dayTime;
    double lastMoney;
    int shoufu;
    double bankRate;
    int gongjijin;
};

#endif // DIALOGJIN_H
