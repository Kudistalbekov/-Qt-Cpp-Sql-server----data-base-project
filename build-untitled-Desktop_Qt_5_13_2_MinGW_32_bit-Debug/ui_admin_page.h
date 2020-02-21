/********************************************************************************
** Form generated from reading UI file 'admin_page.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_PAGE_H
#define UI_ADMIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QWidget *centralwidget;
    QPushButton *new_course;
    QPushButton *new_teacher;
    QPushButton *new_student;
    QPushButton *teaching;
    QPushButton *advisor;
    QLabel *photo;
    QListWidget *db_list;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *course;
    QLabel *course_course_id;
    QLabel *course_title;
    QLabel *course_dept_name;
    QLabel *course_credit;
    QLineEdit *c_course;
    QLineEdit *c_title;
    QLineEdit *c_dept_name;
    QLineEdit *c_credit;
    QPushButton *course_add;
    QLabel *l;
    QWidget *teacher;
    QLabel *label_2;
    QLineEdit *i_id;
    QLineEdit *i_name;
    QLabel *instructor_id;
    QLineEdit *i_dept_name;
    QLineEdit *i_salary;
    QLabel *instructor_name;
    QPushButton *i_add;
    QLabel *instructor_salary;
    QLabel *instructor_dept_name;
    QLabel *inst_pic;
    QWidget *student;
    QLabel *label_3;
    QLineEdit *s_dept_name;
    QLabel *student_id;
    QLineEdit *s_tot_cred;
    QLineEdit *s_name;
    QLineEdit *s_id;
    QLabel *student_name;
    QLabel *student_dept_name;
    QLabel *student_salary;
    QPushButton *s_add;
    QLabel *student_pic;
    QWidget *inst_course;
    QLabel *label_4;
    QLineEdit *teaches_semester;
    QLineEdit *teahes_year;
    QPushButton *t_add;
    QLabel *label2;
    QLineEdit *teaches_course;
    QLineEdit *teaches_id;
    QLabel *instructor_dept_name_3;
    QLabel *label1;
    QLabel *advisor_year;
    QLineEdit *teaches_sec_id;
    QLabel *advisor_course_2;
    QWidget *instr_student;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_10;
    QLineEdit *advisor_id;
    QLineEdit *student_id_2;
    QPushButton *assign;
    QLabel *advisor_pic;
    QLabel *student_pic2;
    QPushButton *pushButton_2;
    QWidget *widget_db_2;
    QListWidget *db_list_2;
    QLabel *check_str;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(1393, 730);
        centralwidget = new QWidget(admin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        new_course = new QPushButton(centralwidget);
        new_course->setObjectName(QString::fromUtf8("new_course"));
        new_course->setGeometry(QRect(30, 150, 171, 71));
        new_teacher = new QPushButton(centralwidget);
        new_teacher->setObjectName(QString::fromUtf8("new_teacher"));
        new_teacher->setGeometry(QRect(30, 230, 171, 71));
        new_student = new QPushButton(centralwidget);
        new_student->setObjectName(QString::fromUtf8("new_student"));
        new_student->setGeometry(QRect(30, 310, 171, 71));
        teaching = new QPushButton(centralwidget);
        teaching->setObjectName(QString::fromUtf8("teaching"));
        teaching->setGeometry(QRect(30, 390, 171, 71));
        advisor = new QPushButton(centralwidget);
        advisor->setObjectName(QString::fromUtf8("advisor"));
        advisor->setGeometry(QRect(30, 510, 171, 71));
        photo = new QLabel(centralwidget);
        photo->setObjectName(QString::fromUtf8("photo"));
        photo->setGeometry(QRect(40, 20, 141, 111));
        photo->setStyleSheet(QString::fromUtf8(""));
        db_list = new QListWidget(centralwidget);
        db_list->setObjectName(QString::fromUtf8("db_list"));
        db_list->setGeometry(QRect(210, 210, 571, 411));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(630, 630, 141, 31));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(790, 40, 531, 561));
        course = new QWidget();
        course->setObjectName(QString::fromUtf8("course"));
        course_course_id = new QLabel(course);
        course_course_id->setObjectName(QString::fromUtf8("course_course_id"));
        course_course_id->setGeometry(QRect(10, 130, 81, 41));
        course_title = new QLabel(course);
        course_title->setObjectName(QString::fromUtf8("course_title"));
        course_title->setGeometry(QRect(10, 190, 81, 41));
        course_dept_name = new QLabel(course);
        course_dept_name->setObjectName(QString::fromUtf8("course_dept_name"));
        course_dept_name->setGeometry(QRect(10, 250, 81, 41));
        course_credit = new QLabel(course);
        course_credit->setObjectName(QString::fromUtf8("course_credit"));
        course_credit->setGeometry(QRect(10, 310, 81, 41));
        c_course = new QLineEdit(course);
        c_course->setObjectName(QString::fromUtf8("c_course"));
        c_course->setGeometry(QRect(120, 140, 391, 31));
        c_course->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        c_title = new QLineEdit(course);
        c_title->setObjectName(QString::fromUtf8("c_title"));
        c_title->setGeometry(QRect(120, 200, 391, 31));
        c_title->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        c_dept_name = new QLineEdit(course);
        c_dept_name->setObjectName(QString::fromUtf8("c_dept_name"));
        c_dept_name->setGeometry(QRect(120, 260, 391, 31));
        c_dept_name->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        c_credit = new QLineEdit(course);
        c_credit->setObjectName(QString::fromUtf8("c_credit"));
        c_credit->setGeometry(QRect(120, 320, 391, 31));
        c_credit->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        course_add = new QPushButton(course);
        course_add->setObjectName(QString::fromUtf8("course_add"));
        course_add->setGeometry(QRect(290, 380, 221, 41));
        l = new QLabel(course);
        l->setObjectName(QString::fromUtf8("l"));
        l->setGeometry(QRect(180, 30, 481, 51));
        tabWidget->addTab(course, QString());
        teacher = new QWidget();
        teacher->setObjectName(QString::fromUtf8("teacher"));
        label_2 = new QLabel(teacher);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 90, 161, 61));
        i_id = new QLineEdit(teacher);
        i_id->setObjectName(QString::fromUtf8("i_id"));
        i_id->setGeometry(QRect(120, 180, 391, 31));
        i_id->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        i_name = new QLineEdit(teacher);
        i_name->setObjectName(QString::fromUtf8("i_name"));
        i_name->setGeometry(QRect(120, 240, 391, 31));
        i_name->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        instructor_id = new QLabel(teacher);
        instructor_id->setObjectName(QString::fromUtf8("instructor_id"));
        instructor_id->setGeometry(QRect(10, 170, 81, 41));
        i_dept_name = new QLineEdit(teacher);
        i_dept_name->setObjectName(QString::fromUtf8("i_dept_name"));
        i_dept_name->setGeometry(QRect(120, 300, 391, 31));
        i_dept_name->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        i_salary = new QLineEdit(teacher);
        i_salary->setObjectName(QString::fromUtf8("i_salary"));
        i_salary->setGeometry(QRect(120, 360, 391, 31));
        i_salary->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        instructor_name = new QLabel(teacher);
        instructor_name->setObjectName(QString::fromUtf8("instructor_name"));
        instructor_name->setGeometry(QRect(10, 230, 81, 41));
        i_add = new QPushButton(teacher);
        i_add->setObjectName(QString::fromUtf8("i_add"));
        i_add->setGeometry(QRect(290, 420, 221, 41));
        instructor_salary = new QLabel(teacher);
        instructor_salary->setObjectName(QString::fromUtf8("instructor_salary"));
        instructor_salary->setGeometry(QRect(10, 350, 81, 41));
        instructor_dept_name = new QLabel(teacher);
        instructor_dept_name->setObjectName(QString::fromUtf8("instructor_dept_name"));
        instructor_dept_name->setGeometry(QRect(10, 290, 81, 41));
        inst_pic = new QLabel(teacher);
        inst_pic->setObjectName(QString::fromUtf8("inst_pic"));
        inst_pic->setGeometry(QRect(10, 10, 121, 121));
        tabWidget->addTab(teacher, QString());
        student = new QWidget();
        student->setObjectName(QString::fromUtf8("student"));
        label_3 = new QLabel(student);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 90, 171, 61));
        s_dept_name = new QLineEdit(student);
        s_dept_name->setObjectName(QString::fromUtf8("s_dept_name"));
        s_dept_name->setGeometry(QRect(120, 300, 391, 31));
        s_dept_name->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        student_id = new QLabel(student);
        student_id->setObjectName(QString::fromUtf8("student_id"));
        student_id->setGeometry(QRect(10, 170, 81, 41));
        s_tot_cred = new QLineEdit(student);
        s_tot_cred->setObjectName(QString::fromUtf8("s_tot_cred"));
        s_tot_cred->setGeometry(QRect(120, 360, 391, 31));
        s_tot_cred->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        s_name = new QLineEdit(student);
        s_name->setObjectName(QString::fromUtf8("s_name"));
        s_name->setGeometry(QRect(120, 240, 391, 31));
        s_name->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        s_id = new QLineEdit(student);
        s_id->setObjectName(QString::fromUtf8("s_id"));
        s_id->setGeometry(QRect(120, 180, 391, 31));
        s_id->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        student_name = new QLabel(student);
        student_name->setObjectName(QString::fromUtf8("student_name"));
        student_name->setGeometry(QRect(10, 230, 81, 41));
        student_dept_name = new QLabel(student);
        student_dept_name->setObjectName(QString::fromUtf8("student_dept_name"));
        student_dept_name->setGeometry(QRect(10, 290, 81, 41));
        student_salary = new QLabel(student);
        student_salary->setObjectName(QString::fromUtf8("student_salary"));
        student_salary->setGeometry(QRect(10, 350, 81, 41));
        s_add = new QPushButton(student);
        s_add->setObjectName(QString::fromUtf8("s_add"));
        s_add->setGeometry(QRect(290, 420, 221, 41));
        student_pic = new QLabel(student);
        student_pic->setObjectName(QString::fromUtf8("student_pic"));
        student_pic->setGeometry(QRect(10, 10, 121, 121));
        tabWidget->addTab(student, QString());
        inst_course = new QWidget();
        inst_course->setObjectName(QString::fromUtf8("inst_course"));
        label_4 = new QLabel(inst_course);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 10, 201, 81));
        teaches_semester = new QLineEdit(inst_course);
        teaches_semester->setObjectName(QString::fromUtf8("teaches_semester"));
        teaches_semester->setGeometry(QRect(150, 300, 361, 31));
        teaches_semester->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        teahes_year = new QLineEdit(inst_course);
        teahes_year->setObjectName(QString::fromUtf8("teahes_year"));
        teahes_year->setGeometry(QRect(150, 360, 361, 31));
        teahes_year->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        t_add = new QPushButton(inst_course);
        t_add->setObjectName(QString::fromUtf8("t_add"));
        t_add->setGeometry(QRect(290, 420, 221, 41));
        label2 = new QLabel(inst_course);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(10, 160, 81, 41));
        teaches_course = new QLineEdit(inst_course);
        teaches_course->setObjectName(QString::fromUtf8("teaches_course"));
        teaches_course->setGeometry(QRect(150, 170, 361, 31));
        teaches_course->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        teaches_id = new QLineEdit(inst_course);
        teaches_id->setObjectName(QString::fromUtf8("teaches_id"));
        teaches_id->setGeometry(QRect(150, 110, 361, 31));
        teaches_id->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        instructor_dept_name_3 = new QLabel(inst_course);
        instructor_dept_name_3->setObjectName(QString::fromUtf8("instructor_dept_name_3"));
        instructor_dept_name_3->setGeometry(QRect(10, 290, 81, 41));
        label1 = new QLabel(inst_course);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(10, 100, 81, 41));
        advisor_year = new QLabel(inst_course);
        advisor_year->setObjectName(QString::fromUtf8("advisor_year"));
        advisor_year->setGeometry(QRect(10, 350, 81, 41));
        teaches_sec_id = new QLineEdit(inst_course);
        teaches_sec_id->setObjectName(QString::fromUtf8("teaches_sec_id"));
        teaches_sec_id->setGeometry(QRect(150, 240, 361, 31));
        teaches_sec_id->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        advisor_course_2 = new QLabel(inst_course);
        advisor_course_2->setObjectName(QString::fromUtf8("advisor_course_2"));
        advisor_course_2->setGeometry(QRect(10, 230, 111, 41));
        tabWidget->addTab(inst_course, QString());
        instr_student = new QWidget();
        instr_student->setObjectName(QString::fromUtf8("instr_student"));
        label_5 = new QLabel(instr_student);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(190, 180, 231, 81));
        label = new QLabel(instr_student);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 310, 101, 51));
        label_10 = new QLabel(instr_student);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(310, 310, 141, 51));
        advisor_id = new QLineEdit(instr_student);
        advisor_id->setObjectName(QString::fromUtf8("advisor_id"));
        advisor_id->setGeometry(QRect(30, 360, 191, 31));
        advisor_id->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        student_id_2 = new QLineEdit(instr_student);
        student_id_2->setObjectName(QString::fromUtf8("student_id_2"));
        student_id_2->setGeometry(QRect(270, 360, 191, 31));
        student_id_2->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"  border: 2px solid #ccc;\n"
"  color:black;\n"
"  font-size: 16px;\n"
"  background-color: white;\n"
"  background-position: 10px 10px; \n"
"  background-repeat: no-repeat;\n"
""));
        assign = new QPushButton(instr_student);
        assign->setObjectName(QString::fromUtf8("assign"));
        assign->setGeometry(QRect(334, 420, 151, 41));
        advisor_pic = new QLabel(instr_student);
        advisor_pic->setObjectName(QString::fromUtf8("advisor_pic"));
        advisor_pic->setGeometry(QRect(120, 40, 121, 121));
        student_pic2 = new QLabel(instr_student);
        student_pic2->setObjectName(QString::fromUtf8("student_pic2"));
        student_pic2->setGeometry(QRect(280, 40, 121, 121));
        tabWidget->addTab(instr_student, QString());
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 470, 171, 31));
        widget_db_2 = new QWidget(centralwidget);
        widget_db_2->setObjectName(QString::fromUtf8("widget_db_2"));
        widget_db_2->setGeometry(QRect(210, 10, 571, 181));
        db_list_2 = new QListWidget(widget_db_2);
        db_list_2->setObjectName(QString::fromUtf8("db_list_2"));
        db_list_2->setGeometry(QRect(0, 0, 571, 181));
        check_str = new QLabel(centralwidget);
        check_str->setObjectName(QString::fromUtf8("check_str"));
        check_str->setGeometry(QRect(800, 610, 451, 21));
        admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1393, 21));
        admin->setMenuBar(menubar);
        statusbar = new QStatusBar(admin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        admin->setStatusBar(statusbar);

        retranslateUi(admin);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QMainWindow *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "MainWindow", nullptr));
        new_course->setText(QCoreApplication::translate("admin", "ADD NEW COURSE", nullptr));
        new_teacher->setText(QCoreApplication::translate("admin", "ADD NEW TEACHER", nullptr));
        new_student->setText(QCoreApplication::translate("admin", "ADD NEW STUDENT", nullptr));
        teaching->setText(QCoreApplication::translate("admin", " Assign courses to instructors ", nullptr));
        advisor->setText(QCoreApplication::translate("admin", "Assign instructors to students ", nullptr));
        photo->setText(QString());
        pushButton->setText(QCoreApplication::translate("admin", "CLEAR", nullptr));
        course_course_id->setText(QCoreApplication::translate("admin", "COURSE_ID", nullptr));
        course_title->setText(QCoreApplication::translate("admin", "TITLE", nullptr));
        course_dept_name->setText(QCoreApplication::translate("admin", "DEP. NAME", nullptr));
        course_credit->setText(QCoreApplication::translate("admin", "CREDIT", nullptr));
        course_add->setText(QCoreApplication::translate("admin", "ADD", nullptr));
        l->setText(QCoreApplication::translate("admin", "NEW COURSE", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(course), QCoreApplication::translate("admin", "Tab 1", nullptr));
        label_2->setText(QCoreApplication::translate("admin", "NEW TEACHER", nullptr));
        instructor_id->setText(QCoreApplication::translate("admin", "ID", nullptr));
        instructor_name->setText(QCoreApplication::translate("admin", "NAME", nullptr));
        i_add->setText(QCoreApplication::translate("admin", "ADD", nullptr));
        instructor_salary->setText(QCoreApplication::translate("admin", "SALARY", nullptr));
        instructor_dept_name->setText(QCoreApplication::translate("admin", "DEP. NAME", nullptr));
        inst_pic->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(teacher), QCoreApplication::translate("admin", "Tab 2", nullptr));
        label_3->setText(QCoreApplication::translate("admin", "NEW STUDENT", nullptr));
        student_id->setText(QCoreApplication::translate("admin", "ID", nullptr));
        student_name->setText(QCoreApplication::translate("admin", "NAME", nullptr));
        student_dept_name->setText(QCoreApplication::translate("admin", "DEP. NAME", nullptr));
        student_salary->setText(QCoreApplication::translate("admin", "TOT_CRED", nullptr));
        s_add->setText(QCoreApplication::translate("admin", "ADD", nullptr));
        student_pic->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(student), QCoreApplication::translate("admin", "Page", nullptr));
        label_4->setText(QCoreApplication::translate("admin", " Assign courses to instructors ", nullptr));
        t_add->setText(QCoreApplication::translate("admin", "ADD", nullptr));
        label2->setText(QCoreApplication::translate("admin", "COURSE_ID", nullptr));
        instructor_dept_name_3->setText(QCoreApplication::translate("admin", "SEMESTER", nullptr));
        label1->setText(QCoreApplication::translate("admin", "ID", nullptr));
        advisor_year->setText(QCoreApplication::translate("admin", "year", nullptr));
        advisor_course_2->setText(QCoreApplication::translate("admin", "SECTION NUMBER", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(inst_course), QCoreApplication::translate("admin", "Page", nullptr));
        label_5->setText(QCoreApplication::translate("admin", "Assign instructors to students ", nullptr));
        label->setText(QCoreApplication::translate("admin", "INSTRUCTOR ID", nullptr));
        label_10->setText(QCoreApplication::translate("admin", "STUDENT ID", nullptr));
        assign->setText(QCoreApplication::translate("admin", "ASSIGN", nullptr));
        advisor_pic->setText(QString());
        student_pic2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(instr_student), QCoreApplication::translate("admin", "Page", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admin", "SECTION", nullptr));
        check_str->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PAGE_H
