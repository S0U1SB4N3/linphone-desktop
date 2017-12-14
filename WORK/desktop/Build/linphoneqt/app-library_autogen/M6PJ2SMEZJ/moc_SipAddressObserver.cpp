/****************************************************************************
** Meta object code from reading C++ file 'SipAddressObserver.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/sip-addresses/SipAddressObserver.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SipAddressObserver.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SipAddressObserver_t {
    QByteArrayData data[11];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SipAddressObserver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SipAddressObserver_t qt_meta_stringdata_SipAddressObserver = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SipAddressObserver"
QT_MOC_LITERAL(1, 19, 14), // "contactChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "ContactModel*"
QT_MOC_LITERAL(4, 49, 7), // "contact"
QT_MOC_LITERAL(5, 57, 21), // "presenceStatusChanged"
QT_MOC_LITERAL(6, 79, 24), // "Presence::PresenceStatus"
QT_MOC_LITERAL(7, 104, 14), // "presenceStatus"
QT_MOC_LITERAL(8, 119, 26), // "unreadMessagesCountChanged"
QT_MOC_LITERAL(9, 146, 19), // "unreadMessagesCount"
QT_MOC_LITERAL(10, 166, 10) // "sipAddress"

    },
    "SipAddressObserver\0contactChanged\0\0"
    "ContactModel*\0contact\0presenceStatusChanged\0"
    "Presence::PresenceStatus\0presenceStatus\0"
    "unreadMessagesCountChanged\0"
    "unreadMessagesCount\0sipAddress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SipAddressObserver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       8,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00095401,
       4, 0x80000000 | 3, 0x00495009,
       7, 0x80000000 | 6, 0x00495009,
       9, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

       0        // eod
};

void SipAddressObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SipAddressObserver *_t = static_cast<SipAddressObserver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contactChanged((*reinterpret_cast< ContactModel*(*)>(_a[1]))); break;
        case 1: _t->presenceStatusChanged((*reinterpret_cast< const Presence::PresenceStatus(*)>(_a[1]))); break;
        case 2: _t->unreadMessagesCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SipAddressObserver::*_t)(ContactModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SipAddressObserver::contactChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SipAddressObserver::*_t)(const Presence::PresenceStatus & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SipAddressObserver::presenceStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SipAddressObserver::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SipAddressObserver::unreadMessagesCountChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SipAddressObserver *_t = static_cast<SipAddressObserver *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getSipAddress(); break;
        case 1: *reinterpret_cast< ContactModel**>(_v) = _t->getContact(); break;
        case 2: *reinterpret_cast< Presence::PresenceStatus*>(_v) = _t->getPresenceStatus(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getUnreadMessagesCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_SipAddressObserver[] = {
        &Presence::staticMetaObject,
    nullptr
};

const QMetaObject SipAddressObserver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SipAddressObserver.data,
      qt_meta_data_SipAddressObserver,  qt_static_metacall, qt_meta_extradata_SipAddressObserver, nullptr}
};


const QMetaObject *SipAddressObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SipAddressObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SipAddressObserver.stringdata0))
        return static_cast<void*>(const_cast< SipAddressObserver*>(this));
    return QObject::qt_metacast(_clname);
}

int SipAddressObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SipAddressObserver::contactChanged(ContactModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SipAddressObserver::presenceStatusChanged(const Presence::PresenceStatus & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SipAddressObserver::unreadMessagesCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
