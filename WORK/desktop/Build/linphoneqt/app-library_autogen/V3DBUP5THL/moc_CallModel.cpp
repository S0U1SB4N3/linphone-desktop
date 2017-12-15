/****************************************************************************
** Meta object code from reading C++ file 'CallModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/call/CallModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CallModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CallModel_t {
    QByteArrayData data[60];
    char stringdata0[796];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CallModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CallModel_t qt_meta_stringdata_CallModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CallModel"
QT_MOC_LITERAL(1, 10, 16), // "callErrorChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "callError"
QT_MOC_LITERAL(4, 38, 21), // "isInConferenceChanged"
QT_MOC_LITERAL(5, 60, 6), // "status"
QT_MOC_LITERAL(6, 67, 17), // "microMutedChanged"
QT_MOC_LITERAL(7, 85, 16), // "recordingChanged"
QT_MOC_LITERAL(8, 102, 12), // "statsUpdated"
QT_MOC_LITERAL(9, 115, 13), // "statusChanged"
QT_MOC_LITERAL(10, 129, 10), // "CallStatus"
QT_MOC_LITERAL(11, 140, 14), // "videoRequested"
QT_MOC_LITERAL(12, 155, 15), // "securityUpdated"
QT_MOC_LITERAL(13, 171, 24), // "cameraFirstFrameReceived"
QT_MOC_LITERAL(14, 196, 5), // "width"
QT_MOC_LITERAL(15, 202, 6), // "height"
QT_MOC_LITERAL(16, 209, 6), // "accept"
QT_MOC_LITERAL(17, 216, 15), // "acceptWithVideo"
QT_MOC_LITERAL(18, 232, 9), // "terminate"
QT_MOC_LITERAL(19, 242, 14), // "askForTransfer"
QT_MOC_LITERAL(20, 257, 10), // "transferTo"
QT_MOC_LITERAL(21, 268, 10), // "sipAddress"
QT_MOC_LITERAL(22, 279, 18), // "acceptVideoRequest"
QT_MOC_LITERAL(23, 298, 18), // "rejectVideoRequest"
QT_MOC_LITERAL(24, 317, 12), // "takeSnapshot"
QT_MOC_LITERAL(25, 330, 14), // "startRecording"
QT_MOC_LITERAL(26, 345, 13), // "stopRecording"
QT_MOC_LITERAL(27, 359, 8), // "sendDtmf"
QT_MOC_LITERAL(28, 368, 4), // "dtmf"
QT_MOC_LITERAL(29, 373, 25), // "verifyAuthenticationToken"
QT_MOC_LITERAL(30, 399, 6), // "verify"
QT_MOC_LITERAL(31, 406, 10), // "isOutgoing"
QT_MOC_LITERAL(32, 417, 14), // "isInConference"
QT_MOC_LITERAL(33, 432, 8), // "duration"
QT_MOC_LITERAL(34, 441, 7), // "quality"
QT_MOC_LITERAL(35, 449, 7), // "microVu"
QT_MOC_LITERAL(36, 457, 9), // "speakerVu"
QT_MOC_LITERAL(37, 467, 10), // "microMuted"
QT_MOC_LITERAL(38, 478, 12), // "pausedByUser"
QT_MOC_LITERAL(39, 491, 12), // "videoEnabled"
QT_MOC_LITERAL(40, 504, 8), // "updating"
QT_MOC_LITERAL(41, 513, 9), // "recording"
QT_MOC_LITERAL(42, 523, 10), // "audioStats"
QT_MOC_LITERAL(43, 534, 10), // "videoStats"
QT_MOC_LITERAL(44, 545, 10), // "encryption"
QT_MOC_LITERAL(45, 556, 14), // "CallEncryption"
QT_MOC_LITERAL(46, 571, 9), // "isSecured"
QT_MOC_LITERAL(47, 581, 8), // "localSas"
QT_MOC_LITERAL(48, 590, 9), // "remoteSas"
QT_MOC_LITERAL(49, 600, 13), // "securedString"
QT_MOC_LITERAL(50, 614, 19), // "CallStatusConnected"
QT_MOC_LITERAL(51, 634, 15), // "CallStatusEnded"
QT_MOC_LITERAL(52, 650, 14), // "CallStatusIdle"
QT_MOC_LITERAL(53, 665, 18), // "CallStatusIncoming"
QT_MOC_LITERAL(54, 684, 18), // "CallStatusOutgoing"
QT_MOC_LITERAL(55, 703, 16), // "CallStatusPaused"
QT_MOC_LITERAL(56, 720, 18), // "CallEncryptionNone"
QT_MOC_LITERAL(57, 739, 18), // "CallEncryptionDtls"
QT_MOC_LITERAL(58, 758, 18), // "CallEncryptionSrtp"
QT_MOC_LITERAL(59, 777, 18) // "CallEncryptionZrtp"

    },
    "CallModel\0callErrorChanged\0\0callError\0"
    "isInConferenceChanged\0status\0"
    "microMutedChanged\0recordingChanged\0"
    "statsUpdated\0statusChanged\0CallStatus\0"
    "videoRequested\0securityUpdated\0"
    "cameraFirstFrameReceived\0width\0height\0"
    "accept\0acceptWithVideo\0terminate\0"
    "askForTransfer\0transferTo\0sipAddress\0"
    "acceptVideoRequest\0rejectVideoRequest\0"
    "takeSnapshot\0startRecording\0stopRecording\0"
    "sendDtmf\0dtmf\0verifyAuthenticationToken\0"
    "verify\0isOutgoing\0isInConference\0"
    "duration\0quality\0microVu\0speakerVu\0"
    "microMuted\0pausedByUser\0videoEnabled\0"
    "updating\0recording\0audioStats\0videoStats\0"
    "encryption\0CallEncryption\0isSecured\0"
    "localSas\0remoteSas\0securedString\0"
    "CallStatusConnected\0CallStatusEnded\0"
    "CallStatusIdle\0CallStatusIncoming\0"
    "CallStatusOutgoing\0CallStatusPaused\0"
    "CallEncryptionNone\0CallEncryptionDtls\0"
    "CallEncryptionSrtp\0CallEncryptionZrtp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CallModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
      21,  160, // properties
       2,  244, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       4,    1,  122,    2, 0x06 /* Public */,
       6,    1,  125,    2, 0x06 /* Public */,
       7,    1,  128,    2, 0x06 /* Public */,
       8,    0,  131,    2, 0x06 /* Public */,
       9,    1,  132,    2, 0x06 /* Public */,
      11,    0,  135,    2, 0x06 /* Public */,
      12,    0,  136,    2, 0x06 /* Public */,
      13,    2,  137,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      16,    0,  142,    2, 0x02 /* Public */,
      17,    0,  143,    2, 0x02 /* Public */,
      18,    0,  144,    2, 0x02 /* Public */,
      19,    0,  145,    2, 0x02 /* Public */,
      20,    1,  146,    2, 0x02 /* Public */,
      22,    0,  149,    2, 0x02 /* Public */,
      23,    0,  150,    2, 0x02 /* Public */,
      24,    0,  151,    2, 0x02 /* Public */,
      25,    0,  152,    2, 0x02 /* Public */,
      26,    0,  153,    2, 0x02 /* Public */,
      27,    1,  154,    2, 0x02 /* Public */,
      29,    1,  157,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   14,   15,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::Bool,   30,

 // properties: name, type, flags
      21, QMetaType::QString, 0x00095401,
       5, 0x80000000 | 10, 0x00495009,
       3, QMetaType::QString, 0x00495001,
      31, QMetaType::Bool, 0x00095401,
      32, QMetaType::Bool, 0x00495001,
      33, QMetaType::Int, 0x00095401,
      34, QMetaType::Float, 0x00095401,
      35, QMetaType::Float, 0x00095401,
      36, QMetaType::Float, 0x00095401,
      37, QMetaType::Bool, 0x00495103,
      38, QMetaType::Bool, 0x00495103,
      39, QMetaType::Bool, 0x00495103,
      40, QMetaType::Bool, 0x00495001,
      41, QMetaType::Bool, 0x00495001,
      42, QMetaType::QVariantList, 0x00495001,
      43, QMetaType::QVariantList, 0x00495001,
      44, 0x80000000 | 45, 0x00495009,
      46, QMetaType::Bool, 0x00495001,
      47, QMetaType::QString, 0x00495001,
      48, QMetaType::QString, 0x00495001,
      49, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       5,
       0,
       0,
       1,
       0,
       0,
       0,
       0,
       2,
       5,
       5,
       5,
       3,
       4,
       4,
       7,
       7,
       7,
       7,
       7,

 // enums: name, flags, count, data
      10, 0x0,    6,  252,
      45, 0x0,    4,  264,

 // enum data: key, value
      50, uint(CallModel::CallStatusConnected),
      51, uint(CallModel::CallStatusEnded),
      52, uint(CallModel::CallStatusIdle),
      53, uint(CallModel::CallStatusIncoming),
      54, uint(CallModel::CallStatusOutgoing),
      55, uint(CallModel::CallStatusPaused),
      56, uint(CallModel::CallEncryptionNone),
      57, uint(CallModel::CallEncryptionDtls),
      58, uint(CallModel::CallEncryptionSrtp),
      59, uint(CallModel::CallEncryptionZrtp),

       0        // eod
};

void CallModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CallModel *_t = static_cast<CallModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->callErrorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->isInConferenceChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->microMutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->recordingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->statsUpdated(); break;
        case 5: _t->statusChanged((*reinterpret_cast< CallStatus(*)>(_a[1]))); break;
        case 6: _t->videoRequested(); break;
        case 7: _t->securityUpdated(); break;
        case 8: _t->cameraFirstFrameReceived((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 9: _t->accept(); break;
        case 10: _t->acceptWithVideo(); break;
        case 11: _t->terminate(); break;
        case 12: _t->askForTransfer(); break;
        case 13: { bool _r = _t->transferTo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->acceptVideoRequest(); break;
        case 15: _t->rejectVideoRequest(); break;
        case 16: _t->takeSnapshot(); break;
        case 17: _t->startRecording(); break;
        case 18: _t->stopRecording(); break;
        case 19: _t->sendDtmf((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->verifyAuthenticationToken((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CallModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CallModel::callErrorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CallModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CallModel::isInConferenceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CallModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CallModel::microMutedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CallModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CallModel::recordingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CallModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CallModel::statsUpdated)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CallModel::*_t)(CallStatus );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CallModel::statusChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (CallModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CallModel::videoRequested)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (CallModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CallModel::securityUpdated)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (CallModel::*_t)(unsigned int , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CallModel::cameraFirstFrameReceived)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CallModel *_t = static_cast<CallModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getSipAddress(); break;
        case 1: *reinterpret_cast< CallStatus*>(_v) = _t->getStatus(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getCallError(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isOutgoing(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isInConference(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getDuration(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getQuality(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getMicroVu(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->getSpeakerVu(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getMicroMuted(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getPausedByUser(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getVideoEnabled(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getUpdating(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->getRecording(); break;
        case 14: *reinterpret_cast< QVariantList*>(_v) = _t->getAudioStats(); break;
        case 15: *reinterpret_cast< QVariantList*>(_v) = _t->getVideoStats(); break;
        case 16: *reinterpret_cast< CallEncryption*>(_v) = _t->getEncryption(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->isSecured(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->getLocalSas(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->getRemoteSas(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->getSecuredString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CallModel *_t = static_cast<CallModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 9: _t->setMicroMuted(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setPausedByUser(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setVideoEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CallModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CallModel.data,
      qt_meta_data_CallModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CallModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CallModel.stringdata0))
        return static_cast<void*>(const_cast< CallModel*>(this));
    return QObject::qt_metacast(_clname);
}

int CallModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 21;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CallModel::callErrorChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CallModel::isInConferenceChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CallModel::microMutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CallModel::recordingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CallModel::statsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void CallModel::statusChanged(CallStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CallModel::videoRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void CallModel::securityUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void CallModel::cameraFirstFrameReceived(unsigned int _t1, unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
