#include "logininfo.h"

LoginInfo::LoginInfo()
{
//définire le constructeur par défaut
    UserName="";
    Password="";
}
void LoginInfo::setUserName(QString s){UserName=s;};
void LoginInfo::setPassword(QString s){Password=s;};

QString LoginInfo::get_UserName(){return UserName;};
QString LoginInfo::get_Password(){return Password;};
