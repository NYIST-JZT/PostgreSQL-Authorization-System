/****************************************************************************
** Meta object code from reading C++ file 'roleauth.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mySystem2.5/roleauth.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roleauth.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoleAuth_t {
    QByteArrayData data[7];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoleAuth_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoleAuth_t qt_meta_stringdata_RoleAuth = {
    {
QT_MOC_LITERAL(0, 0, 8), // "RoleAuth"
QT_MOC_LITERAL(1, 9, 19), // "comeToAuthorization"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "comeToAuthCheck"
QT_MOC_LITERAL(4, 46, 16), // "loadRoleAuthData"
QT_MOC_LITERAL(5, 63, 13), // "doAuthBtnSlot"
QT_MOC_LITERAL(6, 77, 16) // "authCheckBtnSlot"

    },
    "RoleAuth\0comeToAuthorization\0\0"
    "comeToAuthCheck\0loadRoleAuthData\0"
    "doAuthBtnSlot\0authCheckBtnSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoleAuth[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   45,    2, 0x08 /* Private */,
       5,    0,   46,    2, 0x08 /* Private */,
       6,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RoleAuth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RoleAuth *_t = static_cast<RoleAuth *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->comeToAuthorization((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->comeToAuthCheck((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->loadRoleAuthData(); break;
        case 3: _t->doAuthBtnSlot(); break;
        case 4: _t->authCheckBtnSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RoleAuth::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoleAuth::comeToAuthorization)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RoleAuth::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoleAuth::comeToAuthCheck)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject RoleAuth::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RoleAuth.data,
      qt_meta_data_RoleAuth,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RoleAuth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoleAuth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoleAuth.stringdata0))
        return static_cast<void*>(const_cast< RoleAuth*>(this));
    return QWidget::qt_metacast(_clname);
}

int RoleAuth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void RoleAuth::comeToAuthorization(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RoleAuth::comeToAuthCheck(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
