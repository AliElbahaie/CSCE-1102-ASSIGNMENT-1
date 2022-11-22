#include "seller.h"

//void Seller::signup()
//{
//    cin>>name;
//    cin>>email;
//}

void Seller::addProduct(Product p, vector <Product> &products)
{
    products.push_back(p);
}
