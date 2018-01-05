#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   /* ui->comboBox->addItem(QIcon(":/rec/img/new.png"),"mark");
    ui->comboBox->addItem(QIcon(":/rec/img/new.png"),"jhon");
    ui->comboBox->addItem(QIcon(":/rec/img/new.png"),"july");*/

    for(int i=0;i<9;i++){
        ui->comboBox->addItem(QIcon(":/rec/img/new.png"),QString::number(i)+"name");
    }
    ui->comboBox->insertItem(3,QIcon(":/rec/img/new.png"),"changed");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"title",ui->comboBox->currentText());
}
