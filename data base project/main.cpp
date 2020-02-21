#include "mainwindow.h"
#include <QApplication>
#include "instructor_page.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   MainWindow w;
    w.setFixedWidth(600);
    w.setFixedHeight(500);
    w.show();
    //instructor_page q;
    //q.show();
    return a.exec();
}
