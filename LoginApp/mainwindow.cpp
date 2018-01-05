#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/lin.jpeg");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->statusBar->addPermanentWidget(ui->label_3,9);
    ui->label_3->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username =ui->lineEdit_username->text();
    QString password = ui->lineEdit_username->text();
    ui->label_3->setVisible(true);

    if(username == "test" && password=="test"){
        ui->label_3->setText("Login Successfull");
    }
    else{
        ui->label_3->setText("Incorrect Username or Password");
    }

}
