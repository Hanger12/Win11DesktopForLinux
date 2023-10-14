#include "mainwindow.h"
#include "ui_mainwindow.h"
//test12
//tes123
//testfast
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

