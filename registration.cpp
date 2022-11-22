#include "registration.h"
#include "ui_registration.h"

registration::registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registration)
{
    ui->setupUi(this);
}

registration::~registration()
{
    delete ui;
}
void registration::signup()
{

    Customer c;

    c.setName(ui->NameLineEdit->text());
    c.setAddress(ui->AddressTextEdit->text());
    c.setPhonenumber(ui->NumberTextEdit->text());
    c.setEmail(ui->EmailTextEdit->text());


}

void registration::on_pushButton_clicked()
{
    this->close();

    customerwindow* CW= new customerwindow;
    CW->show();

}

