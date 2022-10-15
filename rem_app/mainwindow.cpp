#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wind2.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    wind2 *Wind2 = new wind2;
    Wind2->show();  // Показываем второе окно
    this->close();
}
