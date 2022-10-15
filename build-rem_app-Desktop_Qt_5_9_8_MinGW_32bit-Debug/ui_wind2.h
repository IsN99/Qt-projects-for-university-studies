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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wind2
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *wind2)
    {
        if (wind2->objectName().isEmpty())
            wind2->setObjectName(QStringLiteral("wind2"));
        wind2->resize(600, 400);
        widget = new QWidget(wind2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(180, 110, 110, 79));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(wind2);

        QMetaObject::connectSlotsByName(wind2);
    } // setupUi

    void retranslateUi(QDialog *wind2)
    {
        wind2->setWindowTitle(QApplication::translate("wind2", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("wind2", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class wind2: public Ui_wind2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIND2_H
