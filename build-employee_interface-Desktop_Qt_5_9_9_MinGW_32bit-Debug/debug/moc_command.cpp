/****************************************************************************
** Meta object code from reading C++ file 'command.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../employee_interface/command.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'command.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Command_t {
    QByteArrayData data[15];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Command_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Command_t qt_meta_stringdata_Command = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Command"
QT_MOC_LITERAL(1, 8, 24), // "on_btn_ajout_cmd_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 22), // "on_btn_sup_cmd_clicked"
QT_MOC_LITERAL(4, 57, 25), // "on_btn_historique_clicked"
QT_MOC_LITERAL(5, 83, 41), // "on_comboBox_modif_cmd_current..."
QT_MOC_LITERAL(6, 125, 4), // "arg1"
QT_MOC_LITERAL(7, 130, 24), // "on_btn_modif_cmd_clicked"
QT_MOC_LITERAL(8, 155, 18), // "on_pdf_com_clicked"
QT_MOC_LITERAL(9, 174, 21), // "on_tri_id_com_clicked"
QT_MOC_LITERAL(10, 196, 22), // "on_tri_nom_com_clicked"
QT_MOC_LITERAL(11, 219, 27), // "on_tri_quantite_com_clicked"
QT_MOC_LITERAL(12, 247, 28), // "on_tout_afficher_com_clicked"
QT_MOC_LITERAL(13, 276, 28), // "on_line_rech_com_textChanged"
QT_MOC_LITERAL(14, 305, 22) // "on_quitter_cmd_clicked"

    },
    "Command\0on_btn_ajout_cmd_clicked\0\0"
    "on_btn_sup_cmd_clicked\0on_btn_historique_clicked\0"
    "on_comboBox_modif_cmd_currentIndexChanged\0"
    "arg1\0on_btn_modif_cmd_clicked\0"
    "on_pdf_com_clicked\0on_tri_id_com_clicked\0"
    "on_tri_nom_com_clicked\0"
    "on_tri_quantite_com_clicked\0"
    "on_tout_afficher_com_clicked\0"
    "on_line_rech_com_textChanged\0"
    "on_quitter_cmd_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Command[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    1,   77,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    1,   86,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void Command::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Command *_t = static_cast<Command *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_ajout_cmd_clicked(); break;
        case 1: _t->on_btn_sup_cmd_clicked(); break;
        case 2: _t->on_btn_historique_clicked(); break;
        case 3: _t->on_comboBox_modif_cmd_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_btn_modif_cmd_clicked(); break;
        case 5: _t->on_pdf_com_clicked(); break;
        case 6: _t->on_tri_id_com_clicked(); break;
        case 7: _t->on_tri_nom_com_clicked(); break;
        case 8: _t->on_tri_quantite_com_clicked(); break;
        case 9: _t->on_tout_afficher_com_clicked(); break;
        case 10: _t->on_line_rech_com_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_quitter_cmd_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Command::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Command.data,
      qt_meta_data_Command,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Command::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Command::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Command.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Command::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
