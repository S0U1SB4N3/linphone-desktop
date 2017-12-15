/****************************************************************************
** Meta object code from reading C++ file 'CoreManager.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/core/CoreManager.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CoreManager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CoreManager_t {
    QByteArrayData data[16];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoreManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoreManager_t qt_meta_stringdata_CoreManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CoreManager"
QT_MOC_LITERAL(1, 12, 11), // "coreCreated"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "coreStarted"
QT_MOC_LITERAL(4, 37, 16), // "chatModelCreated"
QT_MOC_LITERAL(5, 54, 26), // "std::shared_ptr<ChatModel>"
QT_MOC_LITERAL(6, 81, 9), // "chatModel"
QT_MOC_LITERAL(7, 91, 12), // "logsUploaded"
QT_MOC_LITERAL(8, 104, 3), // "url"
QT_MOC_LITERAL(9, 108, 24), // "createDetachedVcardModel"
QT_MOC_LITERAL(10, 133, 11), // "VcardModel*"
QT_MOC_LITERAL(11, 145, 21), // "forceRefreshRegisters"
QT_MOC_LITERAL(12, 167, 8), // "sendLogs"
QT_MOC_LITERAL(13, 176, 9), // "cleanLogs"
QT_MOC_LITERAL(14, 186, 7), // "version"
QT_MOC_LITERAL(15, 194, 11) // "downloadUrl"

    },
    "CoreManager\0coreCreated\0\0coreStarted\0"
    "chatModelCreated\0std::shared_ptr<ChatModel>\0"
    "chatModel\0logsUploaded\0url\0"
    "createDetachedVcardModel\0VcardModel*\0"
    "forceRefreshRegisters\0sendLogs\0cleanLogs\0"
    "version\0downloadUrl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoreManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,
       7,    1,   59,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   62,    2, 0x02 /* Public */,
      11,    0,   63,    2, 0x02 /* Public */,
      12,    0,   64,    2, 0x02 /* Public */,
      13,    0,   65,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // methods: parameters
    0x80000000 | 10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00095401,
      15, QMetaType::QString, 0x00095401,

       0        // eod
};

void CoreManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CoreManager *_t = static_cast<CoreManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coreCreated(); break;
        case 1: _t->coreStarted(); break;
        case 2: _t->chatModelCreated((*reinterpret_cast< const std::shared_ptr<ChatModel>(*)>(_a[1]))); break;
        case 3: _t->logsUploaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { VcardModel* _r = _t->createDetachedVcardModel();
            if (_a[0]) *reinterpret_cast< VcardModel**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->forceRefreshRegisters(); break;
        case 6: _t->sendLogs(); break;
        case 7: _t->cleanLogs(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CoreManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoreManager::coreCreated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CoreManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoreManager::coreStarted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CoreManager::*_t)(const std::shared_ptr<ChatModel> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoreManager::chatModelCreated)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CoreManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoreManager::logsUploaded)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CoreManager *_t = static_cast<CoreManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getVersion(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getDownloadUrl(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CoreManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CoreManager.data,
      qt_meta_data_CoreManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CoreManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoreManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CoreManager.stringdata0))
        return static_cast<void*>(const_cast< CoreManager*>(this));
    return QObject::qt_metacast(_clname);
}

int CoreManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CoreManager::coreCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CoreManager::coreStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CoreManager::chatModelCreated(const std::shared_ptr<ChatModel> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CoreManager::logsUploaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
