#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   // QMessageBox::about(this,"My Title","lol"); // returns void
   // QMessageBox::aboutQt(this,"My Title"); // returns void
   // QMessageBox::critical(this,"My Title","lol"); // returns button
   // QMessageBox::information(this,"My Title","information");// returns button
   // QMessageBox::question(this,"My Title","information");
   // QMessageBox::warning(this,"My Title","WARNING");
    QMessageBox::StandardButton reply=QMessageBox::question(this,"title","lol",QMessageBox::Yes | QMessageBox::No);

    if(reply==QMessageBox::Yes){
        QMessageBox::about(this,"Title","Pressed yes");
    }else{
        QMessageBox::about(this,"My Title","Pressed No");
    }

}
