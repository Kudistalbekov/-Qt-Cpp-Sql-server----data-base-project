#ifndef SQL_H
#define SQL_H
#include <QDebug>
#include <QSqlError>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QString>
class sql
{
public:
    sql();//constructor
    void connect_to_db(QString);
    int open();
    void close();
    QString get_last_error();
    QSqlDatabase db;
};

#endif // SQL_H
