#include "dialog1.h"
#include "ui_dialog1.h"
#include "dialog.h"
#include "anmod.h"
#include <QString>

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_pushButton_clicked()
{
    this->close();
    Dialog *d1 = new Dialog;
    d1->show();
}

void Dialog1::on_pushButton_2_clicked()
{
    float K1=ui->lineEdit->text().toFloat();
    float K2=ui->lineEdit_2->text().toFloat();
    float delt=ui->lineEdit_3->text().toFloat();

    float N=ui->lineEdit_5->text().toFloat();
    float Td=ui->lineEdit_6->text().toFloat();
    float Tf=ui->lineEdit_7->text().toFloat();
    float tk=ui->lineEdit_8->text().toFloat();
    float tc=ui->lineEdit_9->text().toFloat();
    float tdc=ui->lineEdit_10->text().toFloat();
    float c=ui->lineEdit_11->text().toFloat();
    float m=ui->lineEdit_12->text().toFloat();
    float Y=ui->lineEdit_13->text().toFloat();
    anmod *A = new anmod(K1, K2,delt,N,Td,Tf,tk,tc,tdc,c,m,Y);


    ui->lineEdit_14->setText(QString ::number(A->lmf));
    ui->lineEdit_15->setText(QString ::number(A->lm));
    ui->lineEdit_16->setText(QString ::number(A->Tk));
    ui->lineEdit_17->setText(QString ::number(A->Tcp));
    ui->lineEdit_18->setText(QString ::number(A->Tdc));
    ui->lineEdit_19->setText(QString ::number(A->Treact));
    ui->lineEdit_20->setText(QString ::number(A->Tckl));
    ui->lineEdit_21->setText(QString ::number(A->itr));
    ui->lineEdit_22->setText(QString ::number(A->chnl));
    ui->lineEdit_23->setText(QString ::number(A->cpu));
    ui->lineEdit_24->setText(QString ::number(A->cd));
    ui->lineEdit_25->setText(QString ::number(A->stt));
    ui->lineEdit_26->setText(QString ::number(A->usr));
}
