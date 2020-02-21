/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *button;
    QLabel *back;
    QLabel *check;
    QPushButton *style_button;
    QLineEdit *lineEdit;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        button = new QPushButton(centralwidget);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(500, 60, 111, 111));
        button->setMouseTracking(false);
        button->setTabletTracking(false);
        button->setStyleSheet(QString::fromUtf8("border:none;"));
        back = new QLabel(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(500, 60, 111, 111));
        back->setStyleSheet(QString::fromUtf8(""));
        check = new QLabel(centralwidget);
        check->setObjectName(QString::fromUtf8("check"));
        check->setGeometry(QRect(40, 100, 101, 91));
        style_button = new QPushButton(centralwidget);
        style_button->setObjectName(QString::fromUtf8("style_button"));
        style_button->setGeometry(QRect(200, 200, 181, 61));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(390, 200, 181, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  box-sizing: border-box;\n"
"  border: 2px solid #ccc;\n"
"  border-radius: 1px;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
"  padding: 10px 15px 10px 35px;"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 200, 171, 41));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 320, 511, 221));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 10, 301, 131));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 250, 171, 51));
        MainWindow->setCentralWidget(centralwidget);
        back->raise();
        button->raise();
        check->raise();
        style_button->raise();
        lineEdit->raise();
        plainTextEdit->raise();
        widget->raise();
        label->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        button->setText(QString());
        back->setText(QCoreApplication::translate("MainWindow", "pic", nullptr));
        check->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        style_button->setText(QCoreApplication::translate("MainWindow", "connect", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
