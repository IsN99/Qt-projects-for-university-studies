#include "wind3.h"
#include "ui_wind3.h"
#include "wind2.h"
#include "dialog.h"

wind3::wind3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wind3)
{
    ui->setupUi(this);
}

wind3::~wind3()
{
    delete ui;
}

void wind3::on_pushButton_clicked()
{
    this->close();
    wind2 *Wind2 = new wind2;
    Wind2->show();

}

void wind3::on_pushButton_2_clicked()
{
    this->close();
    Dialog *dlg = new Dialog;
    dlg->show();

}
