#ifndef STUDENT_PAGE_H
#define STUDENT_PAGE_H

#include <QDialog>
#include <QPixmap>
#include "mysql.h"
#include <QSqlQuery>
namespace Ui {
class student_page;
}

class student_page : public QDialog
{
    Q_OBJECT

public:
    explicit student_page(QWidget *parent = nullptr);
    ~student_page();
    void set_id(QString a);

private slots:
    void on_pushButton_clicked();

    void on_clear_clicked();

    void on_details_clicked();

    void on_db_list_currentRowChanged(int currentRow);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_radioButton_clicked(bool checked);

private:
    Ui::student_page *ui;
    QString id;
    QPixmap pic_student;
    int row;
    sql db;
    QSqlQuery *table;
    QString rowtext;
    QPixmap pic_pass;
};

#endif // STUDENT_PAGE_H
