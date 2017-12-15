/****************************************************************************
** Meta object code from reading C++ file 'ConferenceModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/conference/ConferenceModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConferenceModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConferenceModel_t {
    QByteArrayData data[17];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConferenceModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConferenceModel_t qt_meta_stringdata_ConferenceModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ConferenceModel"
QT_MOC_LITERAL(1, 16, 12), // "countChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "count"
QT_MOC_LITERAL(4, 36, 17), // "microMutedChanged"
QT_MOC_LITERAL(5, 54, 6), // "status"
QT_MOC_LITERAL(6, 61, 16), // "recordingChanged"
QT_MOC_LITERAL(7, 78, 17), // "conferenceChanged"
QT_MOC_LITERAL(8, 96, 9), // "terminate"
QT_MOC_LITERAL(9, 106, 14), // "startRecording"
QT_MOC_LITERAL(10, 121, 13), // "stopRecording"
QT_MOC_LITERAL(11, 135, 4), // "join"
QT_MOC_LITERAL(12, 140, 5), // "leave"
QT_MOC_LITERAL(13, 146, 10), // "microMuted"
QT_MOC_LITERAL(14, 157, 7), // "microVu"
QT_MOC_LITERAL(15, 165, 9), // "recording"
QT_MOC_LITERAL(16, 175, 8) // "isInConf"

    },
    "ConferenceModel\0countChanged\0\0count\0"
    "microMutedChanged\0status\0recordingChanged\0"
    "conferenceChanged\0terminate\0startRecording\0"
    "stopRecording\0join\0leave\0microMuted\0"
    "microVu\0recording\0isInConf"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConferenceModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       7,    0,   68,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   69,    2, 0x01 /* Protected */,
       9,    0,   70,    2, 0x01 /* Protected */,
      10,    0,   71,    2, 0x01 /* Protected */,
      11,    0,   72,    2, 0x01 /* Protected */,
      12,    0,   73,    2, 0x01 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495001,
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::Float, 0x00095401,
      15, QMetaType::Bool, 0x00495001,
      16, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       0,
       2,
       3,

       0        // eod
};

void ConferenceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConferenceModel *_t = static_cast<ConferenceModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->microMutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->recordingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->conferenceChanged(); break;
        case 4: _t->terminate(); break;
        case 5: _t->startRecording(); break;
        case 6: _t->stopRecording(); break;
        case 7: _t->join(); break;
        case 8: _t->leave(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ConferenceModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConferenceModel::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ConferenceModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConferenceModel::microMutedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ConferenceModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConferenceModel::recordingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ConferenceModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConferenceModel::conferenceChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ConferenceModel *_t = static_cast<ConferenceModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getCount(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getMicroMuted(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getMicroVu(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getRecording(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isInConference(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ConferenceModel *_t = static_cast<ConferenceModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setMicroMuted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ConferenceModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_ConferenceModel.data,
      qt_meta_data_ConferenceModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ConferenceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConferenceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConferenceModel.stringdata0))
        return static_cast<void*>(const_cast< ConferenceModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ConferenceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ConferenceModel::countChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConferenceModel::microMutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConferenceModel::recordingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ConferenceModel::conferenceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
