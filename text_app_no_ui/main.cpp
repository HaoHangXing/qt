#include "qwdlgmanual.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qwdlgmanual w;
    w.show();

    return a.exec();
}
