#include "beginscene.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    beginScene w;
    w.show();

    return a.exec();
}
