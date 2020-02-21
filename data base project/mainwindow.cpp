#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QGraphicsDropShadowEffect>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*////////////////////  shadow ///////////////////////////////////*/
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setBlurRadius(5);
    effect->setXOffset(5);
    effect->setYOffset(5);
    effect->setColor(Qt::blue);
    /*///////////////////// setting connection to database /////////////////////////////////*/
    db.connect_to_db("university");
    if(db.open()){
        qDebug()<<"Connected!";

    }
    else{
        QMessageBox::critical(this,"Error with database connection!!",db.get_last_error());
    }

    //dont show passwords while printing
    ui->passwordprint->setEchoMode(QLineEdit::Password);
    //declaring all pictures
    ui->back_all->setFixedWidth(600);
    ui->back_all->setFixedHeight(600);
    ui->background_of_all2->setFixedWidth(100);
    ui->background_of_all2->setFixedWidth(380);
    background=QPixmap(":/new/picture/picture/pngguru.com (1).png");
    //background2=QPixmap(":/new/picture/picture/100 Vicious Stance.png");
    //background2=QPixmap(":/new/picture/picture/pngguru.com (4).png");
    pic_admin=QPixmap(":/new/picture/picture/iconfinder_12_avatar_2754577.png");
    pic_instructor=QPixmap(":/new/picture/picture/iconfinder_7_avatar_2754582.png");
    pic_student=QPixmap(":/new/picture/picture/iconfinder_10_avatar_2754575.png");
    //setting pictures into label
    ui->adminpic->setPixmap(pic_admin.scaled( ui->adminpic->width(), ui->adminpic->height(),Qt::KeepAspectRatio));
    ui->instructorpic->setPixmap(pic_instructor.scaled( ui->instructorpic->width(), ui->instructorpic->height(),Qt::KeepAspectRatio));
    ui->studentpic->setPixmap(pic_student.scaled( ui->studentpic->width(), ui->studentpic->height(),Qt::KeepAspectRatio));
    ui->back_all->setPixmap(background.scaled(ui->back_all->width(),ui->back_all->height(),Qt::KeepAspectRatio));
    //ui->background_of_all2->setPixmap(background2.scaled(ui->background_of_all2->width(),ui->background_of_all2->height()+100,Qt::KeepAspectRatio));
    //ui->background_of_all2->setGraphicsEffect(effect);
    ui->sign_button->setStyleSheet("background-color:rgb(0, 85, 255);border-radius:12px;border-radius:9px solid; border: 2px solid #555555;color: white;padding: 10px 25px; text-align: center;display: inline-block;");
    ui->id_check->setStyleSheet("color:red;font: 9pt MS Shell Dlg 2;font-weight:bold;");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_radioButton_clicked(bool checked)//show and hide my password
{
if(checked==true){//checked is true when radiobutton is clicked
  ui->passwordprint->setEchoMode(QLineEdit::Normal);
  ui->radioButton->setText("hide");
}
else{
  ui->passwordprint->setEchoMode(QLineEdit::Password);
  ui->radioButton->setText("show");
}
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->id_check->clear();
ui->adminpic->setPixmap(pic_admin.scaled( ui->adminpic->width()+10, ui->adminpic->height()+10,Qt::KeepAspectRatio));
ui->instructorpic->setPixmap(pic_instructor.scaled( ui->instructorpic->width(), ui->instructorpic->height(),Qt::KeepAspectRatio));
ui->studentpic->setPixmap(pic_student.scaled( ui->studentpic->width(), ui->studentpic->height(),Qt::KeepAspectRatio));
ui->text_admin->setText("ADMIN");
ui->text_admin->setStyleSheet("color:blue;font: 9pt MS Shell Dlg 2;font-weight:bold;");
ui->text_student->clear();
ui->text_instructor->clear();
}

void MainWindow::on_student_button_clicked()
{
    ui->id_check->clear();
ui->adminpic->setPixmap(pic_admin.scaled( ui->adminpic->width(), ui->adminpic->height(),Qt::KeepAspectRatio));
ui->instructorpic->setPixmap(pic_instructor.scaled( ui->instructorpic->width(), ui->instructorpic->height(),Qt::KeepAspectRatio));
ui->studentpic->setPixmap(pic_student.scaled( ui->studentpic->width()+10, ui->studentpic->height()+10,Qt::KeepAspectRatio));
ui->text_student->setText("STUDENT");
ui->text_student->setStyleSheet("color:red;font: 9pt MS Shell Dlg 2;font-weight:bold;");
ui->text_admin->clear();
ui->text_instructor->clear();

}

void MainWindow::on_instructor_button_clicked()
{
    ui->id_check->clear();
ui->adminpic->setPixmap(pic_admin.scaled( ui->adminpic->width(), ui->adminpic->height(),Qt::KeepAspectRatio));
ui->instructorpic->setPixmap(pic_instructor.scaled( ui->instructorpic->width()+10, ui->instructorpic->height()+10,Qt::KeepAspectRatio));
ui->studentpic->setPixmap(pic_student.scaled( ui->studentpic->width(), ui->studentpic->height(),Qt::KeepAspectRatio));
ui->text_instructor->setText("INSTRUCTOR");
ui->text_instructor->setStyleSheet("color:red;font: 9pt MS Shell Dlg 2;font-weight:bold;");
ui->text_student->clear();
ui->text_admin->clear();
}

void MainWindow::on_sign_button_clicked()//sign button
{
    QString id=ui->idprint->text();
    QString password=ui->passwordprint->text();
    q=new QSqlQuery(db.db);
    if(ui->text_student->text()=="STUDENT"){
        if(!q->exec("select id from student_password where id='"+id+"' and password='"+password+"'"))
            QMessageBox::critical(this,"Error!",q->lastError().text());
        else{ if(q->next()){//will check if table is empty or not
                  hide();
                  student_open.setFixedWidth(1350);
                  student_open.setFixedHeight(700);
                  student_open.set_id(id);//giving to next page id of the student
                  student_open.show();
               }
            else
               QMessageBox::critical(this,"Error!","Password or ID is incorrect!!");

       }
    }
    else  if(ui->text_admin->text()=="ADMIN"){
        if(!q->exec("select id from admin where id='"+id+"' and password='"+password+"'"))
            QMessageBox::critical(this,"Error!",q->lastError().text());
        else{ if(q->next()){
                 hide();
                admin_open.setFixedWidth(1350);
                admin_open.setFixedHeight(700);
                admin_open.show();
            }
             else
                QMessageBox::critical(this,"Error!","Password or ID is incorrect!!");

        }}
    else  if(ui->text_instructor->text()=="INSTRUCTOR"){
        if(!q->exec("select id  from instructor_password where id='"+id+"' and password='"+password+"'"))
            QMessageBox::critical(this,"Error!",q->lastError().text());
        else{
            if(q->next())
            {
                hide();
                instructor_open.setFixedWidth(1350);
                instructor_open.setFixedHeight(700);
                instructor_open.set_id(id);//giving to next page id of the instructor
                instructor_open.show();
            }
            else
               QMessageBox::critical(this,"Error!","Password or ID is incorrect!!");
            }
         }
    else{
     QMessageBox::critical(this,"Error!","Choose your icon");
    }
}

void MainWindow::on_idprint_textChanged(const QString &arg1)
{
    if(ui->text_instructor->text()=="INSTRUCTOR"){//if instructor is trying to sign in
        char out=a.check_inst_id(arg1);
        if(out=='0')
         ui->id_check->setText("Your id has to be only numeric!!!");
     else if(out=='1')
         ui->id_check->setText("Your id has to start with 11 ex: 11****!!!");
     else if(out=='6')
         ui->id_check->setText("Your id has to be 6 numbers!!!");
     else
         ui->id_check->clear();
    }
    else if(ui->text_student->text()=="STUDENT"){//if student is trying to sign in
        char out=a.check_std_id(arg1);
        if(out=='0')
         ui->id_check->setText("Your id has to be only numeric!!!");
     else if(out=='1')
         ui->id_check->setText("Your id has to be above 15****!!!");
     else if(out=='6')
         ui->id_check->setText("Your id has to be 6 numbers!!!");
     else
         ui->id_check->clear();
    }
}
