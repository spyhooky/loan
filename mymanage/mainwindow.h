#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialogjin.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int calculateManage(void);
    int initData(void);
    int initFram(void);
    int restoreFram(void);
    double doCalculate(int t , int capital , double rate , int area);
    double calculateNormal(int capital,int i,double rate);


private slots:
    void on_calculateButton_clicked();

    void on_calculateClearButton_clicked();

    void on_buttonJin_clicked();

private:
    Ui::MainWindow *ui;
    int capital;
    int area;
    double rate;
    int year;
    DialogJin *myJin;
};

#endif // MAINWINDOW_H
