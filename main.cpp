#include <QApplication>
#include "calcwindow.h"
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CalcWindow w;


    w.show();
    w.setWindowIcon(QIcon(":/images/plogo_blue.jpg"));
    return a.exec();
}
