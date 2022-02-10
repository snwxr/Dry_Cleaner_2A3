#ifndef LOGININFO_H
#define LOGININFO_H
#include<QString>

class LoginInfo
{
public:
    void setUserName(QString s);
    void setPassword(QString s);

    QString get_UserName();
    QString get_Password();
    LoginInfo();

private:
    QString UserName, Password;
};

#endif // LOGININFO_H
