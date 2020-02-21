#include "mysql.h"
sql::sql()
{
}
void sql::connect_to_db(QString dbname){
    QString servername="LOCALHOST\\SQLEXPRESS";
    db=QSqlDatabase::addDatabase("QODBC3");
    db.setConnectOptions();
    QString dsn=QString("DRIVER={SQL SERVER};SERVER=%1;DATABASE=%2;Trusted_c  onnection=yes;").arg(servername).arg(dbname);
    db.setDatabaseName(dsn);
}
int sql::open(){
    if(db.open()){//if data base open returns 1 else 0
        return 1;
    }
    else{
        return 0;
    }
}
void sql::close(){
    db.close();
}
QString sql::get_last_error(){//returns the last error for this data_base
    return db.lastError().text();
}
