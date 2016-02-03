#include <iostream>

#include <QApplication>
#include "mainwindow.h"
#include <boost/make_shared.hpp>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    MainWindow w;
    w.show();

    return app.exec();
}
