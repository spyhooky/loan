#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QtMath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->initData();
    this->initFram();
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::initData()
{
    capital = 755000;
    area = 120;
    rate = 0.045;
    year = 1;

    myJin = new DialogJin();

    return 0;
}

int MainWindow::initFram()
{
    ui->areaEdit->setText(QString::number(area,10));
    ui->capitalEdit->setText(QString::number(capital,10));
    ui->rateEdit->setText(QString::number(rate));
    ui->timeEdit->setText(QString::number(year,10));

    return 0;
}

int MainWindow::restoreFram()
{
    return 0;
}

double MainWindow::doCalculate(int t, int capital, double rate, int area)
{
    double bonus;

    if(1 == t){
        bonus = (qPow(1+rate,(double)t)*(double)capital-(double)capital)/(12*(double)area);
    }
    else{
        bonus = (qPow(1+rate,(double)t)*(double)capital-(double)capital-(capital*qPow(1+rate,(t-1))-capital))/(12*(double)area);
    }
    qDebug("do calculate result = %lf",bonus);
    return bonus;
}

double MainWindow::calculateNormal(int capital, int i, double rate)
{
    double total;

    total = capital*qPow(1+rate,i);

    return total;
}

void MainWindow::on_calculateButton_clicked()
{
    int i;
    int tempCapical;
    double tempRate;
    int tempArea;
    int tempTime;


    double bonus = 0;
    double normal_bonus = 0;

    tempCapical = ui->capitalEdit->text().toInt();
    tempRate = ui->rateEdit->text().toDouble();
    tempArea = ui->areaEdit->text().toInt();
    tempTime = ui->timeEdit->text().toInt();

    //qDebug()<<"capital = "<<tempCapical<<" ; rate = "<<ui->rateEdit->text()<<" ; area = "<<tempArea<<" ; time = "<<tempTime;
    //qDebug("%lf",tempRate);
    //bonus = (qPow(1+tempRate,(double)tempTime)*(double)tempCapical-(double)tempCapical)/(12*(double)tempArea);

    //qDebug("bonus = %lf",bonus);

    //for(i=1 ; i<=1 ; i++){
     //   bonus = (qPow(1+tempRate,(double)i)*(double)tempCapical-(double)tempCapical)/(12*(double)tempArea);
     //   qDebug("bonus = %lf",bonus);
    //}
    //bonus = this->doCalculate(1,tempCapical,tempRate,tempArea);

    //qDebug("year %d : bonus = %lf",1,bonus);

    //bonus = this->doCalculate(2,tempCapical,tempRate,tempArea);

    //qDebug("year %d : bonus = %lf",2,bonus);
    for(i=1 ; i<=tempTime ; i++){
        bonus = this->doCalculate(i,tempCapical,tempRate,tempArea);

        qDebug("year %d : bonus = %lf",i,bonus);
        QString str = QString("第%1年预期月租金为%2,日租金为%3").arg(i).arg(bonus).arg(bonus/30);
        ui->textEdit->append(str);
    }

    normal_bonus = this->calculateNormal(tempCapical,tempTime,tempRate);

    QString str = QString("%1年银行固定本息为%2;\r\n%3年固定利息为%4").arg(tempTime).arg(normal_bonus).arg(tempTime).arg(normal_bonus-capital);
    ui->textEditTotal->append(str);

}

void MainWindow::on_calculateClearButton_clicked()
{
    ui->textEdit->clear();
    ui->textEditTotal->clear();
}

void MainWindow::on_buttonJin_clicked()
{
    myJin->show();
}
