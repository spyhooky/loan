#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("商铺投资计算器");
    w.setWindowIcon(QIcon("app.ico"));
    w.show();

    return a.exec();
}
