/********************************************************************************
** Form generated from reading UI file 'student_page.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_PAGE_H
#define UI_STUDENT_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student_page
{
public:
    QPushButton *details;
    QPushButton *pushButton_3;
    QListWidget *db_list;
    QPushButton *pushButton;
    QLabel *id_student;
    QLabel *student_pic;
    QPushButton *clear;
    QWidget *password_w;
    QLabel *password_pic;
    QLabel *label_8;
    QLabel *label_2;
    QLineEdit *new_password;
    QRadioButton *radioButton;
    QPushButton *pushButton_4;

    void setupUi(QDialog *student_page)
    {
        if (student_page->objectName().isEmpty())
            student_page->setObjectName(QString::fromUtf8("student_page"));
        student_page->resize(1410, 734);
        details = new QPushButton(student_page);
        details->setObjectName(QString::fromUtf8("details"));
        details->setGeometry(QRect(10, 370, 171, 41));
        pushButton_3 = new QPushButton(student_page);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1234, 10, 111, 31));
        db_list = new QListWidget(student_page);
        db_list->setObjectName(QString::fromUtf8("db_list"));
        db_list->setGeometry(QRect(200, 110, 611, 481));
        pushButton = new QPushButton(student_page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 300, 171, 51));
        id_student = new QLabel(student_page);
        id_student->setObjectName(QString::fromUtf8("id_student"));
        id_student->setGeometry(QRect(60, 160, 61, 31));
        id_student->setStyleSheet(QString::fromUtf8("background:black;"));
        student_pic = new QLabel(student_page);
        student_pic->setObjectName(QString::fromUtf8("student_pic"));
        student_pic->setGeometry(QRect(30, 40, 121, 111));
        student_pic->setStyleSheet(QString::fromUtf8(""));
        clear = new QPushButton(student_page);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(720, 600, 91, 31));
        password_w = new QWidget(student_page);
        password_w->setObjectName(QString::fromUtf8("password_w"));
        password_w->setGeometry(QRect(870, 50, 501, 511));
        password_pic = new QLabel(password_w);
        password_pic->setObjectName(QString::fromUtf8("password_pic"));
        password_pic->setGeometry(QRect(180, 20, 141, 131));
        label_8 = new QLabel(password_w);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(220, 160, 51, 71));
        label_2 = new QLabel(password_w);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 230, 91, 31));
        new_password = new QLineEdit(password_w);
        new_password->setObjectName(QString::fromUtf8("new_password"));
        new_password->setGeometry(QRect(180, 230, 161, 31));
        new_password->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        radioButton = new QRadioButton(password_w);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(350, 240, 82, 17));
        pushButton_4 = new QPushButton(password_w);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(180, 270, 161, 31));
        password_w->raise();
        details->raise();
        pushButton_3->raise();
        db_list->raise();
        pushButton->raise();
        id_student->raise();
        student_pic->raise();
        clear->raise();

        retranslateUi(student_page);

        QMetaObject::connectSlotsByName(student_page);
    } // setupUi

    void retranslateUi(QDialog *student_page)
    {
        student_page->setWindowTitle(QCoreApplication::translate("student_page", "Dialog", nullptr));
        details->setText(QCoreApplication::translate("student_page", "CLASSMATES", nullptr));
        pushButton_3->setText(QCoreApplication::translate("student_page", "MODIFY ACCOUNT", nullptr));
        pushButton->setText(QCoreApplication::translate("student_page", "MY COURSE", nullptr));
        id_student->setText(QString());
        student_pic->setText(QString());
        clear->setText(QCoreApplication::translate("student_page", "CLEAR", nullptr));
        password_pic->setText(QString());
        label_8->setText(QCoreApplication::translate("student_page", " MODIFY", nullptr));
        label_2->setText(QCoreApplication::translate("student_page", "NEW_PASSWORD", nullptr));
        radioButton->setText(QCoreApplication::translate("student_page", "show", nullptr));
        pushButton_4->setText(QCoreApplication::translate("student_page", "MODIFY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student_page: public Ui_student_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_PAGE_H
