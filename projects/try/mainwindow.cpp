#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSqlError>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->back->setPixmap(pix->scaled(ui->back->width()-10,ui->back->height()-10,Qt::KeepAspectRatio));
ui->style_button->setStyleSheet("background-color:#4CAF50;border-radius:12px solid; border: 3px solid #555555;color: white;padding: 15px 32px; text-align: center;text-decoration: none;display: inline-block;font-size: 16px;");
ui->widget->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_clicked()
{
    static int i=1;
    if(i%2==0){
ui->check->setText("ula");
    ui->back->setPixmap(pix->scaled(ui->back->width(),ui->back->height(),Qt::KeepAspectRatio));
    }
    else{
     ui->back->setPixmap(pix->scaled(ui->back->width()-10,ui->back->height()-10,Qt::KeepAspectRatio));
ui->check->setText("kudi");
    }
i++;
}

void MainWindow::on_style_button_clicked()
{
    QString servername="LOCALHOST\\SQLEXPRESS";
    QString dbname="try";
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC3");
    db.setConnectOptions();
    QString dsn=QString("DRIVER={SQL SERVER};SERVER=%1;DATABASE=%2;Trusted_c  onnection=yes;").arg(servername).arg(dbname);
    db.setDatabaseName(dsn);
    if(db.open()){
        qDebug()<<"Success";
        db.close();
    }
    else
        qDebug()<<"Error"<<db.lastError().text();
    ui->widget->show();
}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
ui->label->setText(arg1);
}
