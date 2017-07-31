#include "dialogjin.h"
#include "ui_dialogjin.h"
#include <QtMath>

DialogJin::DialogJin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogJin)
{
    ui->setupUi(this);
    setWindowTitle("等额本金计算器");
    this->initData();
    this->initFram();
}

DialogJin::~DialogJin()
{
    delete ui;
}

int DialogJin::initData()
{
    benjin = 200000;
    rateMon = 0.01;
    dayTime = 20;
    shoufu = 200000;
    bankRate = 0.045;
}

int DialogJin::initFram()
{
    ui->lineEditAll->setText(QString::number(benjin,10));
    ui->lineEditTime->setText(QString::number(dayTime,10));
    ui->lineEditRate->setText(QString::number(rateMon));
    ui->lineEditAShoufu->setText(QString::number(shoufu,10));
    ui->lineEditAllBank->setText(QString::number(bankRate));
}

int DialogJin::loadData()
{
    benjin = ui->lineEditAll->text().toInt();
    rateMon = ui->lineEditRate->text().toDouble();
    dayTime = ui->lineEditTime->text().toInt();
    lastMoney = benjin;
}

int DialogJin::calculateJin()
{
    double moneyEveryBenjin;
    double monLiji;
    double monTotal;
    double monZhujin;
    double lastZhujin = 0;
    int i;

    moneyEveryBenjin = (double)benjin/(double)(dayTime*12);
#if 0
    qDebug("每月应还本金为%lf",moneyEveryBenjin);

    monLiji = lastMoney*rateMon;

    qDebug("第一个月利息为%lf",monLiji);

    monTotal = moneyEveryBenjin + monLiji;

    lastMoney = benjin - moneyEveryBenjin;

    qDebug("一个月过后剩下本金%lf",lastMoney);
#endif
    for(i=1 ; i<=dayTime*12 ; i++){
        qDebug("第%d月还本金为%lf",i,moneyEveryBenjin);
        monLiji = lastMoney*rateMon;
        qDebug("第%d月利息为%lf",i,monLiji);
        monTotal = moneyEveryBenjin + monLiji;
        qDebug("第%d月总计为%lf",i,monTotal);
        lastMoney = lastMoney - moneyEveryBenjin;
        qDebug("第%d月后剩余本金为%lf",i,lastMoney);
        monZhujin = (shoufu*qPow(1+bankRate/12.0,i)-shoufu+monTotal)/1;
        //lastZhujin += monZhujin;
        QString str = QString("第%1个月还款为%2,当月应收租金%3,实际支出%4").arg(i).arg(monTotal).arg(monZhujin).arg(monTotal-monZhujin);
        ui->textEdit->append(str);
    }

}

void DialogJin::on_pushButtonCalculate_clicked()
{
    this->loadData();
    this->calculateJin();
}

void DialogJin::on_pushButtonClear_clicked()
{
    ui->textEdit->clear();
}

void DialogJin::on_pushButtonBack_clicked()
{
    this->close();
}
