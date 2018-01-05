#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myfunction()
{
    QTime time = QTime::currentTime();
    QString time_next = time.toString("hh :  mm : ss");
    ui->datetime->setText(time_next);
}
