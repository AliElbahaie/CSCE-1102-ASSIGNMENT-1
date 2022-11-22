#include "mainwindow.h"
#include "registration.h"
#include"sellerregistration.h"
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
    this->close();

    sellerregistration* SR = new sellerregistration;

    SR->show();
}


void MainWindow::on_CutomerButton_clicked()
{
    this->close();
    registration* CR =new registration;

    CR->show();
}

