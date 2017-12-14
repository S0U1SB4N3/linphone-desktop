/****************************************************************************
** Meta object code from reading C++ file 'OwnPresenceModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/presence/OwnPresenceModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OwnPresenceModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OwnPresenceModel_t {
    QByteArrayData data[11];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OwnPresenceModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OwnPresenceModel_t qt_meta_stringdata_OwnPresenceModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OwnPresenceModel"
QT_MOC_LITERAL(1, 17, 20), // "presenceLevelChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "Presence::PresenceLevel"
QT_MOC_LITERAL(4, 63, 5), // "level"
QT_MOC_LITERAL(5, 69, 21), // "presenceStatusChanged"
QT_MOC_LITERAL(6, 91, 24), // "Presence::PresenceStatus"
QT_MOC_LITERAL(7, 116, 6), // "status"
QT_MOC_LITERAL(8, 123, 8), // "statuses"
QT_MOC_LITERAL(9, 132, 13), // "presenceLevel"
QT_MOC_LITERAL(10, 146, 14) // "presenceStatus"

    },
    "OwnPresenceModel\0presenceLevelChanged\0"
    "\0Presence::PresenceLevel\0level\0"
    "presenceStatusChanged\0Presence::PresenceStatus\0"
    "status\0statuses\0presenceLevel\0"
    "presenceStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OwnPresenceModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // properties: name, type, flags
       8, QMetaType::QVariantList, 0x00095401,
       9, 0x80000000 | 3, 0x00495009,
      10, 0x80000000 | 6, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

void OwnPresenceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OwnPresenceModel *_t = static_cast<OwnPresenceModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->presenceLevelChanged((*reinterpret_cast< Presence::PresenceLevel(*)>(_a[1]))); break;
        case 1: _t->presenceStatusChanged((*reinterpret_cast< Presence::PresenceStatus(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OwnPresenceModel::*_t)(Presence::PresenceLevel );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwnPresenceModel::presenceLevelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OwnPresenceModel::*_t)(Presence::PresenceStatus );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwnPresenceModel::presenceStatusChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        OwnPresenceModel *_t = static_cast<OwnPresenceModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->getStatuses(); break;
        case 1: *reinterpret_cast< Presence::PresenceLevel*>(_v) = _t->getPresenceLevel(); break;
        case 2: *reinterpret_cast< Presence::PresenceStatus*>(_v) = _t->getPresenceStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        OwnPresenceModel *_t = static_cast<OwnPresenceModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setPresenceStatus(*reinterpret_cast< Presence::PresenceStatus*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_OwnPresenceModel[] = {
        &Presence::staticMetaObject,
    nullptr
};

const QMetaObject OwnPresenceModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OwnPresenceModel.data,
      qt_meta_data_OwnPresenceModel,  qt_static_metacall, qt_meta_extradata_OwnPresenceModel, nullptr}
};


const QMetaObject *OwnPresenceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OwnPresenceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OwnPresenceModel.stringdata0))
        return static_cast<void*>(const_cast< OwnPresenceModel*>(this));
    return QObject::qt_metacast(_clname);
}

int OwnPresenceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OwnPresenceModel::presenceLevelChanged(Presence::PresenceLevel _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OwnPresenceModel::presenceStatusChanged(Presence::PresenceStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
