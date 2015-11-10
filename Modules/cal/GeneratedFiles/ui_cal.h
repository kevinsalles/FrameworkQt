/********************************************************************************
** Form generated from reading UI file 'cal.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAL_H
#define UI_CAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calClass
{
public:
    QGridLayout *gridLayout;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *calClass)
    {
        if (calClass->objectName().isEmpty())
            calClass->setObjectName(QStringLiteral("calClass"));
        calClass->resize(600, 400);
        gridLayout = new QGridLayout(calClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        calendarWidget = new QCalendarWidget(calClass);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));

        gridLayout->addWidget(calendarWidget, 0, 0, 1, 1);


        retranslateUi(calClass);

        QMetaObject::connectSlotsByName(calClass);
    } // setupUi

    void retranslateUi(QWidget *calClass)
    {
        calClass->setWindowTitle(QApplication::translate("calClass", "cal", 0));
    } // retranslateUi

};

namespace Ui {
    class calClass: public Ui_calClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAL_H
