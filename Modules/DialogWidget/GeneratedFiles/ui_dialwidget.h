/********************************************************************************
** Form generated from reading UI file 'dialwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALWIDGET_H
#define UI_DIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialWidget
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber;
    QSpacerItem *horizontalSpacer;
    QDial *dial;

    void setupUi(QWidget *DialWidget)
    {
        if (DialWidget->objectName().isEmpty())
            DialWidget->setObjectName(QStringLiteral("DialWidget"));
        DialWidget->resize(778, 654);
        gridLayout_2 = new QGridLayout(DialWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, 0, 0, -1);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lcdNumber = new QLCDNumber(DialWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setMaximumSize(QSize(16777215, 100));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        dial = new QDial(DialWidget);
        dial->setObjectName(QStringLiteral("dial"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dial->sizePolicy().hasHeightForWidth());
        dial->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(dial);


        gridLayout_2->addLayout(verticalLayout, 3, 0, 1, 1);


        retranslateUi(DialWidget);
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(DialWidget);
    } // setupUi

    void retranslateUi(QWidget *DialWidget)
    {
        DialWidget->setWindowTitle(QApplication::translate("DialWidget", "DialWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class DialWidget: public Ui_DialWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALWIDGET_H
