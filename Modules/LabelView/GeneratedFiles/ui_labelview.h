/********************************************************************************
** Form generated from reading UI file 'labelview.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABELVIEW_H
#define UI_LABELVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LabelViewClass
{
public:
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber;

    void setupUi(QWidget *LabelViewClass)
    {
        if (LabelViewClass->objectName().isEmpty())
            LabelViewClass->setObjectName(QStringLiteral("LabelViewClass"));
        LabelViewClass->resize(600, 400);
        gridLayout = new QGridLayout(LabelViewClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lcdNumber = new QLCDNumber(LabelViewClass);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setProperty("intValue", QVariant(1));

        gridLayout->addWidget(lcdNumber, 0, 0, 1, 1);


        retranslateUi(LabelViewClass);

        QMetaObject::connectSlotsByName(LabelViewClass);
    } // setupUi

    void retranslateUi(QWidget *LabelViewClass)
    {
        LabelViewClass->setWindowTitle(QApplication::translate("LabelViewClass", "LabelView", 0));
    } // retranslateUi

};

namespace Ui {
    class LabelViewClass: public Ui_LabelViewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABELVIEW_H
