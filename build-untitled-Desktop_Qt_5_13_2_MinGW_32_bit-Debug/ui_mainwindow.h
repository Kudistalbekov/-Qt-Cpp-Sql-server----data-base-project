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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *adminpic;
    QLabel *instructorpic;
    QLabel *studentpic;
    QGroupBox *groupBox;
    QPushButton *sign_button;
    QRadioButton *radioButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *ID;
    QLineEdit *idprint;
    QHBoxLayout *horizontalLayout_2;
    QLabel *password;
    QLineEdit *passwordprint;
    QLabel *id_check;
    QPushButton *instructor_button;
    QPushButton *student_button;
    QPushButton *pushButton_3;
    QLabel *background__of__all;
    QLabel *label;
    QLabel *text_instructor;
    QLabel *text_student;
    QLabel *text_admin;
    QLabel *background_of_all2;
    QLabel *back1;
    QLabel *back2;
    QLabel *back3;
    QLabel *back_all;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(683, 573);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        adminpic = new QLabel(centralwidget);
        adminpic->setObjectName(QString::fromUtf8("adminpic"));
        adminpic->setGeometry(QRect(240, 50, 101, 101));
        adminpic->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"height: 25px;\n"
"  width: 25px;\n"
"  border-radius: 50%;\n"
"  display: inline-block;"));
        instructorpic = new QLabel(centralwidget);
        instructorpic->setObjectName(QString::fromUtf8("instructorpic"));
        instructorpic->setGeometry(QRect(100, 110, 101, 101));
        instructorpic->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"height: 25px;\n"
"  width: 25px;\n"
"  border-radius: 50%;\n"
"  display: inline-block;"));
        studentpic = new QLabel(centralwidget);
        studentpic->setObjectName(QString::fromUtf8("studentpic"));
        studentpic->setGeometry(QRect(380, 110, 101, 101));
        studentpic->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"height: 30px;\n"
"  width: 30px;\n"
"  border-radius: 50%;\n"
"  display: inline-block;"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(100, 250, 381, 201));
        groupBox->setStyleSheet(QString::fromUtf8("color:black;\n"
""));
        sign_button = new QPushButton(groupBox);
        sign_button->setObjectName(QString::fromUtf8("sign_button"));
        sign_button->setGeometry(QRect(30, 150, 311, 41));
        sign_button->setStyleSheet(QString::fromUtf8(""));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(300, 100, 51, 21));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 261, 102));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ID = new QLabel(layoutWidget);
        ID->setObjectName(QString::fromUtf8("ID"));

        horizontalLayout->addWidget(ID);

        idprint = new QLineEdit(layoutWidget);
        idprint->setObjectName(QString::fromUtf8("idprint"));
        idprint->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  box-sizing: border-box;\n"
"  border: 2px solid #ccc;\n"
"  border-radius: 1px;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
"  padding: 10px 15px 10px 35px;"));

        horizontalLayout->addWidget(idprint);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        password = new QLabel(layoutWidget);
        password->setObjectName(QString::fromUtf8("password"));

        horizontalLayout_2->addWidget(password);

        passwordprint = new QLineEdit(layoutWidget);
        passwordprint->setObjectName(QString::fromUtf8("passwordprint"));
        passwordprint->setStyleSheet(QString::fromUtf8("width: 50%;\n"
"  box-sizing: border-box;\n"
"  border: 2px solid #ccc;\n"
"  border-radius: 1px;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
"  padding: 10px 15px 10px 35px;\n"
"color:black;"));

        horizontalLayout_2->addWidget(passwordprint);


        verticalLayout->addLayout(horizontalLayout_2);

        id_check = new QLabel(groupBox);
        id_check->setObjectName(QString::fromUtf8("id_check"));
        id_check->setGeometry(QRect(100, 10, 281, 16));
        instructor_button = new QPushButton(centralwidget);
        instructor_button->setObjectName(QString::fromUtf8("instructor_button"));
        instructor_button->setGeometry(QRect(110, 90, 121, 101));
        instructor_button->setStyleSheet(QString::fromUtf8("\n"
"  border: none;\n"
"  color: red;"));
        student_button = new QPushButton(centralwidget);
        student_button->setObjectName(QString::fromUtf8("student_button"));
        student_button->setGeometry(QRect(390, 100, 111, 101));
        student_button->setStyleSheet(QString::fromUtf8("\n"
"  border: none;\n"
"  color: red;"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 40, 111, 91));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"  border: none;\n"
"  color: red;"));
        background__of__all = new QLabel(centralwidget);
        background__of__all->setObjectName(QString::fromUtf8("background__of__all"));
        background__of__all->setGeometry(QRect(100, 90, 381, 91));
        background__of__all->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"height: 20px;\n"
"  width: 20px;\n"
"  border-radius:40%;\n"
"  display: inline-block;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 190, 91, 31));
        label->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 11pt \"MS Shell Dlg 2\";\n"
"font-weight:bold;"));
        text_instructor = new QLabel(centralwidget);
        text_instructor->setObjectName(QString::fromUtf8("text_instructor"));
        text_instructor->setGeometry(QRect(120, 220, 91, 19));
        text_student = new QLabel(centralwidget);
        text_student->setObjectName(QString::fromUtf8("text_student"));
        text_student->setGeometry(QRect(410, 220, 71, 21));
        text_student->setStyleSheet(QString::fromUtf8(""));
        text_admin = new QLabel(centralwidget);
        text_admin->setObjectName(QString::fromUtf8("text_admin"));
        text_admin->setGeometry(QRect(270, 160, 91, 21));
        background_of_all2 = new QLabel(centralwidget);
        background_of_all2->setObjectName(QString::fromUtf8("background_of_all2"));
        background_of_all2->setGeometry(QRect(100, 180, 381, 291));
        background_of_all2->setStyleSheet(QString::fromUtf8("background-color: white;;"));
        back1 = new QLabel(centralwidget);
        back1->setObjectName(QString::fromUtf8("back1"));
        back1->setGeometry(QRect(90, 100, 121, 121));
        back1->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"height: 35px;\n"
"  width: 35px;\n"
"  border-radius: 60%;\n"
"  display: inline-block;"));
        back2 = new QLabel(centralwidget);
        back2->setObjectName(QString::fromUtf8("back2"));
        back2->setGeometry(QRect(230, 40, 121, 121));
        back2->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"height: 35px;\n"
"  width: 35px;\n"
"  border-radius: 60%;\n"
"  display: inline-block;"));
        back3 = new QLabel(centralwidget);
        back3->setObjectName(QString::fromUtf8("back3"));
        back3->setGeometry(QRect(370, 100, 121, 121));
        back3->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"height: 35px;\n"
"  width: 35px;\n"
"  border-radius: 60%;\n"
"  display: inline-block;"));
        back_all = new QLabel(centralwidget);
        back_all->setObjectName(QString::fromUtf8("back_all"));
        back_all->setGeometry(QRect(6, 2, 651, 511));
        back_all->setStyleSheet(QString::fromUtf8("background-color:white;"));
        MainWindow->setCentralWidget(centralwidget);
        back_all->raise();
        background_of_all2->raise();
        background__of__all->raise();
        back3->raise();
        back2->raise();
        back1->raise();
        adminpic->raise();
        studentpic->raise();
        groupBox->raise();
        instructorpic->raise();
        instructor_button->raise();
        student_button->raise();
        pushButton_3->raise();
        label->raise();
        text_instructor->raise();
        text_student->raise();
        text_admin->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 683, 21));
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
        adminpic->setText(QCoreApplication::translate("MainWindow", "admin", nullptr));
        instructorpic->setText(QCoreApplication::translate("MainWindow", "instructor", nullptr));
        studentpic->setText(QCoreApplication::translate("MainWindow", "student", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "SIGN IN", nullptr));
        sign_button->setText(QCoreApplication::translate("MainWindow", "Sign", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "show", nullptr));
        ID->setText(QCoreApplication::translate("MainWindow", " ID              ", nullptr));
        idprint->setText(QString());
        password->setText(QCoreApplication::translate("MainWindow", "PASSWORD", nullptr));
        passwordprint->setText(QString());
        id_check->setText(QString());
        instructor_button->setText(QString());
        student_button->setText(QString());
        pushButton_3->setText(QString());
        background__of__all->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "SIGN IN AS", nullptr));
        text_instructor->setText(QString());
        text_student->setText(QString());
        text_admin->setText(QString());
        background_of_all2->setText(QString());
        back1->setText(QString());
        back2->setText(QString());
        back3->setText(QString());
        back_all->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
