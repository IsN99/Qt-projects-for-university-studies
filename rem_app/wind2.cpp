#include "wind2.h"
#include "ui_wind2.h"
#include "wind3.h"
#include "mainwindow.h"

wind2::wind2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wind2)
{
    ui->setupUi(this);
}

wind2::~wind2()
{
    delete ui;
}



void wind2::on_pushButton_2_clicked()
{
    this->close();
    wind3 *Wind3 = new wind3;
    Wind3->show();

}

void wind2::on_pushButton_clicked()
{
    this->close();
    MainWindow *MW = new MainWindow;
    MW->show();
}
