#ifndef SELLERREGISTRATION_H
#define SELLERREGISTRATION_H

#include <QDialog>
#include <sellerwindow.h>

namespace Ui {
class sellerregistration;
}

class sellerregistration : public QDialog
{
    Q_OBJECT

public:
    explicit sellerregistration(QWidget *parent = nullptr);
    ~sellerregistration();

private slots:
    void on_pushButton_clicked();

private:
    Ui::sellerregistration *ui;
};

#endif // SELLERREGISTRATION_H
