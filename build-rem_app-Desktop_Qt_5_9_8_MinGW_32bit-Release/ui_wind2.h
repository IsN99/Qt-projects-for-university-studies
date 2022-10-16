/********************************************************************************
** Form generated from reading UI file 'wind2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIND2_H
#define UI_WIND2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_wind2
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *wind2)
    {
        if (wind2->objectName().isEmpty())
            wind2->setObjectName(QStringLiteral("wind2"));
        wind2->resize(600, 420);
        pushButton = new QPushButton(wind2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 370, 300, 50));
        pushButton_2 = new QPushButton(wind2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 370, 300, 50));
        label = new QLabel(wind2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 391, 351));
        label->setPixmap(QPixmap(QString::fromUtf8("../rem_img/img1.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(wind2);

        QMetaObject::connectSlotsByName(wind2);
    } // setupUi

    void retranslateUi(QDialog *wind2)
    {
        wind2->setWindowTitle(QApplication::translate("wind2", "\320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265", Q_NULLPTR));
        pushButton->setText(QApplication::translate("wind2", "\320\235\320\260\320\267\320\260\320\264", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("wind2", "\320\224\320\260\320\273\320\265\320\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class wind2: public Ui_wind2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIND2_H
