QT       += core gui sql printsupport network widgets serialport charts location \
quick

QT       += network
QT    +=serialport
QT +=core
include(QZXing/QZXing.pri)

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets quickwidgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    connection.cpp \
    employe.cpp \
    employee.cpp \
    main.cpp \
    mainwindow.cpp \
    chatserver.cpp \
    serverwindow.cpp \
    serverworker.cpp \
    chatclient.cpp \
    chatwindow.cpp \
    command.cpp \
    commande.cpp \
    gproduits.cpp \
    produit.cpp \
    arduino.cpp \
    article.cpp \
    garticle.cpp \
    popup.cpp \
    gmat.cpp \
    mailing.cpp \
    materiels.cpp \
    smtp.cpp \
    clients.cpp \
    gclients.cpp \
    map.cpp \
    statistiques.cpp \
    suppliers.cpp \
    gsuppliers.cpp

HEADERS += \
    connection.h \
    employe.h \
    employee.h \
    mainwindow.h \
    chatserver.h \
    serverwindow.h \
    serverworker.h \
    chatclient.h \
    chatwindow.h \
    command.h \
    commande.h \
    gproduits.h \
    produit.h \
    arduino.h \
    article.h \
    garticle.h \
    popup.h \
    gmat.h \
    mailing.h \
    materiels.h \
    smtp.h \
    clients.h \
    gclients.h \
    map.h \
    statistiques.h \
    suppliers.h \
    gsuppliers.h

FORMS += \
    employee.ui \
    mainwindow.ui \
    serverwindow.ui \
    chatwindow.ui \
    command.ui \
    gproduits.ui \
    garticle.ui \
    gmat.ui \
    clients.ui \
    map.ui \
    statistiques.ui \
    suppliers.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qml.qrc \
    translations.qrc
