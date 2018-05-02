#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    qDebug() << __FILE__ << __LINE__;
    qDebug() << __FILE__ << __LINE__;
    qDebug() << __FILE__ << __LINE__;
    qDebug() << __FILE__ << __LINE__;
    qDebug() << __FILE__ << __LINE__;
}

MainWindow::~MainWindow()
{
    delete ui;
}
