/****************************************************************************
** Meta object code from reading C++ file 'elm.h'
**
** Created: Fri 8. May 14:47:59 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OBD-Scaner/elm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ELM[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    5,    4,    4, 0x0a,
      59,   48,   43,    4, 0x0a,
      81,    4,    4,    4, 0x0a,
     102,   97,   43,    4, 0x0a,
     126,    4,   43,    4, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ELM[] = {
    "ELM\0\0list\0slotPrintAllDevices(QStringList)\0"
    "bool\0namedevice\0slotOpenPort(QString)\0"
    "slotClosePort()\0Data\0slotWriteELMDate(char*)\0"
    "slotDataReceive()\0"
};

const QMetaObject ELM::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ELM,
      qt_meta_data_ELM, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ELM::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ELM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ELM::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ELM))
        return static_cast<void*>(const_cast< ELM*>(this));
    return QObject::qt_metacast(_clname);
}

int ELM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotPrintAllDevices((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: { bool _r = slotOpenPort((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: slotClosePort(); break;
        case 3: { bool _r = slotWriteELMDate((*reinterpret_cast< char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = slotDataReceive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
