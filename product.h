#ifndef product_h
#define product_h
#include <iostream>
#include <QString>
using namespace std;
class Product
{
private:
    QString name;
    float price;
    QString category;
    int quantity;
public:
    Product()=default;
    Product (QString,float,QString,int);

    void setName(QString);
    QString getName();

    void setPrice(float);
    float getPrice();

    void setCategory(QString);
    QString getCategory();

    void setQuantity(int);
    int getQuantity();
};

#endif /* Product_hpp */
