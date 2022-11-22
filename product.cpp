#include "product.h"

Product::Product (QString Name,float Price, QString Category, int Quantity)
{
    name=Name;
    price = Price;
    category=Category;
    quantity=Quantity;

}


void Product::setName(QString Name)
{
    name=Name;
}

QString Product::getName()
{
    return name;
}


void Product::setPrice(float Price)
{
    price = Price;
}

float Product::getPrice()
{
    return price;
}

void Product::setCategory(QString Category)
{
    category=Category;
}

QString Product::getCategory()
{
    return category;
}

void Product::setQuantity(int Quantity)
{
    quantity=Quantity;
}

int Product::getQuantity()
{
    return quantity;
}
