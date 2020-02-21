#include "check.h"
#include <QDebug>
check::check()
{

}


char check::check_inst_id(QString a){
    std::string elem=a.toStdString();
    for(size_t i=0;elem[i]!='\0';i++){
           if(i>5)
            return '6';//id is too long
           if(elem[i] < 47 || elem[i] > 58)
               return '0';//id is not numeric
    }
    if(!elem.empty())
    {
    int id=std::stoi(elem);
    if(id<110000 || id>119999)
        return '1';
    }

       return '\0';
}

char check::check_std_id(QString a){
    std::string elem=a.toStdString();
    for(size_t i=0;elem[i]!='\0';i++){
           if(i>5)
            return '6';
           if(elem[i] < 47 || elem[i] > 58)
               return '0';
    }
    if(!elem.empty()){
    int id=std::stoi(elem);
    if(id<150000)
        return '1';}

       return '\0';
}
int check::is_alpha(char a){
    return ((a>='a' && a<='z')||(a>='1' && a<='9'))?1:0;
}

int check::check_course(QString a){
std::string elem=a.toStdString();
for(size_t i=0;elem[i]!='\0';i++){
    if(is_alpha(elem[i]))
        continue;
    else return 0;
}
return 1;
}
char check::check_string(QString a){

}
char check::check_admin_password(QString a){

}
