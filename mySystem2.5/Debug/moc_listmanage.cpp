/****************************************************************************
** Meta object code from reading C++ file 'listmanage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mySystem2.5/listmanage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listmanage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ListManage_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListManage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListManage_t qt_meta_stringdata_ListManage = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ListManage"
QT_MOC_LITERAL(1, 11, 14), // "comeToUserlist"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "loadlistManageData"
QT_MOC_LITERAL(4, 46, 14), // "addUserBtnSlot"
QT_MOC_LITERAL(5, 61, 13), // "searchBtnSlot"
QT_MOC_LITERAL(6, 75, 14) // "delUserBtnSlot"

    },
    "ListManage\0comeToUserlist\0\0"
    "loadlistManageData\0addUserBtnSlot\0"
    "searchBtnSlot\0delUserBtnSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListManage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   42,    2, 0x08 /* Private */,
       4,    0,   43,    2, 0x08 /* Private */,
       5,    0,   44,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::SChar,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ListManage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListManage *_t = static_cast<ListManage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->comeToUserlist((*reinterpret_cast< qint8(*)>(_a[1]))); break;
        case 1: _t->loadlistManageData(); break;
        case 2: _t->addUserBtnSlot(); break;
        case 3: _t->searchBtnSlot(); break;
        case 4: _t->delUserBtnSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ListManage::*_t)(qint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ListManage::comeToUserlist)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ListManage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ListManage.data,
      qt_meta_data_ListManage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ListManage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListManage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListManage.stringdata0))
        return static_cast<void*>(const_cast< ListManage*>(this));
    return QWidget::qt_metacast(_clname);
}

int ListManage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ListManage::comeToUserlist(qint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
