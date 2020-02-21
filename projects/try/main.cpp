#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QString>
#include <QSqlDriver>
#include <QSqlError>
#include <QMessageBox>
//#include "sql.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    /*QString servername="LOCALHOST\\SQLEXPRESS";
    QString dbname="try";
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC3");
    db.setConnectOptions();
    QString dsn=QString("DRIVER={SQL SERVER};SERVER=%1;DATABASE=%2;Trusted_c  onnection=yes;").arg(servername).arg(dbname);
    db.setDatabaseName(dsn);
    if(db.open()){
        qDebug()<<"OPEN";
        db.close();
    }
    else{
        qDebug()<<"Error!! "<<db.lastError().text();
    qDebug()<<"Avalable drivers="<<db.drivers();
    }*/
    return a.exec();
}
