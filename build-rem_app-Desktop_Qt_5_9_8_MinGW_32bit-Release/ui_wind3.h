/********************************************************************************
** Form generated from reading UI file 'wind3.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIND3_H
#define UI_WIND3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_wind3
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *wind3)
    {
        if (wind3->objectName().isEmpty())
            wind3->setObjectName(QStringLiteral("wind3"));
        wind3->resize(600, 420);
        pushButton = new QPushButton(wind3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 370, 300, 50));
        pushButton_2 = new QPushButton(wind3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 370, 300, 50));

        retranslateUi(wind3);

        QMetaObject::connectSlotsByName(wind3);
    } // setupUi

    void retranslateUi(QDialog *wind3)
    {
        wind3->setWindowTitle(QApplication::translate("wind3", "\321\203\321\201\320\273\320\276\320\262\320\275\321\213\320\265 \320\276\320\261\320\276\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", Q_NULLPTR));
        pushButton->setText(QApplication::translate("wind3", "\320\235\320\260\320\267\320\260\320\264", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("wind3", "\320\224\320\260\320\273\320\265\320\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class wind3: public Ui_wind3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIND3_H
