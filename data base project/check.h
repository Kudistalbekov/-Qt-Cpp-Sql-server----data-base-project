#ifndef CHECK_H
#define CHECK_H

#include <QString>
class check
{
public:
    check();
    char check_inst_id(QString);
    char check_std_id(QString);
    int check_course(QString);
    char check_string(QString);
    char check_admin_password(QString);
    int is_alpha(char);
};

#endif // CHECK_H
