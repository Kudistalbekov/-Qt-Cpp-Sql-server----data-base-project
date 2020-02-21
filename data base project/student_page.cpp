#include "student_page.h"
#include "ui_student_page.h"

student_page::student_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student_page)
{
    ui->setupUi(this);
    pic_student=QPixmap(":/new/picture/picture/iconfinder_10_avatar_2754575.png");
    pic_pass=QPixmap(":/new/picture/picture/iconfinder_key_1055040.png");
    ui->password_pic->setPixmap(pic_pass.scaled( ui->password_pic->width(), ui->password_pic->height(),Qt::KeepAspectRatio));
    ui->student_pic->setPixmap(pic_student.scaled( ui->student_pic->width(), ui->student_pic->height(),Qt::KeepAspectRatio));
    db.connect_to_db("university");
    if(db.open()){
       qDebug()<<"Connected!!";
    }
    else{
        QMessageBox::critical(this,"Error with database connection!!",db.get_last_error());
    }
    ui->db_list->setSelectionMode(QAbstractItemView::NoSelection);
    ui->new_password->setEchoMode(QLineEdit::Password);
    ui->password_w->hide();
}

student_page::~student_page()
{
    delete ui;
}

void student_page::set_id(QString a){
    id=a;
    ui->id_student->setText(id);
    ui->id_student->setStyleSheet("color:red;font: 9pt MS Shell Dlg 2;font-weight:bold;");
}

void student_page::on_pushButton_clicked()//MY COURSE
{
    ui->db_list->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
    row=0;
    ui->db_list->clear();
    db.open();
    table = new QSqlQuery();
    table->exec("select takes.course_id from takes join course on(takes.course_id=course.course_id) where id='"+id+"'");
    ui->db_list->addItem("\t\t\t YOUR COURSES");
    while(table->next()){
    QString list=table->value(0).toString();
    ui->db_list->addItem(list);
    }
}

void student_page::on_clear_clicked()
{
    ui->db_list->clear();
}

void student_page::on_details_clicked()//CLASSMATES
{
    if(ui->db_list->selectionMode()==QAbstractItemView::SelectionMode::SingleSelection){
        if(row==0){//nothing was choosed
        QMessageBox::critical(this,"Error!!","CHOOSE COURSE!!");
        ui->db_list->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        }
        else{
            rowtext=ui->db_list->takeItem(row)->text();
            ui->db_list->clear();
            db.open();
            table = new QSqlQuery();
            table->exec("select course.course_id,title,dept_name,credits,sec_id,"
                        "semester,year from course join takes on "
                        "(course.course_id=takes.course_id) where course.course_id =  '"+rowtext+"'");
            ui->db_list->addItem("\t\t\t YOUR COURSE DETAILS\n");
            QString list="course_id\t title\t dept_name\t credits\t sec_id\t semester\t year\n";
            ui->db_list->addItem(list);
            while(table->next()){
            QString list=table->value(0).toString()+"\t"+table->value(1).toString()+"\t"+table->value(2).toString()+"\t "+
                    table->value(3).toString()+"\t "+table->value(4).toString()+"\t "+table->value(5).toString()+"\t "+table->value(6).toString();
            ui->db_list->addItem(list);
          }
            ui->db_list->addItem("\n\t\t\t TAKING STUDENTS\n");
           table->exec("select student.id,student.name from "
                       "(course join takes on (course.course_id=takes.course_id))join"
                       " student on(takes.id=student.id)where course.course_id='"+rowtext+"'");
           while(table->next()){
           QString list=table->value(0).toString()+"\t  "+table->value(1).toString()+"\t  "+
                   table->value(2).toString()+
                   "\t "+table->value(3).toString()+"\t "+table->value(4).toString()+"\t "
                   +table->value(5).toString()+"\t "+table->value(6).toString();
           ui->db_list->addItem(list);
         }
           ui->db_list->setSelectionMode(QAbstractItemView::NoSelection);
        }
        row=0;
    }
    else{
        QMessageBox::critical(this,"ERROR!!","YOU CAN'T SELECT IN THIS LIST!!");
    row=0;
    }

}

void student_page::on_db_list_currentRowChanged(int currentRow)
{
    row=currentRow;
}

void student_page::on_pushButton_3_clicked()
{
    ui->password_w->show();
}

void student_page::on_pushButton_4_clicked()//modify student password
{
    db.open();
    if(!ui->new_password->text().isEmpty()){
        QSqlQuery *query=new  QSqlQuery();
                query->prepare("UPDATE student_password SET password='"+ui->new_password->text()+"'WHERE id='"+id+"'");
                if(query->exec())
                    QMessageBox::information(this,"Password change","Successfull");
                else
                    QMessageBox::warning(this,"Password change",query->lastError().text());
    }
    else
        QMessageBox::critical(this,"ERROR!!","THE NEW_PASSWORD'S TEXTBOX EMPTY!!");
}

void student_page::on_radioButton_clicked(bool checked)
{
    if(checked==true){
      ui->new_password->setEchoMode(QLineEdit::Normal);
      ui->radioButton->setText("hide");
    }
    else{
      ui->new_password->setEchoMode(QLineEdit::Password);
      ui->radioButton->setText("show");
    }
}
