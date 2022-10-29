#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include "dialog1.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    this->close();
    MainWindow *MW = new MainWindow;
    MW->show();
}

void Dialog::on_pushButton_2_clicked()
{
    this->close();
    Dialog1 *D1 = new Dialog1;
    D1->show();
}
