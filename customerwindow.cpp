#include "customerwindow.h"
#include "ui_customerwindow.h"

customerwindow::customerwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerwindow)
{
    ui->setupUi(this);
}

customerwindow::~customerwindow()
{
    delete ui;
}


void customerwindow::searchByName(QString Pname,vector<Product> products)
{
    for(auto it = products.begin(); it != products.end(); it++)
    {
        if(it->getName() == Pname)
        {
            ui->ProductList->addItem(Pname+" Quantity: "+QString::number(it->getQuantity()));
        }
    }

   if(ui->ProductList->size().isNull())
  {
      ui->ProductList->addItem("Product Not Found");
  }

}



void customerwindow::searchByCategory(QString Pcategory,vector<Product> products)
{
    for(auto it = products.begin(); it != products.end(); it++)
    {
        if(it->getCategory() == Pcategory)
        {
            ui->ProductList->addItem(it->getCategory());
        }
    }

   if(ui->ProductList->size().isNull())
  {
      ui->ProductList->addItem("Product Not Found");
  }


}


void customerwindow:: addProductToCart(Product p,vector<Product> products)
{
    products.push_back(p);
}

void customerwindow::on_BackButton_clicked()
{
    this->close();
    MainWindow *MW=new MainWindow;
    MW->show();
}


void customerwindow::on_SearchButton_clicked()
{
    vector <Product> test;
    Product p("mango",69.99,"Fruit",10);
    Product pp("batee5",69.99,"Fruit",10);
    Product ppp("omar",69.99,"Fruit",10);
    Product pppp("ali",69.99,"Fruit",10);

    test.push_back(p);
    test.push_back(pp);
    test.push_back(ppp);
    test.push_back(pppp);
  ui->ProductList->clear();

  Seller s;
  searchByName(ui->SearchNameLineEdit->text(),test);
  searchByCategory(ui->SearchCategoryLineEdit->text(),test);



}

