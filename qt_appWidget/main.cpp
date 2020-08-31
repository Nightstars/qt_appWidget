#include "qt_appWidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qt_appWidget w;
    w.show();
    return a.exec();
}
