/****************************************************************************
** Meta object code from reading C++ file 'pgintegrity.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mySystem2.5/pgintegrity.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pgintegrity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pgintegrity_t {
    QByteArrayData data[18];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pgintegrity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pgintegrity_t qt_meta_stringdata_pgintegrity = {
    {
QT_MOC_LITERAL(0, 0, 11), // "pgintegrity"
QT_MOC_LITERAL(1, 12, 19), // "loadpgintegrityData"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "clicked"
QT_MOC_LITERAL(4, 41, 5), // "index"
QT_MOC_LITERAL(5, 47, 8), // "vclicked"
QT_MOC_LITERAL(6, 56, 23), // "on_addtable_btn_clicked"
QT_MOC_LITERAL(7, 80, 10), // "judgeExist"
QT_MOC_LITERAL(8, 91, 14), // "QStandardItem*"
QT_MOC_LITERAL(9, 106, 4), // "root"
QT_MOC_LITERAL(10, 111, 9), // "tablename"
QT_MOC_LITERAL(11, 121, 10), // "addTrigger"
QT_MOC_LITERAL(12, 132, 12), // "QSqlDatabase"
QT_MOC_LITERAL(13, 145, 6), // "qsqldb"
QT_MOC_LITERAL(14, 152, 13), // "removeTrigger"
QT_MOC_LITERAL(15, 166, 12), // "judgeTrigger"
QT_MOC_LITERAL(16, 179, 26), // "on_removetable_btn_clicked"
QT_MOC_LITERAL(17, 206, 21) // "on_verify_btn_clicked"

    },
    "pgintegrity\0loadpgintegrityData\0\0"
    "clicked\0index\0vclicked\0on_addtable_btn_clicked\0"
    "judgeExist\0QStandardItem*\0root\0tablename\0"
    "addTrigger\0QSqlDatabase\0qsqldb\0"
    "removeTrigger\0judgeTrigger\0"
    "on_removetable_btn_clicked\0"
    "on_verify_btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pgintegrity[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    1,   65,    2, 0x08 /* Private */,
       5,    1,   68,    2, 0x08 /* Private */,
       6,    0,   71,    2, 0x08 /* Private */,
       7,    2,   72,    2, 0x08 /* Private */,
      11,    2,   77,    2, 0x08 /* Private */,
      14,    2,   82,    2, 0x08 /* Private */,
      15,    2,   87,    2, 0x08 /* Private */,
      16,    0,   92,    2, 0x08 /* Private */,
      17,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 8, QMetaType::QString,    9,   10,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 12,   10,   13,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 12,   10,   13,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 12,   10,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pgintegrity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pgintegrity *_t = static_cast<pgintegrity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadpgintegrityData(); break;
        case 1: _t->clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->vclicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_addtable_btn_clicked(); break;
        case 4: { bool _r = _t->judgeExist((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->addTrigger((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QSqlDatabase(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->removeTrigger((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QSqlDatabase(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->judgeTrigger((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QSqlDatabase(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->on_removetable_btn_clicked(); break;
        case 9: _t->on_verify_btn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject pgintegrity::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pgintegrity.data,
      qt_meta_data_pgintegrity,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pgintegrity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pgintegrity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pgintegrity.stringdata0))
        return static_cast<void*>(const_cast< pgintegrity*>(this));
    return QWidget::qt_metacast(_clname);
}

int pgintegrity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
