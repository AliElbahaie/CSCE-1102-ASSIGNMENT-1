#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>
#include "customer.h"
#include "customerwindow.h"

namespace Ui {
class registration;
}

class registration : public QDialog
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = nullptr);
    ~registration();

       void signup();

private slots:
    void on_pushButton_clicked();

private:
    Ui::registration *ui;
};

#endif // REGISTRATION_H
