/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed May 30 20:46:29 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "GLWidget.hpp"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    GLWidget *glWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *WLSBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QDoubleSpinBox *radiusBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *hBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *bezierBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *kBox;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 752);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        glWidget = new GLWidget(centralwidget);
        glWidget->setObjectName(QString::fromUtf8("glWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(glWidget->sizePolicy().hasHeightForWidth());
        glWidget->setSizePolicy(sizePolicy);
        glWidget->setAutoFillBackground(false);

        horizontalLayout->addWidget(glWidget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        WLSBox = new QCheckBox(groupBox);
        WLSBox->setObjectName(QString::fromUtf8("WLSBox"));

        verticalLayout->addWidget(WLSBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        radiusBox = new QDoubleSpinBox(groupBox);
        radiusBox->setObjectName(QString::fromUtf8("radiusBox"));

        horizontalLayout_4->addWidget(radiusBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        hBox = new QDoubleSpinBox(groupBox);
        hBox->setObjectName(QString::fromUtf8("hBox"));

        horizontalLayout_2->addWidget(hBox);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        bezierBox = new QCheckBox(groupBox_2);
        bezierBox->setObjectName(QString::fromUtf8("bezierBox"));

        verticalLayout_2->addWidget(bezierBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        kBox = new QSpinBox(groupBox_2);
        kBox->setObjectName(QString::fromUtf8("kBox"));

        horizontalLayout_3->addWidget(kBox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addWidget(groupBox_2, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(WLSBox, SIGNAL(toggled(bool)), glWidget, SLOT(sigShowWLS(bool)));
        QObject::connect(radiusBox, SIGNAL(valueChanged(double)), glWidget, SLOT(sigSetRadius(double)));
        QObject::connect(hBox, SIGNAL(valueChanged(double)), glWidget, SLOT(sigSetH(double)));
        QObject::connect(bezierBox, SIGNAL(toggled(bool)), glWidget, SLOT(sigShowBezier(bool)));
        QObject::connect(kBox, SIGNAL(valueChanged(int)), glWidget, SLOT(sigSetK(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CG2 - \303\234bung 1", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "WLS", 0, QApplication::UnicodeUTF8));
        WLSBox->setText(QApplication::translate("MainWindow", "WLS", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Radius:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "h:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Bezier", 0, QApplication::UnicodeUTF8));
        bezierBox->setText(QApplication::translate("MainWindow", "Bezier", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "k:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
