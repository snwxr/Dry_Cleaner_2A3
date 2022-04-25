/****************************************************************************
** Meta object code from reading C++ file 'garticle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../employee_interface/garticle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'garticle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_garticle_t {
    QByteArrayData data[20];
    char stringdata0[401];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_garticle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_garticle_t qt_meta_stringdata_garticle = {
    {
QT_MOC_LITERAL(0, 0, 8), // "garticle"
QT_MOC_LITERAL(1, 9, 24), // "on_ajout_article_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_supp_article_clicked"
QT_MOC_LITERAL(4, 59, 42), // "on_comboBox_modif_prod_curren..."
QT_MOC_LITERAL(5, 102, 4), // "arg1"
QT_MOC_LITERAL(6, 107, 24), // "on_modif_article_clicked"
QT_MOC_LITERAL(7, 132, 21), // "on_pdfarticle_clicked"
QT_MOC_LITERAL(8, 154, 22), // "on_tri_num_art_clicked"
QT_MOC_LITERAL(9, 177, 23), // "on_tri_type_art_clicked"
QT_MOC_LITERAL(10, 201, 23), // "on_tri_etat_art_clicked"
QT_MOC_LITERAL(11, 225, 27), // "on_tot_afficher_art_clicked"
QT_MOC_LITERAL(12, 253, 28), // "on_line_rech_art_textChanged"
QT_MOC_LITERAL(13, 282, 16), // "on_notif_clicked"
QT_MOC_LITERAL(14, 299, 12), // "update_label"
QT_MOC_LITERAL(15, 312, 15), // "on_RFID_clicked"
QT_MOC_LITERAL(16, 328, 15), // "on_open_clicked"
QT_MOC_LITERAL(17, 344, 20), // "on_get_photo_clicked"
QT_MOC_LITERAL(18, 365, 29), // "on_tab_article_currentChanged"
QT_MOC_LITERAL(19, 395, 5) // "index"

    },
    "garticle\0on_ajout_article_clicked\0\0"
    "on_supp_article_clicked\0"
    "on_comboBox_modif_prod_currentIndexChanged\0"
    "arg1\0on_modif_article_clicked\0"
    "on_pdfarticle_clicked\0on_tri_num_art_clicked\0"
    "on_tri_type_art_clicked\0on_tri_etat_art_clicked\0"
    "on_tot_afficher_art_clicked\0"
    "on_line_rech_art_textChanged\0"
    "on_notif_clicked\0update_label\0"
    "on_RFID_clicked\0on_open_clicked\0"
    "on_get_photo_clicked\0on_tab_article_currentChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_garticle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    1,   96,    2, 0x08 /* Private */,
       6,    0,   99,    2, 0x08 /* Private */,
       7,    0,  100,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    0,  104,    2, 0x08 /* Private */,
      12,    1,  105,    2, 0x08 /* Private */,
      13,    0,  108,    2, 0x08 /* Private */,
      14,    0,  109,    2, 0x08 /* Private */,
      15,    0,  110,    2, 0x08 /* Private */,
      16,    0,  111,    2, 0x08 /* Private */,
      17,    0,  112,    2, 0x08 /* Private */,
      18,    1,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void garticle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        garticle *_t = static_cast<garticle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ajout_article_clicked(); break;
        case 1: _t->on_supp_article_clicked(); break;
        case 2: _t->on_comboBox_modif_prod_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_modif_article_clicked(); break;
        case 4: _t->on_pdfarticle_clicked(); break;
        case 5: _t->on_tri_num_art_clicked(); break;
        case 6: _t->on_tri_type_art_clicked(); break;
        case 7: _t->on_tri_etat_art_clicked(); break;
        case 8: _t->on_tot_afficher_art_clicked(); break;
        case 9: _t->on_line_rech_art_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_notif_clicked(); break;
        case 11: _t->update_label(); break;
        case 12: _t->on_RFID_clicked(); break;
        case 13: _t->on_open_clicked(); break;
        case 14: _t->on_get_photo_clicked(); break;
        case 15: _t->on_tab_article_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject garticle::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_garticle.data,
      qt_meta_data_garticle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *garticle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *garticle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_garticle.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int garticle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
