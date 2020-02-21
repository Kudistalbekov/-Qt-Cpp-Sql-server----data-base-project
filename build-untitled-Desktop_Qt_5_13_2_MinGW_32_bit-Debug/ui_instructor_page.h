/********************************************************************************
** Form generated from reading UI file 'instructor_page.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTOR_PAGE_H
#define UI_INSTRUCTOR_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_instructor_page
{
public:
    QWidget *centralwidget;
    QLabel *instructorpic;
    QListWidget *db_list;
    QPushButton *pushButton;
    QLabel *id_instr;
    QPushButton *register_student;
    QFrame *widget_db_2;
    QListWidget *db_list_2;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *add;
    QLabel *label_7;
    QLineEdit *s_semester;
    QLineEdit *s_section;
    QLineEdit *s_id;
    QLineEdit *s_course_id;
    QLineEdit *s_year;
    QLabel *student_pic;
    QLabel *check_str;
    QWidget *tab_2;
    QLineEdit *new_password;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_8;
    QRadioButton *radioButton;
    QLabel *password_pic;
    QPushButton *clear;
    QPushButton *pushButton_3;
    QPushButton *details;
    QPushButton *section;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *instructor_page)
    {
        if (instructor_page->objectName().isEmpty())
            instructor_page->setObjectName(QString::fromUtf8("instructor_page"));
        instructor_page->resize(1361, 749);
        centralwidget = new QWidget(instructor_page);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        instructorpic = new QLabel(centralwidget);
        instructorpic->setObjectName(QString::fromUtf8("instructorpic"));
        instructorpic->setGeometry(QRect(40, 10, 121, 111));
        instructorpic->setStyleSheet(QString::fromUtf8(""));
        db_list = new QListWidget(centralwidget);
        db_list->setObjectName(QString::fromUtf8("db_list"));
        db_list->setGeometry(QRect(200, 320, 611, 271));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 220, 171, 51));
        id_instr = new QLabel(centralwidget);
        id_instr->setObjectName(QString::fromUtf8("id_instr"));
        id_instr->setGeometry(QRect(70, 130, 61, 31));
        id_instr->setStyleSheet(QString::fromUtf8("background:black;"));
        register_student = new QPushButton(centralwidget);
        register_student->setObjectName(QString::fromUtf8("register_student"));
        register_student->setGeometry(QRect(10, 380, 171, 51));
        widget_db_2 = new QFrame(centralwidget);
        widget_db_2->setObjectName(QString::fromUtf8("widget_db_2"));
        widget_db_2->setGeometry(QRect(200, 80, 611, 231));
        widget_db_2->setFrameShape(QFrame::StyledPanel);
        widget_db_2->setFrameShadow(QFrame::Raised);
        db_list_2 = new QListWidget(widget_db_2);
        db_list_2->setObjectName(QString::fromUtf8("db_list_2"));
        db_list_2->setGeometry(QRect(0, 0, 611, 231));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 300, 171, 51));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(830, 50, 521, 641));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(96, 200, 81, 31));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(96, 260, 81, 31));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(96, 320, 81, 31));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(96, 380, 81, 31));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(96, 440, 81, 31));
        add = new QPushButton(tab);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(100, 500, 91, 31));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(230, 40, 111, 81));
        s_semester = new QLineEdit(tab);
        s_semester->setObjectName(QString::fromUtf8("s_semester"));
        s_semester->setGeometry(QRect(190, 380, 211, 31));
        s_semester->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        s_section = new QLineEdit(tab);
        s_section->setObjectName(QString::fromUtf8("s_section"));
        s_section->setGeometry(QRect(190, 320, 211, 31));
        s_section->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        s_id = new QLineEdit(tab);
        s_id->setObjectName(QString::fromUtf8("s_id"));
        s_id->setGeometry(QRect(190, 200, 211, 31));
        s_id->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        s_course_id = new QLineEdit(tab);
        s_course_id->setObjectName(QString::fromUtf8("s_course_id"));
        s_course_id->setGeometry(QRect(190, 260, 211, 31));
        s_course_id->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        s_year = new QLineEdit(tab);
        s_year->setObjectName(QString::fromUtf8("s_year"));
        s_year->setGeometry(QRect(190, 440, 211, 31));
        s_year->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        student_pic = new QLabel(tab);
        student_pic->setObjectName(QString::fromUtf8("student_pic"));
        student_pic->setGeometry(QRect(10, 10, 141, 141));
        check_str = new QLabel(tab);
        check_str->setObjectName(QString::fromUtf8("check_str"));
        check_str->setGeometry(QRect(190, 170, 291, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        new_password = new QLineEdit(tab_2);
        new_password->setObjectName(QString::fromUtf8("new_password"));
        new_password->setGeometry(QRect(190, 270, 161, 31));
        new_password->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(190, 310, 161, 31));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 270, 91, 31));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(230, 190, 51, 71));
        radioButton = new QRadioButton(tab_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(360, 280, 82, 17));
        password_pic = new QLabel(tab_2);
        password_pic->setObjectName(QString::fromUtf8("password_pic"));
        password_pic->setGeometry(QRect(180, 70, 141, 131));
        tabWidget->addTab(tab_2, QString());
        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(720, 600, 91, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1234, 10, 111, 31));
        details = new QPushButton(centralwidget);
        details->setObjectName(QString::fromUtf8("details"));
        details->setGeometry(QRect(200, 600, 101, 31));
        section = new QPushButton(centralwidget);
        section->setObjectName(QString::fromUtf8("section"));
        section->setGeometry(QRect(10, 460, 171, 51));
        instructor_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(instructor_page);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1361, 21));
        instructor_page->setMenuBar(menubar);
        statusbar = new QStatusBar(instructor_page);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        instructor_page->setStatusBar(statusbar);

        retranslateUi(instructor_page);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(instructor_page);
    } // setupUi

    void retranslateUi(QMainWindow *instructor_page)
    {
        instructor_page->setWindowTitle(QCoreApplication::translate("instructor_page", "MainWindow", nullptr));
        instructorpic->setText(QString());
        pushButton->setText(QCoreApplication::translate("instructor_page", "MY COURSE", nullptr));
        id_instr->setText(QString());
        register_student->setText(QCoreApplication::translate("instructor_page", "REGISTER STUDENT", nullptr));
        pushButton_2->setText(QCoreApplication::translate("instructor_page", "MY STUDENTS", nullptr));
        label->setText(QCoreApplication::translate("instructor_page", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("instructor_page", "COURSE_ID", nullptr));
        label_4->setText(QCoreApplication::translate("instructor_page", "SECTION", nullptr));
        label_5->setText(QCoreApplication::translate("instructor_page", "SEMESTER", nullptr));
        label_6->setText(QCoreApplication::translate("instructor_page", "YEAR", nullptr));
        add->setText(QCoreApplication::translate("instructor_page", "ADD", nullptr));
        label_7->setText(QCoreApplication::translate("instructor_page", " REGISTER STUDENT", nullptr));
        student_pic->setText(QCoreApplication::translate("instructor_page", "TextLabel", nullptr));
        check_str->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("instructor_page", "Tab 1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("instructor_page", "MODIFY", nullptr));
        label_2->setText(QCoreApplication::translate("instructor_page", "NEW_PASSWORD", nullptr));
        label_8->setText(QCoreApplication::translate("instructor_page", " MODIFY", nullptr));
        radioButton->setText(QCoreApplication::translate("instructor_page", "show", nullptr));
        password_pic->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("instructor_page", "Tab 2", nullptr));
        clear->setText(QCoreApplication::translate("instructor_page", "CLEAR", nullptr));
        pushButton_3->setText(QCoreApplication::translate("instructor_page", "MODIFY ACCOUNT", nullptr));
        details->setText(QCoreApplication::translate("instructor_page", "DETAILS", nullptr));
        section->setText(QCoreApplication::translate("instructor_page", "SECTION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class instructor_page: public Ui_instructor_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTOR_PAGE_H
