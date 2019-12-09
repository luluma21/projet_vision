#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "display.h"
#include <QtWidgets>
#include <QPixmap>
#include <QImage>
#include "test.cpp"
#include <QString>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QWidget *zoneCentrale = new QWidget;

    QLineEdit *nom = new QLineEdit;
    QLineEdit *prenom = new QLineEdit;
    QLineEdit *age = new QLineEdit;

    QFormLayout *layout = new QFormLayout;
    layout->addRow("Votre nom", nom);
    layout->addRow("Votre prénom", prenom);
    layout->addRow("Votre âge", age);

    zoneCentrale->setLayout(layout);

    setCentralWidget(zoneCentrale);
    resize(500,250);

    cv::Mat img{cv::imread("image_2366.jpeg")};
    ui->layout->addRow(setPixmap(QPixmap::fromImage(QImage(img.data, img.cols, img.rows, img.step, QImage::Format_RGB888))));

}

MainWindow::~MainWindow()
{
    delete ui;
}
