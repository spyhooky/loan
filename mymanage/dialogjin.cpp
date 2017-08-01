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
    rateMon = 0.00375;
    dayTime = 20;
    shoufu = 200000;
    bankRate = 0.045;
    gongjijin = 2000;
    return 0;
}

int DialogJin::initFram()
{
    ui->lineEditAll->setText(QString::number(benjin,10));
    ui->lineEditTime->setText(QString::number(dayTime,10));
    ui->lineEditRate->setText(QString::number(rateMon));
    ui->lineEditAShoufu->setText(QString::number(shoufu,10));
    ui->lineEditAllBank->setText(QString::number(bankRate));
    ui->lineEditGong->setText(QString::number(gongjijin,10));
    return 0;
}

int DialogJin::loadData()
{
    benjin = ui->lineEditAll->text().toInt();
    rateMon = ui->lineEditRate->text().toDouble();
    dayTime = ui->lineEditTime->text().toInt();
    shoufu = ui->lineEditAShoufu->text().toInt();
    bankRate = ui->lineEditAllBank->text().toDouble();
    lastMoney = benjin;
    return 0;
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
        monZhujin = shoufu*(qPow(1+bankRate/12.0,i)-qPow(1+bankRate/12.0,i-1))+monTotal-gongjijin;
        qDebug("第%d月应收租金%lf",i,monZhujin);
        QString str = QString("第%1个月还款为%2,当月应收租金%3").arg(i).arg(monTotal).arg(monZhujin);
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
