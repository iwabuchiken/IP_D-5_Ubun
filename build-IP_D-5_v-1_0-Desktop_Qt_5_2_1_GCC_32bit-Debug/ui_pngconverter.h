/********************************************************************************
** Form generated from reading UI file 'pngconverter.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PNGCONVERTER_H
#define UI_PNGCONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pngconverter
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *pngconverter)
    {
        if (pngconverter->objectName().isEmpty())
            pngconverter->setObjectName(QStringLiteral("pngconverter"));
        pngconverter->resize(400, 300);
        menuBar = new QMenuBar(pngconverter);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        pngconverter->setMenuBar(menuBar);
        mainToolBar = new QToolBar(pngconverter);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        pngconverter->addToolBar(mainToolBar);
        centralWidget = new QWidget(pngconverter);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pngconverter->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(pngconverter);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        pngconverter->setStatusBar(statusBar);

        retranslateUi(pngconverter);

        QMetaObject::connectSlotsByName(pngconverter);
    } // setupUi

    void retranslateUi(QMainWindow *pngconverter)
    {
        pngconverter->setWindowTitle(QApplication::translate("pngconverter", "pngconverter", 0));
    } // retranslateUi

};

namespace Ui {
    class pngconverter: public Ui_pngconverter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PNGCONVERTER_H
