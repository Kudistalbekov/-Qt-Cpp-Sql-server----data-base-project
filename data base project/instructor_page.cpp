#include "instructor_page.h"
#include "ui_instructor_page.h"
#include <QAbstractItemView>
instructor_page::instructor_page(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::instructor_page)
{
    ui->setupUi(this);
    pic_student=QPixmap(":/new/picture/picture/iconfinder_10_avatar_2754575.png");
    pic_instructor=QPixmap(":/new/picture/picture/iconfinder_7_avatar_2754582.png");
    pic_pass=QPixmap(":/new/picture/picture/iconfinder_key_1055040.png");
    ui->student_pic->setPixmap(pic_student.scaled( ui->student_pic->width(), ui->student_pic->height(),Qt::KeepAspectRatio));
    ui->password_pic->setPixmap(pic_pass.scaled( ui->password_pic->width(), ui->password_pic->height(),Qt::KeepAspectRatio));
    ui->instructorpic->setPixmap(pic_instructor.scaled( ui->instructorpic->width(), ui->instructorpic->height(),Qt::KeepAspectRatio));
    db.connect_to_db("university");
    if(db.open()){
       qDebug()<<"Connected!!";
    }
    else{
        QMessageBox::critical(this,"Error with database connection!!",db.get_last_error());
    }
    ui->widget_db_2->hide();
    ui->tabWidget->tabBar()->hide();
    ui->db_list->setSelectionMode(QAbstractItemView::NoSelection);
    ui->tab->hide();
    ui->tab_2->hide();
    ui->new_password->setEchoMode(QLineEdit::Password);
}
instructor_page::~instructor_page()
{
    delete ui;
}
void instructor_page::set_id(QString a){
    id = a;
    ui->id_instr->setText(id);
    ui->id_instr->setStyleSheet("color:red;font: 9pt MS Shell Dlg 2;font-weight:bold;");
}

void instructor_page::on_pushButton_clicked()//my course button
{
    ui->db_list->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
    row=0;
    ui->db_list->clear();
    db.open();
    table = new QSqlQuery();
    table->exec("select teaches.course_id from teaches join course "
                "on(teaches.course_id=course.course_id) where id='"+id+"' group by teaches.course_id");
    ui->db_list->addItem("\t\t\t YOUR COURSES");
    while(table->next()){
    QString list=table->value(0).toString();
    ui->db_list->addItem(list);
    }
}

void instructor_page::on_register_student_clicked()
{
ui->tab_2->hide();
ui->tab->show();
}

void instructor_page::on_pushButton_2_clicked()//my student button
{
ui->widget_db_2->show();
ui->db_list_2->clear();
db.open();
table = new QSqlQuery();
table->exec("select student.id as student_id,student.name,student.dept_name from "
            "(advisor natural join instructor on i_id=id) join student on "
            "s_id=student.id where instructor.id='"+id+"';");
while(table->next()){
QString list="      "+table->value(0).toString()+"   "+table->value(1).toString()
        +"   "+table->value(2).toString()+"   "+table->value(3).toString();
ui->db_list_2->addItem(list);
}
}

void instructor_page::on_clear_clicked()
{
    ui->db_list->clear();
    ui->db_list_2->clear();
    ui->widget_db_2->hide();
}

void instructor_page::on_pushButton_4_clicked()//change password for instructor
{
    db.open();
    if(!ui->new_password->text().isEmpty()){
        QSqlQuery *query=new  QSqlQuery();
                query->prepare("UPDATE instructor_password SET password='"+ui->new_password->text()+"'WHERE id='"+id+"'");
                if(query->exec())
                    QMessageBox::information(this,"Password change","Successfull");
                else
                    QMessageBox::warning(this,"Password change","Failed Try again");
    }
    else
        QMessageBox::critical(this,"ERROR!!","THE NEW_PASSWORD'S TEXTBOX EMPTY!!");
}

void instructor_page::on_details_clicked()//detail
{
    if(ui->db_list->selectionMode()==QAbstractItemView::SelectionMode::SingleSelection){
        if(row==0){
        QMessageBox::critical(this,"Error!!","CHOOSE COURSE!!");
        ui->db_list->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        }
        else{
            rowtext=ui->db_list->takeItem(row)->text();
            ui->db_list->clear();
            db.open();
            table = new QSqlQuery();
            table->exec("select course.course_id,title,dept_name,credits,sec_id,semester,year "
                        "from course join teaches on (course.course_id=teaches.course_id) where course.course_id =  '"+rowtext+"'");
            ui->db_list->addItem("\t\t\t YOUR COURSE DETAILS\n");
            QString list="course_id\t title\t dept_name\t credits\t sec_id\t semester\t year\n";
            ui->db_list->addItem(list);
            while(table->next()){
            QString list=table->value(0).toString()+"\t"+table->value(1).toString()
                    +"\t"+table->value(2).toString()+"\t "+table->value(3).toString()+"\t "
                    +table->value(4).toString()+"\t "+table->value(5).toString()+"\t "+table->value(6).toString();
            ui->db_list->addItem(list);
          }
            ui->db_list->addItem("\n\t\t\t TAKING STUDENTS\n");
           table->exec("select student.id,student.name "
                       "from (course join takes on (course.course_id=takes.course_id))"
                       "join student on(takes.id=student.id)where course.course_id='"+rowtext+"'");
           while(table->next()){
           QString list=table->value(0).toString()+"\t  "+table->value(1).toString()+"\t  "
                   +table->value(2).toString()+"\t "+table->value(3).toString()+"\t "
                   +table->value(4).toString()+"\t "+table->value(5).toString()+"\t "+table->value(6).toString();
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

void instructor_page::on_db_list_currentRowChanged(int currentRow)
{
    row=currentRow;
}

void instructor_page::on_add_clicked()//assign course to student
{
    QSqlQuery qry;//we create object of class QSqlQuery in order to run query
    int id=ui->s_id->text().toInt();
    QString course_id=ui->s_course_id->text();
    QString sec_id=ui->s_section->text();
    QString semester=ui->s_semester->text();
    int year=ui->s_year->text().toInt();
    qry.prepare("insert into takes (id,course_id,sec_id,semester,year) values(?,?,?,?,?)");//preparing querry
    qry.addBindValue(id);//assigning values to querry
    qry.addBindValue(course_id);
    qry.addBindValue(sec_id);
    qry.addBindValue(semester);
    qry.addBindValue(year);
    if(!qry.exec()){//if query executed shows in message box Succes otherwise Error
       QMessageBox::critical(this,"Error!!",qry.lastError().text());
    }
    else{
        QMessageBox::information(this,"ADDED!!","Success!!");
        on_pushButton_clicked();
    }
}

void instructor_page::on_section_clicked()//section
{
    ui->widget_db_2->show();
    ui->db_list_2->clear();
    db.open();
    table = new QSqlQuery();
    table->exec("select course_id,sec_id,semester,year from section");
    while(table->next()){
    QString list="      "+table->value(0).toString()+"   "+
            table->value(1).toString()+"   "+table->value(2).toString()+"   "+table->value(3).toString();
    ui->db_list_2->addItem(list);
    }
}

void instructor_page::on_pushButton_3_clicked()
{
    ui->tab->hide();
    ui->tab_2->show();
}

void instructor_page::on_radioButton_clicked(bool checked)
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

void instructor_page::on_s_id_textChanged(const QString &arg1)
{
    char out=a.check_std_id(arg1);
    if(out=='0')
     ui->check_str->setText("Student id has to be only numeric!!!");
 else if(out=='1')
     ui->check_str->setText("Student id has to be above 15****!!!");
 else if(out=='6')
     ui->check_str->setText("Student id has to be 6 numbers!!!");
 else
     ui->check_str->clear();
}

void instructor_page::on_s_course_id_textChanged(const QString &arg1)
{
    int out=a.check_course(arg1);
    if(out==0)
        ui->check_str->setText("Course_id has to contain numbers and lower case alphabets!!!");
    else
        ui->check_str->clear();
}

