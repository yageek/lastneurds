/****************************************************************************
** Meta object code from reading C++ file 'networkmanager.h'
**
** Created: Mon Jan 4 11:49:58 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "networkmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetWorkManager[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      29,   15,   15,   15, 0x08,
      75,   42,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NetWorkManager[] = {
    "NetWorkManager\0\0AddNetWork()\0SubNetWork()\0"
    "NbrNeurons,NbrEntries,Index,name\0"
    "InsertRow(int,int,int,QString)\0"
};

const QMetaObject NetWorkManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NetWorkManager,
      qt_meta_data_NetWorkManager, 0 }
};

const QMetaObject *NetWorkManager::metaObject() const
{
    return &staticMetaObject;
}

void *NetWorkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetWorkManager))
        return static_cast<void*>(const_cast< NetWorkManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int NetWorkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: AddNetWork(); break;
        case 1: SubNetWork(); break;
        case 2: InsertRow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
