/********************************************************************************
** Form generated from reading UI file 'application.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_H
#define UI_APPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApplicationView
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QMenuBar *menuBar;
    QMenu *menuModules;

    void setupUi(QMainWindow *ApplicationView)
    {
        if (ApplicationView->objectName().isEmpty())
            ApplicationView->setObjectName(QStringLiteral("ApplicationView"));
        ApplicationView->resize(400, 320);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ApplicationView->sizePolicy().hasHeightForWidth());
        ApplicationView->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(ApplicationView);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setEnabled(true);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        ApplicationView->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ApplicationView);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuModules = new QMenu(menuBar);
        menuModules->setObjectName(QStringLiteral("menuModules"));
        ApplicationView->setMenuBar(menuBar);

        menuBar->addAction(menuModules->menuAction());

        retranslateUi(ApplicationView);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ApplicationView);
    } // setupUi

    void retranslateUi(QMainWindow *ApplicationView)
    {
        ApplicationView->setWindowTitle(QString());
        menuModules->setTitle(QApplication::translate("ApplicationView", "Modules", 0));
    } // retranslateUi

};

namespace Ui {
    class ApplicationView: public Ui_ApplicationView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
