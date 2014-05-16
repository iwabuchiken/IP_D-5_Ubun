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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pngconverter
{
public:
    QWidget *centralWidget;
    QPushButton *BT_Quit;
    QPushButton *BT_Viewer;
    QPushButton *BT_Convert;
    QPushButton *BT_Choose_1;
    QPushButton *BT_Choose_2;
    QLabel *LB_Input_1;
    QLabel *LB_Input_2;
    QTextEdit *TE_Input_1;
    QTextEdit *TE_Input_2;
    QRadioButton *RB_Verti;
    QRadioButton *RB_Horizon;
    QLabel *LB_Direction;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *pngconverter)
    {
        if (pngconverter->objectName().isEmpty())
            pngconverter->setObjectName(QStringLiteral("pngconverter"));
        pngconverter->resize(737, 529);
        centralWidget = new QWidget(pngconverter);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BT_Quit = new QPushButton(centralWidget);
        BT_Quit->setObjectName(QStringLiteral("BT_Quit"));
        BT_Quit->setGeometry(QRect(570, 400, 127, 33));
        BT_Viewer = new QPushButton(centralWidget);
        BT_Viewer->setObjectName(QStringLiteral("BT_Viewer"));
        BT_Viewer->setGeometry(QRect(310, 390, 127, 33));
        BT_Convert = new QPushButton(centralWidget);
        BT_Convert->setObjectName(QStringLiteral("BT_Convert"));
        BT_Convert->setGeometry(QRect(90, 390, 127, 33));
        BT_Choose_1 = new QPushButton(centralWidget);
        BT_Choose_1->setObjectName(QStringLiteral("BT_Choose_1"));
        BT_Choose_1->setGeometry(QRect(400, 30, 127, 33));
        BT_Choose_2 = new QPushButton(centralWidget);
        BT_Choose_2->setObjectName(QStringLiteral("BT_Choose_2"));
        BT_Choose_2->setGeometry(QRect(400, 190, 127, 33));
        LB_Input_1 = new QLabel(centralWidget);
        LB_Input_1->setObjectName(QStringLiteral("LB_Input_1"));
        LB_Input_1->setGeometry(QRect(140, 40, 91, 23));
        LB_Input_2 = new QLabel(centralWidget);
        LB_Input_2->setObjectName(QStringLiteral("LB_Input_2"));
        LB_Input_2->setGeometry(QRect(150, 200, 91, 23));
        TE_Input_1 = new QTextEdit(centralWidget);
        TE_Input_1->setObjectName(QStringLiteral("TE_Input_1"));
        TE_Input_1->setGeometry(QRect(60, 80, 461, 78));
        TE_Input_2 = new QTextEdit(centralWidget);
        TE_Input_2->setObjectName(QStringLiteral("TE_Input_2"));
        TE_Input_2->setGeometry(QRect(80, 250, 441, 78));
        RB_Verti = new QRadioButton(centralWidget);
        RB_Verti->setObjectName(QStringLiteral("RB_Verti"));
        RB_Verti->setGeometry(QRect(560, 120, 148, 28));
        RB_Horizon = new QRadioButton(centralWidget);
        RB_Horizon->setObjectName(QStringLiteral("RB_Horizon"));
        RB_Horizon->setGeometry(QRect(560, 200, 148, 28));
        LB_Direction = new QLabel(centralWidget);
        LB_Direction->setObjectName(QStringLiteral("LB_Direction"));
        LB_Direction->setGeometry(QRect(590, 60, 91, 23));
        LB_Direction->setAlignment(Qt::AlignCenter);
        pngconverter->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(pngconverter);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 737, 31));
        pngconverter->setMenuBar(menuBar);
        mainToolBar = new QToolBar(pngconverter);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        pngconverter->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(pngconverter);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        pngconverter->setStatusBar(statusBar);

        retranslateUi(pngconverter);

        QMetaObject::connectSlotsByName(pngconverter);
    } // setupUi

    void retranslateUi(QMainWindow *pngconverter)
    {
        pngconverter->setWindowTitle(QApplication::translate("pngconverter", "pngconverter", 0));
        BT_Quit->setText(QApplication::translate("pngconverter", "Quit", 0));
        BT_Viewer->setText(QApplication::translate("pngconverter", "Viewer", 0));
        BT_Convert->setText(QApplication::translate("pngconverter", "Convert", 0));
        BT_Choose_1->setText(QApplication::translate("pngconverter", "Choose", 0));
        BT_Choose_2->setText(QApplication::translate("pngconverter", "Choose", 0));
        LB_Input_1->setText(QApplication::translate("pngconverter", "Input 1", 0));
        LB_Input_2->setText(QApplication::translate("pngconverter", "Input 2", 0));
        RB_Verti->setText(QApplication::translate("pngconverter", "Vertical", 0));
        RB_Horizon->setText(QApplication::translate("pngconverter", "Horizontal", 0));
        LB_Direction->setText(QApplication::translate("pngconverter", "Direction", 0));
    } // retranslateUi

};

namespace Ui {
    class pngconverter: public Ui_pngconverter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PNGCONVERTER_H
