#include "arduino.h"

Arduino::Arduino()
{

}

int Arduino::connect_arduino()
{
    //recherche du port sur lequel la carte arduino identifiee par arduino_mega_vendor_id
    //est connectee
    if(type == "produits")
        arduino_mega_product_id = 66;
    else
        arduino_mega_product_id = 67;

    foreach(const QSerialPortInfo &serial_port_info, QSerialPortInfo::availablePorts()){
            if(serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier()){
                if(serial_port_info.vendorIdentifier() == arduino_mega_vendor_id && serial_port_info.productIdentifier() == arduino_mega_product_id){
                    arduino_is_available = true;
                    arduino_port_name = serial_port_info.portName();
               }
            }
        }

    qDebug()<< "arduino_port_name is: "<< arduino_port_name;
    qDebug()<<arduino_is_available;
    if(arduino_is_available){//configuration de la communication (debit...)
        qDebug()<<"Im here";
        serial=new QSerialPort();
        serial->setPortName(arduino_port_name);
        qDebug()<<"Now?";
        if(!serial->open(QSerialPort::ReadWrite)){
            qDebug()<<"open";
            return 1;
        }else{
            if(type == "clients")
            serial->setBaudRate(QSerialPort::Baud115200); //debit:115200 bits/s
            else
                serial->setBaudRate(QSerialPort::Baud9600);
            serial->setDataBits(QSerialPort::Data8); //Longueur des donnees : 8 bits
            serial->setParity(QSerialPort::NoParity); //1 bit de parite optionnel
            serial->setStopBits(QSerialPort::OneStop); // Nombre de bits de stop : 1
            serial->setFlowControl(QSerialPort::NoFlowControl);
           return 0;
        }


    }
    qDebug()<<"not available";
    return -1;
}

int Arduino::close_arduino(){
    if(serial->isOpen()){
        serial->close();
        return 0;
    }
    return 1;
}


int Arduino::write_to_arduino(QByteArray d){
    if(serial->isWritable()){
        serial->write(d);
        return 0;
    }else{
        qDebug()<<"couldn't write to serial";
        return 1;
    }
}

QByteArray Arduino::read_from_arduino(){
    if(serial->isReadable()){
        serial->readyRead();
        data=serial->readAll();
        return data;
    }
}

QSerialPort * Arduino::getserial(){
    return serial;
}

QString Arduino::get_arduino_portname(){
    return arduino_port_name;
}
