/****************************************************************************
** Meta object code from reading C++ file 'addexemple.h'
**
** Created: Sun Jan 10 17:09:33 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addexemple.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addexemple.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddExemple[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddExemple[] = {
    "AddExemple\0\0ValidateTruth(Truth)\0"
    "sendTruth()\0"
};

const QMetaObject AddExemple::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AddExemple,
      qt_meta_data_AddExemple, 0 }
};

const QMetaObject *AddExemple::metaObject() const
{
    return &staticMetaObject;
}

void *AddExemple::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddExemple))
        return static_cast<void*>(const_cast< AddExemple*>(this));
    return QWidget::qt_metacast(_clname);
}

int AddExemple::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ValidateTruth((*reinterpret_cast< Truth(*)>(_a[1]))); break;
        case 1: sendTruth(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AddExemple::ValidateTruth(Truth _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
