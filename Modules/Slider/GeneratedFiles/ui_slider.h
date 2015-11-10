/********************************************************************************
** Form generated from reading UI file 'slider.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDER_H
#define UI_SLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Slider
{
public:
    QGridLayout *gridLayout;
    QSlider *horizontalSlider;

    void setupUi(QWidget *Slider)
    {
        if (Slider->objectName().isEmpty())
            Slider->setObjectName(QStringLiteral("Slider"));
        Slider->resize(600, 400);
        gridLayout = new QGridLayout(Slider);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSlider = new QSlider(Slider);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 0, 0, 1, 1);


        retranslateUi(Slider);

        QMetaObject::connectSlotsByName(Slider);
    } // setupUi

    void retranslateUi(QWidget *Slider)
    {
        Slider->setWindowTitle(QApplication::translate("Slider", "Slider", 0));
    } // retranslateUi

};

namespace Ui {
    class Slider: public Ui_Slider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDER_H
