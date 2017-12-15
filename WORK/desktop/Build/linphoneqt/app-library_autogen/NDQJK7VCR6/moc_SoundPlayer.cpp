/****************************************************************************
** Meta object code from reading C++ file 'SoundPlayer.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/sound-player/SoundPlayer.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SoundPlayer.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SoundPlayer_t {
    QByteArrayData data[21];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoundPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoundPlayer_t qt_meta_stringdata_SoundPlayer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SoundPlayer"
QT_MOC_LITERAL(1, 12, 13), // "sourceChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "source"
QT_MOC_LITERAL(4, 34, 6), // "paused"
QT_MOC_LITERAL(5, 41, 7), // "playing"
QT_MOC_LITERAL(6, 49, 7), // "stopped"
QT_MOC_LITERAL(7, 57, 20), // "playbackStateChanged"
QT_MOC_LITERAL(8, 78, 13), // "PlaybackState"
QT_MOC_LITERAL(9, 92, 13), // "playbackState"
QT_MOC_LITERAL(10, 106, 5), // "pause"
QT_MOC_LITERAL(11, 112, 4), // "play"
QT_MOC_LITERAL(12, 117, 4), // "stop"
QT_MOC_LITERAL(13, 122, 4), // "seek"
QT_MOC_LITERAL(14, 127, 6), // "offset"
QT_MOC_LITERAL(15, 134, 11), // "getPosition"
QT_MOC_LITERAL(16, 146, 8), // "duration"
QT_MOC_LITERAL(17, 155, 12), // "PlayingState"
QT_MOC_LITERAL(18, 168, 11), // "PausedState"
QT_MOC_LITERAL(19, 180, 12), // "StoppedState"
QT_MOC_LITERAL(20, 193, 10) // "ErrorState"

    },
    "SoundPlayer\0sourceChanged\0\0source\0"
    "paused\0playing\0stopped\0playbackStateChanged\0"
    "PlaybackState\0playbackState\0pause\0"
    "play\0stop\0seek\0offset\0getPosition\0"
    "duration\0PlayingState\0PausedState\0"
    "StoppedState\0ErrorState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoundPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   80, // properties
       1,   92, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    0,   67,    2, 0x06 /* Public */,
       5,    0,   68,    2, 0x06 /* Public */,
       6,    0,   69,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   73,    2, 0x02 /* Public */,
      11,    0,   74,    2, 0x02 /* Public */,
      12,    0,   75,    2, 0x02 /* Public */,
      13,    1,   76,    2, 0x02 /* Public */,
      15,    0,   79,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Int,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       9, 0x80000000 | 8, 0x0049510b,
      16, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       4,
       0,

 // enums: name, flags, count, data
       8, 0x0,    4,   96,

 // enum data: key, value
      17, uint(SoundPlayer::PlayingState),
      18, uint(SoundPlayer::PausedState),
      19, uint(SoundPlayer::StoppedState),
      20, uint(SoundPlayer::ErrorState),

       0        // eod
};

void SoundPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SoundPlayer *_t = static_cast<SoundPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->paused(); break;
        case 2: _t->playing(); break;
        case 3: _t->stopped(); break;
        case 4: _t->playbackStateChanged((*reinterpret_cast< PlaybackState(*)>(_a[1]))); break;
        case 5: _t->pause(); break;
        case 6: _t->play(); break;
        case 7: _t->stop(); break;
        case 8: _t->seek((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: { int _r = _t->getPosition();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SoundPlayer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SoundPlayer::sourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SoundPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SoundPlayer::paused)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SoundPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SoundPlayer::playing)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SoundPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SoundPlayer::stopped)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SoundPlayer::*_t)(PlaybackState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SoundPlayer::playbackStateChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SoundPlayer *_t = static_cast<SoundPlayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getSource(); break;
        case 1: *reinterpret_cast< PlaybackState*>(_v) = _t->getPlaybackState(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getDuration(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SoundPlayer *_t = static_cast<SoundPlayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPlaybackState(*reinterpret_cast< PlaybackState*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SoundPlayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SoundPlayer.data,
      qt_meta_data_SoundPlayer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SoundPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoundPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SoundPlayer.stringdata0))
        return static_cast<void*>(const_cast< SoundPlayer*>(this));
    return QObject::qt_metacast(_clname);
}

int SoundPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SoundPlayer::sourceChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SoundPlayer::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SoundPlayer::playing()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SoundPlayer::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SoundPlayer::playbackStateChanged(PlaybackState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
