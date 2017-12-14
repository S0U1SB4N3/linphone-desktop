/****************************************************************************
** Meta object code from reading C++ file 'CallsListModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/calls/CallsListModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CallsListModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CallsListModel_t {
    QByteArrayData data[12];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CallsListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CallsListModel_t qt_meta_stringdata_CallsListModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CallsListModel"
QT_MOC_LITERAL(1, 15, 11), // "callRunning"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "index"
QT_MOC_LITERAL(4, 34, 10), // "CallModel*"
QT_MOC_LITERAL(5, 45, 9), // "callModel"
QT_MOC_LITERAL(6, 55, 17), // "callTransferAsked"
QT_MOC_LITERAL(7, 73, 15), // "launchAudioCall"
QT_MOC_LITERAL(8, 89, 6), // "sipUri"
QT_MOC_LITERAL(9, 96, 15), // "launchVideoCall"
QT_MOC_LITERAL(10, 112, 21), // "getRunningCallsNumber"
QT_MOC_LITERAL(11, 134, 17) // "terminateAllCalls"

    },
    "CallsListModel\0callRunning\0\0index\0"
    "CallModel*\0callModel\0callTransferAsked\0"
    "launchAudioCall\0sipUri\0launchVideoCall\0"
    "getRunningCallsNumber\0terminateAllCalls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CallsListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   52,    2, 0x02 /* Public */,
       9,    1,   55,    2, 0x02 /* Public */,
      10,    0,   58,    2, 0x02 /* Public */,
      11,    0,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Int,
    QMetaType::Void,

       0        // eod
};

void CallsListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CallsListModel *_t = static_cast<CallsListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->callRunning((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< CallModel*(*)>(_a[2]))); break;
        case 1: _t->callTransferAsked((*reinterpret_cast< CallModel*(*)>(_a[1]))); break;
        case 2: _t->launchAudioCall((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->launchVideoCall((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { int _r = _t->getRunningCallsNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->terminateAllCalls(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CallModel* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CallModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CallsListModel::*_t)(int , CallModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CallsListModel::callRunning)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CallsListModel::*_t)(CallModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CallsListModel::callTransferAsked)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CallsListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_CallsListModel.data,
      qt_meta_data_CallsListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CallsListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallsListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CallsListModel.stringdata0))
        return static_cast<void*>(const_cast< CallsListModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int CallsListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CallsListModel::callRunning(int _t1, CallModel * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CallsListModel::callTransferAsked(CallModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
