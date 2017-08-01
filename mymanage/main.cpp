#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("商铺投资计算器");
    w.setWindowIcon(QIcon("app.ico"));

    //QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    //QTextCodec::setCodecForLocale(codec);
    //QTextCodec::setCodecForCStrings(codec);
    //QTextCodec::setCodecForTr(codec);
    //QFont font("wenquanyi",6);
    //a.setFont(font);

    w.show();
    //w.resize(size);
    return a.exec();
}
