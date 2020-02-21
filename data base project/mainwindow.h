#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include "student_page.h"
#include "admin_page.h"
#include "instructor_page.h"
#include <QMessageBox>
#include <mysql.h>
#include <QtSql>
#include "check.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_radioButton_clicked(bool checked);

    void on_pushButton_3_clicked();

    void on_student_button_clicked();

    void on_instructor_button_clicked();

    void on_sign_button_clicked();

    void on_idprint_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QPixmap pic_student;
    QPixmap pic_instructor;
    QPixmap pic_admin;
    QPixmap background;
   // QPixmap background2;
    student_page student_open;
    admin admin_open;
    instructor_page instructor_open;
    sql db;
    QSqlQuery *q;
    check a;
};
#endif // MAINWINDOW_H
