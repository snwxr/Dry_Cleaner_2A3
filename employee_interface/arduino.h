#ifndef ARDUINO_H
#define ARDUINO_H
#include <QtSerialPort/QSerialPort> //classe rassemblant des fonctions permettant l'echange des donnees dans une liaison serie
#include <QtSerialPort/QSerialPortInfo> //classe fournissant des informations sur les ports disponibles
#include <QDebug>
class Arduino
{
public:
    Arduino();
    ~Arduino(){};
    int connect_arduino(); //permet de connecter le pc a arduino
    int close_arduino(); //permet de fermer la connexion
    int write_to_arduino(QByteArray); //envoyer des donnees vers arduino
    QByteArray read_from_arduino(); //recevoir des donnees de la carte arduino
    //accesseurs
    QSerialPort * getserial();
    QString get_arduino_portname();
    void setType(QString t){ type = t;}
private:
    QSerialPort * serial; //cet objet rassemble des informations (vitesse,bits de donnees,etc.)
    //et des fonctions (envoi,lecture de reception,...) sur ce qu'est une voie serie pour Arduino.
    static const quint16 arduino_mega_vendor_id=9025;
    quint16 arduino_mega_product_id=66;
    QString arduino_port_name;
    bool arduino_is_available;
    QByteArray data;
    QString type;
};

#endif // ARDUINO_H
