#ifndef customer_h
#define customer_h
#include <iostream>
#include <vector>
#include <QString>
#include <QMessageBox>
#include "product.h"


using namespace std;

class Customer
{
private:
    QString name;
    QString address;
    QString phoneNumber;
    QString email;
public:
    vector <Product> cart;
    Customer ()=default;
    Customer(QString,QString,QString,QString);

    void setName(QString);
    void setAddress(QString);
    void setPhonenumber(QString);
    void setEmail(QString);

    QString getName();
    QString getAddress();
    QString getPhonenumber();
    QString getEmail();

};

#endif /* Customer_hpp */
