#include "sellerregistration.h"
#include "ui_sellerregistration.h"

sellerregistration::sellerregistration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sellerregistration)
{
    ui->setupUi(this);
}

sellerregistration::~sellerregistration()
{
    delete ui;
}

void sellerregistration::on_pushButton_clicked()
{
    this->close();

    SellerWindow *SW= new SellerWindow;
    SW->show();
}

