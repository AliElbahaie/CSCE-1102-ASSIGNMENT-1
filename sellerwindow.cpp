#include "sellerwindow.h"
#include "ui_sellerwindow.h"

SellerWindow::SellerWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SellerWindow)
{
    ui->setupUi(this);
}

SellerWindow::~SellerWindow()
{
    delete ui;
}

void SellerWindow::on_BackButton_clicked()
{


    this->close();
    MainWindow *MW=new MainWindow;
    MW->show();

}

