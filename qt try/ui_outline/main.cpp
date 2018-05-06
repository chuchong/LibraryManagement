#include "libman.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    libman::toLogin();

    return a.exec();
}
