#ifndef WIND2_H
#define WIND2_H

#include <QDialog>


namespace Ui {
class wind2;
}

class wind2 : public QDialog
{
    Q_OBJECT

public:
    explicit wind2(QWidget *parent = nullptr);
    ~wind2();

private slots:


    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::wind2 *ui;


};

#endif // WIND2_H
