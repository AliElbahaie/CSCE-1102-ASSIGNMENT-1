#include "customer.h"

Customer::Customer(QString Name,QString Address,QString Number, QString Email)
{
    name=Name;
    address=Address;
    phoneNumber=Number;
    email=Email;

}
void Customer::setName(QString Name)
{
    name=Name;
}
void Customer::setAddress(QString Address)
{
    address=Address;
}
void Customer::setPhonenumber(QString Number)
{
    phoneNumber=Number;
}
void Customer::setEmail(QString Email)
{
    email=Email;
}

QString Customer::getName()
{
    return name;
}
QString Customer::getAddress()
{
    return address;
}
QString Customer::getPhonenumber()
{
    return phoneNumber;
}
QString Customer::getEmail()
{
    return email;
}



