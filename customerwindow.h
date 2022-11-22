#ifndef CUSTOMERWINDOW_H
#define CUSTOMERWINDOW_H

#include <QDialog>
#include "product.h"
#include "customer.h"
#include "seller.h"
#include <iostream>
#include <vector>
#include <QString>
#include <QMessageBox>
#include "mainwindow.h"
#include <fstream>


namespace Ui {
class customerwindow;
}

class customerwindow : public QDialog
{
    Q_OBJECT

public:
    explicit customerwindow(QWidget *parent = nullptr);
    ~customerwindow();


    void searchByName(QString,vector<Product>);
    void searchByCategory(QString,vector<Product>);
    void addProductToCart(Product,vector<Product>);
    void recipt(vector<Product>);



private slots:
    void on_BackButton_clicked();

    void on_SearchButton_clicked();

private:
    Ui::customerwindow *ui;
};

#endif // CUSTOMERWINDOW_H
