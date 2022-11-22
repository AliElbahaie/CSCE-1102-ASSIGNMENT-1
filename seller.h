#ifndef seller_h
#define seller_h
#include <stdio.h>
#include <iostream>
#include<vector>
#include <QString>
#include "product.h"
using namespace std;

class Seller
{
private:
    QString name;
    QString email;

public:
    vector <Product> products;
    void signup();
    void addProduct(Product, vector <Product> &products);

};

#endif /* Seller_hpp */
