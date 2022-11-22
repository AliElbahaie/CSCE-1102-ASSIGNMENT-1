#ifndef SELLERWINDOW_H
#define SELLERWINDOW_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class SellerWindow;
}

class SellerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SellerWindow(QWidget *parent = nullptr);
    ~SellerWindow();

private slots:
    void on_BackButton_clicked();

private:
    Ui::SellerWindow *ui;
};

#endif // SELLERWINDOW_H
