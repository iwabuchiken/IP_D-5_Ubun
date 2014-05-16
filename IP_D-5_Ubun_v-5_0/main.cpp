#include "pngconverter.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pngconverter w;
    w.show();

    return a.exec();
}
