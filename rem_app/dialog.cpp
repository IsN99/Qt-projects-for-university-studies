#include "dialog.h"
#include "ui_dialog.h"
#include "wind3.h"

QValueAxis *axisX = new QValueAxis;
QValueAxis *axisY = new QValueAxis;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    model = new QStandardItemModel (13,3, this);
    ui->tableView->setModel(model);
    ui->tableView->setShowGrid(true);
    for (int i=0; i<model->rowCount(); ++i){
        ui->tableView->setRowHeight(i,22);
    }
    QModelIndex index;
    for (int i=0; i<model->rowCount(); ++i){
        for (int j=0; j <model->columnCount();++j){
            index= model->index(i,j);
            model->setData(index, "-");
        }
    }

    // заголовки столбцов таблицы
    model->setHeaderData(0, Qt::Horizontal, "Вар №1");
    model->setHeaderData(1, Qt::Horizontal, "Вар №2");
    model->setHeaderData(2, Qt::Horizontal, "Вар №3");
    // заголовки строк таблицы
    model->setHeaderData(0, Qt::Vertical, "c");
    model->setHeaderData(1, Qt::Vertical, "P0");
    model->setHeaderData(2, Qt::Vertical, "Q");
    model->setHeaderData(3, Qt::Vertical, "L");
    model->setHeaderData(4, Qt::Vertical, "U");
    model->setHeaderData(5, Qt::Vertical, "p0");
    model->setHeaderData(6, Qt::Vertical, "n");
    model->setHeaderData(7, Qt::Vertical, "pe");
    model->setHeaderData(8, Qt::Vertical, "W");
    model->setHeaderData(9, Qt::Vertical, "Tp");
    model->setHeaderData(10, Qt::Vertical, "Tц");
    model->setHeaderData(11, Qt::Vertical, "pe/p0");
    model->setHeaderData(12, Qt::Vertical, "Y");

    // график
    chrt = new QChart ;
    ui->vchrt->setChart(chrt);
}



Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    this->close();
    wind3 *Wind3 = new wind3;
    Wind3->show();

}

void Dialog::on_pushButton_2_clicked()
{
    QModelIndex index;
     //значения С
    index=model->index(0,0);
    model->setData(index, ui->C1->text());
    index=model->index(0,1);
    model->setData(index, ui->C2->text());
    index=model->index(0,2);
    model->setData(index, ui->C3->text());
    float tno = ui->tno->text().toFloat();
    float to = ui->to->text().toFloat();
    int N = ui->N->text().toInt();
    int C1 = ui->C1->text().toInt();
    int C2 = ui->C2->text().toInt();
    int C3 = ui->C3->text().toInt();
    float S1 = ui->S1->text().toFloat();
    float S = ui->S->text().toFloat();
    ReM O1(tno,to,N,C1,S1,S);
    ReM O2(tno,to,N,C2,S1,S);
    ReM O3(tno,to,N,C3,S1,S);
    //значение P0
    index=model->index(1,0);
    model->setData(index, O1.getP0());
    index=model->index(1,1);
    model->setData(index, O2.getP0());
    index=model->index(1,2);
    model->setData(index, O3.getP0());
    //значение Q
    index=model->index(2,0);
    model->setData(index, O1.getQ0());
    index=model->index(2,1);
    model->setData(index, O2.getQ0());
    index=model->index(2,2);
    model->setData(index, O3.getQ0());
    //значение L
    index=model->index(3,0);
    model->setData(index, O1.getL0());
    index=model->index(3,1);
    model->setData(index, O2.getL0());
    index=model->index(3,2);
    model->setData(index, O3.getL0());
    //значение U
    index=model->index(4,0);
    model->setData(index, O1.getU0());
    index=model->index(4,1);
    model->setData(index, O2.getU0());
    index=model->index(4,2);
    model->setData(index, O3.getU0());
    //значение p0
    index=model->index(5,0);
    model->setData(index, O1.getp0());
    index=model->index(5,1);
    model->setData(index, O2.getp0());
    index=model->index(5,2);
    model->setData(index, O3.getp0());
    //значение n
    index=model->index(6,0);
    model->setData(index, O1.getn());
    index=model->index(6,1);
    model->setData(index, O2.getn());
    index=model->index(6,2);
    model->setData(index, O3.getn());
    //значение pe
    index=model->index(7,0);
    model->setData(index, O1.getpe());
    index=model->index(7,1);
    model->setData(index, O2.getpe());
    index=model->index(7,2);
    model->setData(index, O3.getpe());
    //значение W
    index=model->index(8,0);
    model->setData(index, O1.getW());
    index=model->index(8,1);
    model->setData(index, O2.getW());
    index=model->index(8,2);
    model->setData(index, O3.getW());
    //значение Tp
    index=model->index(9,0);
    model->setData(index, O1.getTp());
    index=model->index(9,1);
    model->setData(index, O2.getTp());
    index=model->index(9,2);
    model->setData(index, O3.getTp());
    //значение Tц
    index=model->index(10,0);
    model->setData(index, O1.getT());
    index=model->index(10,1);
    model->setData(index, O2.getT());
    index=model->index(10,2);
    model->setData(index, O3.getT());
    //значение pe/p0
    index=model->index(11,0);
    model->setData(index, O1.getpe()/O1.getp0());
    index=model->index(11,1);
    model->setData(index, O2.getpe()/O2.getp0());
    index=model->index(11,2);
    model->setData(index, O3.getpe()/O3.getp0());
    //значение Y
    index=model->index(12,0);
    model->setData(index, O1.getY());
    index=model->index(12,1);
    model->setData(index, O2.getY());
    index=model->index(12,2);
    model->setData(index, O3.getY());


    axisY->setRange(0,15000);
    axisY->setTickCount(4);
    axisY->setLabelFormat("%.g");


    axisX->setRange(0,5);
    axisX->setTickCount(6);
    axisX->setLabelFormat("%.g");



    QLineSeries *series1 = new QLineSeries;

    series1->append(1,O1.getY());
    series1->append(2,O2.getY());
    series1->append(3,O3.getY());

    chrt->addSeries(series1);
    chrt->setAxisX(axisX,series1);
    chrt->setAxisY(axisY,series1);

}
