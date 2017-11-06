/****************************************************************************
** Meta object code from reading C++ file 'userlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mySystem2.5/userlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Userlist_t {
    QByteArrayData data[5];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Userlist_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Userlist_t qt_meta_stringdata_Userlist = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Userlist"
QT_MOC_LITERAL(1, 9, 23), // "showAddWhiteOrBlackRole"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "loadUserListData"
QT_MOC_LITERAL(4, 51, 10) // "addBtnSlot"

    },
    "Userlist\0showAddWhiteOrBlackRole\0\0"
    "loadUserListData\0addBtnSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Userlist[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x08 /* Private */,
       4,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::SChar,    2,
    QMetaType::Void,

       0        // eod
};

void Userlist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Userlist *_t = static_cast<Userlist *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showAddWhiteOrBlackRole(); break;
        case 1: _t->loadUserListData((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 2: _t->addBtnSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Userlist::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Userlist::showAddWhiteOrBlackRole)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Userlist::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Userlist.data,
      qt_meta_data_Userlist,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Userlist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Userlist::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Userlist.stringdata0))
        return static_cast<void*>(const_cast< Userlist*>(this));
    return QDialog::qt_metacast(_clname);
}

int Userlist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Userlist::showAddWhiteOrBlackRole()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
