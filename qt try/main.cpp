#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	QDialog w;
	QLabel label(&w);
	label.setText("Hello QT!");
	label.setGeometry(10, 10, 100, 100);
	w.show();
    MainWindow c;
    c.show();

    return a.exec();
}
