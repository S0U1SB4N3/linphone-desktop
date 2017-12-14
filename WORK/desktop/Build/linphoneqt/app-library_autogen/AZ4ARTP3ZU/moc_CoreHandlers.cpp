/****************************************************************************
** Meta object code from reading C++ file 'CoreHandlers.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/core/CoreHandlers.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CoreHandlers.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CoreHandlers_t {
    QByteArrayData data[31];
    char stringdata0[615];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoreHandlers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoreHandlers_t qt_meta_stringdata_CoreHandlers = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CoreHandlers"
QT_MOC_LITERAL(1, 13, 23), // "authenticationRequested"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 35), // "std::shared_ptr<linphone::Aut..."
QT_MOC_LITERAL(4, 74, 8), // "authInfo"
QT_MOC_LITERAL(5, 83, 16), // "callStateChanged"
QT_MOC_LITERAL(6, 100, 31), // "std::shared_ptr<linphone::Call>"
QT_MOC_LITERAL(7, 132, 4), // "call"
QT_MOC_LITERAL(8, 137, 19), // "linphone::CallState"
QT_MOC_LITERAL(9, 157, 5), // "state"
QT_MOC_LITERAL(10, 163, 18), // "callTransferFailed"
QT_MOC_LITERAL(11, 182, 21), // "callTransferSucceeded"
QT_MOC_LITERAL(12, 204, 11), // "coreStarted"
QT_MOC_LITERAL(13, 216, 18), // "isComposingChanged"
QT_MOC_LITERAL(14, 235, 35), // "std::shared_ptr<linphone::Cha..."
QT_MOC_LITERAL(15, 271, 8), // "chatRoom"
QT_MOC_LITERAL(16, 280, 22), // "logsUploadStateChanged"
QT_MOC_LITERAL(17, 303, 38), // "linphone::CoreLogCollectionUp..."
QT_MOC_LITERAL(18, 342, 11), // "std::string"
QT_MOC_LITERAL(19, 354, 4), // "info"
QT_MOC_LITERAL(20, 359, 15), // "messageReceived"
QT_MOC_LITERAL(21, 375, 38), // "std::shared_ptr<linphone::Cha..."
QT_MOC_LITERAL(22, 414, 7), // "message"
QT_MOC_LITERAL(23, 422, 16), // "presenceReceived"
QT_MOC_LITERAL(24, 439, 10), // "sipAddress"
QT_MOC_LITERAL(25, 450, 46), // "std::shared_ptr<const linphon..."
QT_MOC_LITERAL(26, 497, 13), // "presenceModel"
QT_MOC_LITERAL(27, 511, 24), // "registrationStateChanged"
QT_MOC_LITERAL(28, 536, 38), // "std::shared_ptr<linphone::Pro..."
QT_MOC_LITERAL(29, 575, 11), // "proxyConfig"
QT_MOC_LITERAL(30, 587, 27) // "linphone::RegistrationState"

    },
    "CoreHandlers\0authenticationRequested\0"
    "\0std::shared_ptr<linphone::AuthInfo>\0"
    "authInfo\0callStateChanged\0"
    "std::shared_ptr<linphone::Call>\0call\0"
    "linphone::CallState\0state\0callTransferFailed\0"
    "callTransferSucceeded\0coreStarted\0"
    "isComposingChanged\0"
    "std::shared_ptr<linphone::ChatRoom>\0"
    "chatRoom\0logsUploadStateChanged\0"
    "linphone::CoreLogCollectionUploadState\0"
    "std::string\0info\0messageReceived\0"
    "std::shared_ptr<linphone::ChatMessage>\0"
    "message\0presenceReceived\0sipAddress\0"
    "std::shared_ptr<const linphone::PresenceModel>\0"
    "presenceModel\0registrationStateChanged\0"
    "std::shared_ptr<linphone::ProxyConfig>\0"
    "proxyConfig\0linphone::RegistrationState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoreHandlers[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    2,   67,    2, 0x06 /* Public */,
      10,    1,   72,    2, 0x06 /* Public */,
      11,    1,   75,    2, 0x06 /* Public */,
      12,    0,   78,    2, 0x06 /* Public */,
      13,    1,   79,    2, 0x06 /* Public */,
      16,    2,   82,    2, 0x06 /* Public */,
      20,    1,   87,    2, 0x06 /* Public */,
      23,    2,   90,    2, 0x06 /* Public */,
      27,    2,   95,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 18,    9,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 25,   24,   26,
    QMetaType::Void, 0x80000000 | 28, 0x80000000 | 30,   29,    9,

       0        // eod
};

void CoreHandlers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CoreHandlers *_t = static_cast<CoreHandlers *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->authenticationRequested((*reinterpret_cast< const std::shared_ptr<linphone::AuthInfo>(*)>(_a[1]))); break;
        case 1: _t->callStateChanged((*reinterpret_cast< const std::shared_ptr<linphone::Call>(*)>(_a[1])),(*reinterpret_cast< linphone::CallState(*)>(_a[2]))); break;
        case 2: _t->callTransferFailed((*reinterpret_cast< const std::shared_ptr<linphone::Call>(*)>(_a[1]))); break;
        case 3: _t->callTransferSucceeded((*reinterpret_cast< const std::shared_ptr<linphone::Call>(*)>(_a[1]))); break;
        case 4: _t->coreStarted(); break;
        case 5: _t->isComposingChanged((*reinterpret_cast< const std::shared_ptr<linphone::ChatRoom>(*)>(_a[1]))); break;
        case 6: _t->logsUploadStateChanged((*reinterpret_cast< linphone::CoreLogCollectionUploadState(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 7: _t->messageReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[1]))); break;
        case 8: _t->presenceReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::shared_ptr<const linphone::PresenceModel>(*)>(_a[2]))); break;
        case 9: _t->registrationStateChanged((*reinterpret_cast< const std::shared_ptr<linphone::ProxyConfig>(*)>(_a[1])),(*reinterpret_cast< linphone::RegistrationState(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CoreHandlers::*_t)(const std::shared_ptr<linphone::AuthInfo> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoreHandlers::authenticationRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CoreHandlers::*_t)(const std::shared_ptr<linphone::Call> & , linphone::CallState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoreHandlers::callStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CoreHandlers::*_t)(const std::shared_ptr<linphone::Call> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoreHandlers::callTransferFailed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CoreHandlers::*_t)(const std::shared_ptr<linphone::Call> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoreHandlers::callTransferSucceeded)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CoreHandlers::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoreHandlers::coreStarted)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CoreHandlers::*_t)(const std::shared_ptr<linphone::ChatRoom> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoreHandlers::isComposingChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (CoreHandlers::*_t)(linphone::CoreLogCollectionUploadState , const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoreHandlers::logsUploadStateChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (CoreHandlers::*_t)(const std::shared_ptr<linphone::ChatMessage> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoreHandlers::messageReceived)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (CoreHandlers::*_t)(const QString & , const std::shared_ptr<const linphone::PresenceModel> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoreHandlers::presenceReceived)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (CoreHandlers::*_t)(const std::shared_ptr<linphone::ProxyConfig> & , linphone::RegistrationState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoreHandlers::registrationStateChanged)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject CoreHandlers::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CoreHandlers.data,
      qt_meta_data_CoreHandlers,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CoreHandlers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoreHandlers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CoreHandlers.stringdata0))
        return static_cast<void*>(const_cast< CoreHandlers*>(this));
    if (!strcmp(_clname, "linphone::CoreListener"))
        return static_cast< linphone::CoreListener*>(const_cast< CoreHandlers*>(this));
    return QObject::qt_metacast(_clname);
}

int CoreHandlers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CoreHandlers::authenticationRequested(const std::shared_ptr<linphone::AuthInfo> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CoreHandlers::callStateChanged(const std::shared_ptr<linphone::Call> & _t1, linphone::CallState _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CoreHandlers::callTransferFailed(const std::shared_ptr<linphone::Call> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CoreHandlers::callTransferSucceeded(const std::shared_ptr<linphone::Call> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CoreHandlers::coreStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void CoreHandlers::isComposingChanged(const std::shared_ptr<linphone::ChatRoom> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CoreHandlers::logsUploadStateChanged(linphone::CoreLogCollectionUploadState _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CoreHandlers::messageReceived(const std::shared_ptr<linphone::ChatMessage> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CoreHandlers::presenceReceived(const QString & _t1, const std::shared_ptr<const linphone::PresenceModel> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CoreHandlers::registrationStateChanged(const std::shared_ptr<linphone::ProxyConfig> & _t1, linphone::RegistrationState _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
