#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{
    int a = ui->lineEdit->text().toInt();
    //инициализация переменных
    QString s="";

    while(a > 9){
        s = "9" + QString::number(a%10) + s;
        a /= 10;
    }

    s = QString::number(a%10) + s;

    ui->label->setText(s);
}

