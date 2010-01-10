/****************************************************************************
** Meta object code from reading C++ file 'feedingtool.h'
**
** Created: Sun Jan 10 19:13:27 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "feedingtool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'feedingtool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FeedingTool[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      29,   12,   12,   12, 0x0a,
      40,   12,   12,   12, 0x0a,
      54,   12,   12,   12, 0x0a,
      67,   12,   12,   12, 0x0a,
      83,   81,   12,   12, 0x0a,
     107,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FeedingTool[] = {
    "FeedingTool\0\0addTruth(Truth)\0subTruth()\0"
    "updateTruth()\0getExemple()\0editExemple()\0"
    ",\0ChangeTruth(uint,Truth)\0Learning()\0"
};

const QMetaObject FeedingTool::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FeedingTool,
      qt_meta_data_FeedingTool, 0 }
};

const QMetaObject *FeedingTool::metaObject() const
{
    return &staticMetaObject;
}

void *FeedingTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FeedingTool))
        return static_cast<void*>(const_cast< FeedingTool*>(this));
    return QWidget::qt_metacast(_clname);
}

int FeedingTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addTruth((*reinterpret_cast< Truth(*)>(_a[1]))); break;
        case 1: subTruth(); break;
        case 2: updateTruth(); break;
        case 3: getExemple(); break;
        case 4: editExemple(); break;
        case 5: ChangeTruth((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< Truth(*)>(_a[2]))); break;
        case 6: Learning(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
