/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action567558;
    QAction *action7890787;
    QAction *action_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonManual;
    QPushButton *pushButtonLight;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBoxTimeOn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpinBox *spinBoxTimeOff;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(524, 256);
        MainWindow->setMinimumSize(QSize(524, 256));
        MainWindow->setMaximumSize(QSize(624, 324));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(249, 249, 249);"));
        action567558 = new QAction(MainWindow);
        action567558->setObjectName(QString::fromUtf8("action567558"));
        action7890787 = new QAction(MainWindow);
        action7890787->setObjectName(QString::fromUtf8("action7890787"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButtonManual = new QPushButton(centralwidget);
        pushButtonManual->setObjectName(QString::fromUtf8("pushButtonManual"));
        pushButtonManual->setEnabled(true);
        pushButtonManual->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rubik")});
        pushButtonManual->setFont(font);
        pushButtonManual->setStyleSheet(QString::fromUtf8("color: rgb(44, 54, 63);"));
        pushButtonManual->setIconSize(QSize(24, 28));

        verticalLayout_2->addWidget(pushButtonManual);


        verticalLayout->addLayout(verticalLayout_2);

        pushButtonLight = new QPushButton(centralwidget);
        pushButtonLight->setObjectName(QString::fromUtf8("pushButtonLight"));
        pushButtonLight->setEnabled(true);
        pushButtonLight->setMinimumSize(QSize(0, 50));
        pushButtonLight->setFont(font);
        pushButtonLight->setStyleSheet(QString::fromUtf8("color: rgb(44, 54, 63);"));

        verticalLayout->addWidget(pushButtonLight);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rubik")});
        font1.setPointSize(13);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label);

        spinBoxTimeOn = new QSpinBox(centralwidget);
        spinBoxTimeOn->setObjectName(QString::fromUtf8("spinBoxTimeOn"));
        spinBoxTimeOn->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Rubik")});
        font2.setPointSize(16);
        font2.setKerning(true);
        font2.setStyleStrategy(QFont::PreferAntialias);
        spinBoxTimeOn->setFont(font2);
        spinBoxTimeOn->setStyleSheet(QString::fromUtf8(""));
        spinBoxTimeOn->setAlignment(Qt::AlignCenter);
        spinBoxTimeOn->setMaximum(24);
        spinBoxTimeOn->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_2->addWidget(spinBoxTimeOn);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(label_2);

        spinBoxTimeOff = new QSpinBox(centralwidget);
        spinBoxTimeOff->setObjectName(QString::fromUtf8("spinBoxTimeOff"));
        spinBoxTimeOff->setMinimumSize(QSize(0, 50));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Rubik")});
        font3.setPointSize(16);
        spinBoxTimeOff->setFont(font3);
        spinBoxTimeOff->setStyleSheet(QString::fromUtf8(""));
        spinBoxTimeOff->setAlignment(Qt::AlignCenter);
        spinBoxTimeOff->setMaximum(24);

        horizontalLayout_4->addWidget(spinBoxTimeOff);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 524, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addSeparator();
        menu->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action567558->setText(QCoreApplication::translate("MainWindow", "567558\320\276\320\276", nullptr));
        action7890787->setText(QCoreApplication::translate("MainWindow", "7890787\321\200\320\276\320\273\320\264", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        pushButtonManual->setText(QCoreApplication::translate("MainWindow", "\320\240\321\203\321\207\320\275\320\276\320\271 \321\200\320\265\320\266\320\270\320\274", nullptr));
        pushButtonLight->setText(QCoreApplication::translate("MainWindow", "\320\241\320\262\320\265\321\202", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\262\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\262\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217:", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
