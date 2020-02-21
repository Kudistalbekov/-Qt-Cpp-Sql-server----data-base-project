#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QSql>
#include <mysql.h>
#include <QMessageBox>
#include <QSql>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDebug>
#include <QPixmap>
#include "check.h"

namespace Ui {
class admin;
}

class admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_new_course_clicked();

    void on_new_student_clicked();

    void on_pushButton_clicked();

    void hide_tabs(int);

    void on_new_teacher_clicked();

    void on_teaching_clicked();

    void on_advisor_clicked();

    void on_course_add_clicked();

    void on_i_add_clicked();

    void on_s_add_clicked();

    void on_t_add_clicked();

    void on_assign_clicked();

    void on_pushButton_2_clicked();
    void on_s_id_textChanged(const QString &arg1);
    
    void on_teaches_id_textChanged(const QString &arg1);
    
    void on_i_id_textChanged(const QString &arg1);

    void on_advisor_id_textChanged(const QString &arg1);

    void on_student_id_2_textChanged(const QString &arg1);

private:
    Ui::admin *ui;
    QPixmap pic_admin;
    QSqlQuery *table;
    sql db;
    QPixmap inst,st;
    check a;
};

#endif // ADMIN_H
