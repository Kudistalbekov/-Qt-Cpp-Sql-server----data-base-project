#ifndef INSTRUCTOR_PAGE_H
#define INSTRUCTOR_PAGE_H

#include <QMainWindow>
#include "mysql.h"
#include <QSqlQuery>
#include <check.h>
namespace Ui {
class instructor_page;
}

class instructor_page : public QMainWindow
{
    Q_OBJECT

public:
    explicit instructor_page(QWidget *parent = nullptr);
    ~instructor_page();
    void set_id(QString);

private slots:
    void on_pushButton_clicked();

    void on_register_student_clicked();

    void on_pushButton_2_clicked();

    void on_clear_clicked();

    void on_pushButton_4_clicked();

    void on_details_clicked();

    void on_db_list_currentRowChanged(int currentRow);

    void on_add_clicked();

    void on_section_clicked();

    void on_pushButton_3_clicked();

    void on_radioButton_clicked(bool checked);

    void on_s_id_textChanged(const QString &arg1);

    void on_s_course_id_textChanged(const QString &arg1);


private:
    Ui::instructor_page *ui;
    QPixmap pic_instructor,pic_pass,pic_student;
    QString id;
    QPixmap pic;
    sql db;
    QSqlQuery *table;
    int row=0;
    QString rowtext;
    check a;
};

#endif // INSTRUCTOR_PAGE_H
