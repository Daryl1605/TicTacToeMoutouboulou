/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton1_1;
    QPushButton *pushButton1_2;
    QPushButton *pushButton1_3;
    QPushButton *pushButton2_1;
    QPushButton *pushButton2_2;
    QPushButton *pushButton2_3;
    QPushButton *pushButton3_1;
    QPushButton *pushButton3_2;
    QPushButton *pushButton3_3;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(787, 635);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton1_1 = new QPushButton(centralwidget);
        pushButton1_1->setObjectName(QString::fromUtf8("pushButton1_1"));
        pushButton1_1->setGeometry(QRect(0, 0, 267, 203));
        pushButton1_2 = new QPushButton(centralwidget);
        pushButton1_2->setObjectName(QString::fromUtf8("pushButton1_2"));
        pushButton1_2->setGeometry(QRect(260, 0, 267, 203));
        pushButton1_3 = new QPushButton(centralwidget);
        pushButton1_3->setObjectName(QString::fromUtf8("pushButton1_3"));
        pushButton1_3->setGeometry(QRect(520, 0, 267, 203));
        pushButton2_1 = new QPushButton(centralwidget);
        pushButton2_1->setObjectName(QString::fromUtf8("pushButton2_1"));
        pushButton2_1->setGeometry(QRect(0, 200, 261, 203));
        pushButton2_2 = new QPushButton(centralwidget);
        pushButton2_2->setObjectName(QString::fromUtf8("pushButton2_2"));
        pushButton2_2->setGeometry(QRect(260, 200, 267, 203));
        pushButton2_3 = new QPushButton(centralwidget);
        pushButton2_3->setObjectName(QString::fromUtf8("pushButton2_3"));
        pushButton2_3->setGeometry(QRect(520, 200, 267, 203));
        pushButton3_1 = new QPushButton(centralwidget);
        pushButton3_1->setObjectName(QString::fromUtf8("pushButton3_1"));
        pushButton3_1->setGeometry(QRect(0, 400, 261, 203));
        pushButton3_2 = new QPushButton(centralwidget);
        pushButton3_2->setObjectName(QString::fromUtf8("pushButton3_2"));
        pushButton3_2->setGeometry(QRect(260, 400, 267, 203));
        pushButton3_3 = new QPushButton(centralwidget);
        pushButton3_3->setObjectName(QString::fromUtf8("pushButton3_3"));
        pushButton3_3->setGeometry(QRect(520, 400, 267, 203));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 170, 791, 71));
        QFont font;
        font.setBold(false);
        line->setFont(font);
        line->setLineWidth(7);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 390, 791, 21));
        line_2->setLineWidth(7);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(250, 0, 20, 601));
        line_3->setLineWidth(7);
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(510, 0, 20, 591));
        line_4->setLineWidth(7);
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 787, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton1_1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton1_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton1_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton2_1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton2_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton2_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton3_1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton3_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton3_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
