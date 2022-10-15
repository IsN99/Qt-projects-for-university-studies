#ifndef WIND3_H
#define WIND3_H

#include <QDialog>

namespace Ui {
class wind3;
}

class wind3 : public QDialog
{
    Q_OBJECT

public:
    explicit wind3(QWidget *parent = nullptr);
    ~wind3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::wind3 *ui;
};

#endif // WIND3_H
