#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

#include "utils.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Utils::hello();
}

MainWindow::~MainWindow()
{
    delete ui;
}



