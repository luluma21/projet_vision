#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "display.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    display* disp = new display();
    //ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
