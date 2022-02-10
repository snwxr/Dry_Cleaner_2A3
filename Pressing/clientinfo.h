#ifndef CLIENTINFO_H
#define CLIENTINFO_H
#include<QString>

class ClientInfo
{
public:
    void setFirstName(QString s);
    void setLastName(QString s);
    void setGender();

    QString get_FirstName();
    QString get_LastName();

    ClientInfo();
};

#endif // CLIENTINFO_H
