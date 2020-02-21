 #include "admin_page.h"
#include "ui_admin_page.h"
#include <QStringList>
admin::admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
    pic_admin=QPixmap(":/new/picture/picture/iconfinder_12_avatar_2754577.png");
    inst=QPixmap(":/new/picture/picture/iconfinder_7_avatar_2754582.png");
    st=QPixmap(":/new/picture/picture/iconfinder_10_avatar_2754575.png");
    ui->student_pic2->setPixmap(st.scaled(ui->student_pic->width(),ui->student_pic->height(),Qt::KeepAspectRatio));
    ui->advisor_pic->setPixmap(inst.scaled(ui->inst_pic->width(),ui->inst_pic->height(),Qt::KeepAspectRatio));
    ui->student_pic->setPixmap(st.scaled(ui->student_pic->width(),ui->student_pic->height(),Qt::KeepAspectRatio));
    ui->inst_pic->setPixmap(inst.scaled(ui->inst_pic->width(),ui->inst_pic->height(),Qt::KeepAspectRatio));
    ui->photo->setPixmap(pic_admin.scaled( ui->photo->width(), ui->photo->height(),Qt::KeepAspectRatio));
    db.connect_to_db("university");
    if(db.open()){
       qDebug()<<"Connected!!";
    }
    else{
        QMessageBox::critical(this,"Error with database connection!!",db.get_last_error());
    }
    ui->check_str->setStyleSheet("color:blue;font: 9pt MS Shell Dlg 2;font-weight:bold;");
    hide_tabs(0);
}
admin::~admin()
{
    delete ui;
}
void admin::hide_tabs(int c){
    switch (c) {
    case 0://hide all
        ui->course->hide();
        ui->student->hide();
        ui->teacher->hide();
        ui->inst_course->hide();
        ui->instr_student->hide();
        ui->tabWidget->tabBar()->hide();
        ui->widget_db_2->hide();
        break;
    case 1://show course
        ui->course->show();
        ui->student->hide();
        ui->teacher->hide();
        ui->inst_course->hide();
        ui->instr_student->hide();
        break;
    case 2://show teacher
        ui->course->hide();
        ui->student->hide();
        ui->teacher->show();
        ui->inst_course->hide();
        ui->instr_student->hide();
        break;
    case 3://show student
        ui->course->hide();
        ui->student->show();
        ui->teacher->hide();
        ui->inst_course->hide();
        ui->instr_student->hide();
        break;
    case 4://Assign courses to instructors
        ui->course->hide();
        ui->student->hide();
        ui->teacher->hide();
        ui->inst_course->show();
        ui->instr_student->hide();
        break;
    case 5:// Assign instructors to students
        ui->course->hide();
        ui->student->hide();
        ui->teacher->hide();
        ui->inst_course->hide();
        ui->instr_student->show();
        break;
    }
}

void admin::on_new_course_clicked()//1
{
    hide_tabs(1);
    ui->db_list->clear();
    db.open();
    table = new QSqlQuery();
    table->exec("select * from course");
    while(table->next()){
    QString list="      "+table->value(0).toString()+"   "+table->value(1).toString()+"   "+table->value(2).toString()+"   "+table->value(3).toString();
    ui->db_list->addItem(list);
    }
}

void admin::on_new_student_clicked()//3
{
    hide_tabs(3);
    ui->db_list->clear();
    db.open();
    table = new QSqlQuery();
    table->exec("select * from student");
    while(table->next()){
    QString list="      "+table->value(0).toString()+"   "+table->value(1).toString()+"   "+table->value(2).toString()+"   "+table->value(3).toString();
    ui->db_list->addItem(list);
    }
}

void admin::on_pushButton_clicked()//clear
{
    ui->db_list->clear();
    ui->db_list_2->clear();
    ui->widget_db_2->hide();
}

void admin::on_new_teacher_clicked()//2
{
   hide_tabs(2);
   ui->db_list->clear();
   db.open();
   table = new QSqlQuery();
   table->exec("select * from instructor");
   while(table->next()){
   QString list="      "+table->value(0).toString()+"   "+table->value(1).toString()+"   "+table->value(2).toString()+"   "+table->value(3).toString();
   ui->db_list->addItem(list);
   }
}

void admin::on_teaching_clicked()//4
{
    hide_tabs(4);
    ui->db_list->clear();
    db.open();
    table = new QSqlQuery();
    table->exec(" select instructor.id,name,dept_name,course_id,sec_id,semester,year from instructor join teaches on teaches.id=instructor.id;");
    while(table->next()){
    QString list="      "+table->value(0).toString()+"   "+table->value(1).toString()+"   "+table->value(2).toString()+"   "+table->value(3).toString()+"   "+table->value(4).toString()+"   "+table->value(5).toString()+"   "+table->value(6).toString();
    ui->db_list->addItem(list);
    }
}

void admin::on_advisor_clicked()//gives table advisor
{
    hide_tabs(5);
    ui->db_list->clear();
    db.open();
    table = new QSqlQuery();
    table->exec("select instructor.id as  instructor_id,instructor.name,student.id as student_id,student.name,student.dept_name "
                "from (advisor natural join instructor on i_id=id) join student on s_id=student.id order by instructor_id");
    while(table->next()){
        QString list="      "+table->value(0).toString()+"   "+table->value(1).toString()+"   "+
                table->value(2).toString()+"   "+table->value(3).toString();
        ui->db_list->addItem(list);
    }
}


void admin::on_course_add_clicked()//new course
{
    QSqlQuery qry;
    QString course_id=ui->c_course->text();
    QString title=ui->c_title->text();
    QString dept_name=ui->c_dept_name->text();
    int credit=ui->c_credit->text().toInt();
    qry.prepare("insert into course (course_id,title,dept_name,credits) values(?,?,?,?)");
    qry.addBindValue(course_id);
    qry.addBindValue(title);
    qry.addBindValue(dept_name);
    qry.addBindValue(credit);
    if(!qry.exec()){
       QMessageBox::critical(this,"Error!!",qry.lastError().text());
    }
    else{
       on_new_course_clicked();
    }

}

void admin::on_i_add_clicked()//new instructor
{
    if(ui->check_str->text().isEmpty()){
    QSqlQuery qry;
    QSqlQuery pass;
    int id=ui->i_id->text().toInt();
    QString name=ui->i_name->text();
    QString dept_name=ui->i_dept_name->text();
    int salary=ui->i_salary->text().toInt();
    qry.prepare("insert into instructor (id,name,dept_name,salary) values(?,?,?,?)");
    qry.addBindValue(id);
    qry.addBindValue(name);
    qry.addBindValue(dept_name);
    qry.addBindValue(salary);
    pass.prepare("insert into instructor_password (id,password) values(?,?)");
    pass.addBindValue(id);
    pass.addBindValue(id);
    if(!qry.exec()){
       QMessageBox::critical(this,"Error!!",qry.lastError().text());
    }
    else if(!pass.exec()){
        QMessageBox::critical(this,"Error!!",pass.lastError().text());
    }
    else{
       on_new_teacher_clicked();
       ui->i_id->clear();
       ui->i_name->clear();
       ui->i_dept_name->clear();
       ui->i_salary->clear();
    }
  }
}

void admin::on_s_add_clicked()
{
    if(ui->check_str->text().isEmpty()){
    QSqlQuery qry;
    QSqlQuery pass;
    int id=ui->s_id->text().toInt();
    QString name=ui->s_name->text();
    QString dept_name=ui->s_dept_name->text();
    int tot_credit=ui->s_tot_cred->text().toInt();
    qry.prepare("insert into student (id,name,dept_name,tot_cred) values(?,?,?,?)");//assign new stud
    qry.addBindValue(id);
    qry.addBindValue(name);
    qry.addBindValue(dept_name);
    qry.addBindValue(tot_credit);
    pass.prepare("insert into student_password (id,password) values(?,?)");//assign pass to the new stud
    pass.addBindValue(id);
    pass.addBindValue(id);
    if(!qry.exec()){
       QMessageBox::critical(this,"Error!!",qry.lastError().text());
    }
    else if(!pass.exec()){
        QMessageBox::critical(this,"Error!!",pass.lastError().text());
    }
    else{
       on_new_student_clicked();
       ui->s_id->clear();
       ui->s_name->clear();
       ui->s_dept_name->clear();
       ui->s_tot_cred->clear();
    }
  }
}

void admin::on_t_add_clicked()//teaches
{
     if(ui->check_str->text().isEmpty()){
    QSqlQuery qry;
    int id=ui->teaches_id->text().toInt();
    QString course_id=ui->teaches_course->text();
    QString sec_id=ui->teaches_sec_id->text();
    QString semester=ui->teaches_semester->text();
    int year=ui->teahes_year->text().toInt();
    qry.prepare("insert into teaches (id,course_id,sec_id,semester,year) values(?,?,?,?,?)");
    qry.addBindValue(id);
    qry.addBindValue(course_id);
    qry.addBindValue(sec_id);
    qry.addBindValue(semester);
    qry.addBindValue(year);
    if(!qry.exec()){
       QMessageBox::critical(this,"Error!!",qry.lastError().text());
    }
    else{
      on_teaching_clicked();
      ui->teaches_id->clear();
      ui->teaches_course->clear();
      ui->teaches_sec_id->clear();
      ui->teaches_semester->clear();
      ui->teahes_year->clear();
    }
  }
}

void admin::on_assign_clicked()//assign student to instructor
{
    if(ui->check_str->text().isEmpty()){
    QSqlQuery qry;
    int student_id=ui->student_id_2->text().toInt();
    int instructor_id=ui->advisor_id->text().toInt();
    qry.prepare("insert into advisor (s_id,i_id) values(?,?)");
    qry.addBindValue(student_id);
    qry.addBindValue(instructor_id);
    if(!qry.exec()){
        QMessageBox::critical(this,"Error!!",qry.lastError().text());
    }
    else{
      on_advisor_clicked();
    ui->student_id_2->clear();
    ui->advisor_id->clear();
    }
    }
}

void admin::on_pushButton_2_clicked()//section
{
    ui->widget_db_2->show();
    ui->db_list_2->clear();
    db.open();
    table = new QSqlQuery();
    table->exec("select course_id,sec_id,semester,year from section");
    while(table->next()){
    QString list="      "+table->value(0).toString()+"   "+table->value(1).toString()+"   "+table->value(2).toString()+"   "+table->value(3).toString();
    ui->db_list_2->addItem(list);
    }
}

void admin::on_s_id_textChanged(const QString &arg1)
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

void admin::on_teaches_id_textChanged(const QString &arg1)
{
    char out=a.check_inst_id(arg1);
    if(out=='0')
     ui->check_str->setText("Instructor id has to be only numeric!!!");
 else if(out=='1')
     ui->check_str->setText("Instructor id has to start with 11 ex: 11****!!!");
 else if(out=='6')
     ui->check_str->setText("Instructor id has to be 6 numbers!!!");
 else
     ui->check_str->clear();
}

void admin::on_i_id_textChanged(const QString &arg1)
{
    char out=a.check_inst_id(arg1);
    if(out=='0')
     ui->check_str->setText("Instructor id has to be only numeric!!!");
 else if(out=='1')
     ui->check_str->setText("Instructor id has to start with 11 ex: 11****!!!");
 else if(out=='6')
     ui->check_str->setText("Instructor id has to be 6 numbers!!!");
 else
     ui->check_str->clear();
}

void admin::on_advisor_id_textChanged(const QString &arg1)
{
    char out=a.check_inst_id(arg1);
    if(out=='0')
     ui->check_str->setText("Instructor id has to be only numeric!!!");
 else if(out=='1')
     ui->check_str->setText("Instructor id has to start with 11 ex: 11****!!!");
 else if(out=='6')
     ui->check_str->setText("Instructor id has to be 6 numbers!!!");
 else
     ui->check_str->clear();
}

void admin::on_student_id_2_textChanged(const QString &arg1)
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
