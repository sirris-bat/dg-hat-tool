#include "hattool.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HatTool w;
    w.show();
    return a.exec();
}
