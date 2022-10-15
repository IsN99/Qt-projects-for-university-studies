/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTableView *tableView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_8;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *tno;
    QLabel *label_3;
    QLineEdit *to;
    QLabel *label_4;
    QLineEdit *N;
    QLabel *label_5;
    QLineEdit *C1;
    QLineEdit *C2;
    QLineEdit *C3;
    QLabel *label_6;
    QLineEdit *S1;
    QLabel *label_7;
    QLineEdit *S;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QChartView *vchrt;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(560, 560);
        tableView = new QTableView(Dialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(205, 0, 350, 350));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 2, 191, 351));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);


        verticalLayout_2->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        tno = new QLineEdit(layoutWidget);
        tno->setObjectName(QStringLiteral("tno"));

        gridLayout->addWidget(tno, 0, 1, 1, 3);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        to = new QLineEdit(layoutWidget);
        to->setObjectName(QStringLiteral("to"));

        gridLayout->addWidget(to, 1, 1, 1, 3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        N = new QLineEdit(layoutWidget);
        N->setObjectName(QStringLiteral("N"));

        gridLayout->addWidget(N, 2, 1, 1, 3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        C1 = new QLineEdit(layoutWidget);
        C1->setObjectName(QStringLiteral("C1"));

        gridLayout->addWidget(C1, 3, 1, 1, 1);

        C2 = new QLineEdit(layoutWidget);
        C2->setObjectName(QStringLiteral("C2"));

        gridLayout->addWidget(C2, 3, 2, 1, 1);

        C3 = new QLineEdit(layoutWidget);
        C3->setObjectName(QStringLiteral("C3"));

        gridLayout->addWidget(C3, 3, 3, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        S1 = new QLineEdit(layoutWidget);
        S1->setObjectName(QStringLiteral("S1"));

        gridLayout->addWidget(S1, 4, 1, 1, 3);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        S = new QLineEdit(layoutWidget);
        S->setObjectName(QStringLiteral("S"));

        gridLayout->addWidget(S, 5, 1, 1, 3);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_8->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_8);

        vchrt = new QChartView(Dialog);
        vchrt->setObjectName(QStringLiteral("vchrt"));
        vchrt->setGeometry(QRect(209, 359, 341, 191));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\321\200\320\260\321\201\321\207\320\265\321\202", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "\320\235\320\260\320\267\320\260\320\264", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog", "\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "t\320\275\320\276", Q_NULLPTR));
        tno->setText(QApplication::translate("Dialog", "1000", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "t\320\276", Q_NULLPTR));
        to->setText(QApplication::translate("Dialog", "10", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "N", Q_NULLPTR));
        N->setText(QApplication::translate("Dialog", "100", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "C", Q_NULLPTR));
        C1->setText(QApplication::translate("Dialog", "1", Q_NULLPTR));
        C2->setText(QApplication::translate("Dialog", "2", Q_NULLPTR));
        C3->setText(QApplication::translate("Dialog", "3", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "S1", Q_NULLPTR));
        S1->setText(QApplication::translate("Dialog", "300", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog", "S", Q_NULLPTR));
        S->setText(QApplication::translate("Dialog", "2000", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
