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
    QPushButton *Case_1_1;
    QPushButton *Case_1_2;
    QPushButton *Case_1_3;
    QPushButton *Case_2_1;
    QPushButton *Case_2_2;
    QPushButton *Case_2_3;
    QPushButton *Case_3_1;
    QPushButton *Case_3_2;
    QPushButton *Case_3_3;
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
        MainWindow->resize(787, 647);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Case_1_1 = new QPushButton(centralwidget);
        Case_1_1->setObjectName(QString::fromUtf8("Case_1_1"));
        Case_1_1->setGeometry(QRect(0, 0, 267, 203));
        QFont font;
        font.setPointSize(100);
        font.setBold(true);
        Case_1_1->setFont(font);
        Case_1_2 = new QPushButton(centralwidget);
        Case_1_2->setObjectName(QString::fromUtf8("Case_1_2"));
        Case_1_2->setGeometry(QRect(260, 0, 267, 203));
        Case_1_2->setFont(font);
        Case_1_3 = new QPushButton(centralwidget);
        Case_1_3->setObjectName(QString::fromUtf8("Case_1_3"));
        Case_1_3->setGeometry(QRect(520, 0, 267, 203));
        Case_1_3->setFont(font);
        Case_2_1 = new QPushButton(centralwidget);
        Case_2_1->setObjectName(QString::fromUtf8("Case_2_1"));
        Case_2_1->setGeometry(QRect(0, 200, 261, 203));
        Case_2_1->setFont(font);
        Case_2_2 = new QPushButton(centralwidget);
        Case_2_2->setObjectName(QString::fromUtf8("Case_2_2"));
        Case_2_2->setGeometry(QRect(260, 200, 267, 203));
        Case_2_2->setFont(font);
        Case_2_3 = new QPushButton(centralwidget);
        Case_2_3->setObjectName(QString::fromUtf8("Case_2_3"));
        Case_2_3->setGeometry(QRect(510, 210, 267, 203));
        Case_2_3->setFont(font);
        Case_3_1 = new QPushButton(centralwidget);
        Case_3_1->setObjectName(QString::fromUtf8("Case_3_1"));
        Case_3_1->setGeometry(QRect(0, 400, 261, 203));
        Case_3_1->setFont(font);
        Case_3_2 = new QPushButton(centralwidget);
        Case_3_2->setObjectName(QString::fromUtf8("Case_3_2"));
        Case_3_2->setGeometry(QRect(250, 400, 267, 203));
        Case_3_2->setFont(font);
        Case_3_3 = new QPushButton(centralwidget);
        Case_3_3->setObjectName(QString::fromUtf8("Case_3_3"));
        Case_3_3->setGeometry(QRect(520, 400, 267, 203));
        Case_3_3->setFont(font);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 170, 791, 71));
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
        Case_1_1->setText(QString());
        Case_1_2->setText(QString());
        Case_1_3->setText(QString());
        Case_2_1->setText(QString());
        Case_2_2->setText(QString());
        Case_2_3->setText(QString());
        Case_3_1->setText(QString());
        Case_3_2->setText(QString());
        Case_3_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
