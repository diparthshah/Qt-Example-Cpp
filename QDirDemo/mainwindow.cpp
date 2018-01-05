#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDir>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDir dir;
    /*if(dir.exists()){
        QMessageBox::information(this,"title","true");
    }
    else{
        QMessageBox::information(this,"title","false");
    }*/

    foreach (QFileInfo var, dir.drives()) {
        ui->comboBox->addItems(QStringList(var.absoluteFilePath()));
    }

    QDir dir2("/home/diparth/QDirDemo");
    foreach (QFileInfo var, dir2.entryInfoList()) {
            ui->listWidget->addItems(QStringList(var.absoluteFilePath()));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QDir dir("/home/diparth/QDirDemo/yyy");
    if(dir.exists()){
        QMessageBox::information(this,"title","dir exist");
    }
    else{
        dir.mkpath("/home/diparth/QDirDemo/yyy");
    }

}
