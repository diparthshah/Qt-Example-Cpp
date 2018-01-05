#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item= new QListWidgetItem(QIcon(":rec/img/new.png"),"mark");
    QListWidgetItem *item2= new QListWidgetItem(QIcon(":rec/img/new.png"),"lol");
    QListWidgetItem *item3= new QListWidgetItem(QIcon(":rec/img/new.png"),"sdfds");
    ui->listWidget->addItem(item);
    ui->listWidget->addItem(item2);
    ui->listWidget->addItem(item3);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   // QMessageBox::information(this,"title",ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setBackgroundColor(Qt::red);
}
