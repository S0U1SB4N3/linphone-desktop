/****************************************************************************
** Meta object code from reading C++ file 'ChatModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/chat/ChatModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatModel_t {
    QByteArrayData data[27];
    char stringdata0[484];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatModel_t qt_meta_stringdata_ChatModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ChatModel"
QT_MOC_LITERAL(1, 10, 24), // "isRemoteComposingChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "status"
QT_MOC_LITERAL(4, 43, 17), // "allEntriesRemoved"
QT_MOC_LITERAL(5, 61, 11), // "messageSent"
QT_MOC_LITERAL(6, 73, 38), // "std::shared_ptr<linphone::Cha..."
QT_MOC_LITERAL(7, 112, 7), // "message"
QT_MOC_LITERAL(8, 120, 15), // "messageReceived"
QT_MOC_LITERAL(9, 136, 18), // "messagesCountReset"
QT_MOC_LITERAL(10, 155, 9), // "EntryType"
QT_MOC_LITERAL(11, 165, 12), // "GenericEntry"
QT_MOC_LITERAL(12, 178, 12), // "MessageEntry"
QT_MOC_LITERAL(13, 191, 9), // "CallEntry"
QT_MOC_LITERAL(14, 201, 10), // "CallStatus"
QT_MOC_LITERAL(15, 212, 18), // "CallStatusDeclined"
QT_MOC_LITERAL(16, 231, 16), // "CallStatusMissed"
QT_MOC_LITERAL(17, 248, 17), // "CallStatusSuccess"
QT_MOC_LITERAL(18, 266, 13), // "MessageStatus"
QT_MOC_LITERAL(19, 280, 22), // "MessageStatusDelivered"
QT_MOC_LITERAL(20, 303, 28), // "MessageStatusDeliveredToUser"
QT_MOC_LITERAL(21, 332, 22), // "MessageStatusDisplayed"
QT_MOC_LITERAL(22, 355, 29), // "MessageStatusFileTransferDone"
QT_MOC_LITERAL(23, 385, 30), // "MessageStatusFileTransferError"
QT_MOC_LITERAL(24, 416, 17), // "MessageStatusIdle"
QT_MOC_LITERAL(25, 434, 23), // "MessageStatusInProgress"
QT_MOC_LITERAL(26, 458, 25) // "MessageStatusNotDelivered"

    },
    "ChatModel\0isRemoteComposingChanged\0\0"
    "status\0allEntriesRemoved\0messageSent\0"
    "std::shared_ptr<linphone::ChatMessage>\0"
    "message\0messageReceived\0messagesCountReset\0"
    "EntryType\0GenericEntry\0MessageEntry\0"
    "CallEntry\0CallStatus\0CallStatusDeclined\0"
    "CallStatusMissed\0CallStatusSuccess\0"
    "MessageStatus\0MessageStatusDelivered\0"
    "MessageStatusDeliveredToUser\0"
    "MessageStatusDisplayed\0"
    "MessageStatusFileTransferDone\0"
    "MessageStatusFileTransferError\0"
    "MessageStatusIdle\0MessageStatusInProgress\0"
    "MessageStatusNotDelivered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       3,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,
       8,    1,   46,    2, 0x06 /* Public */,
       9,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Bool, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

 // enums: name, flags, count, data
      10, 0x0,    3,   62,
      14, 0x0,    3,   68,
      18, 0x0,    8,   74,

 // enum data: key, value
      11, uint(ChatModel::GenericEntry),
      12, uint(ChatModel::MessageEntry),
      13, uint(ChatModel::CallEntry),
      15, uint(ChatModel::CallStatusDeclined),
      16, uint(ChatModel::CallStatusMissed),
      17, uint(ChatModel::CallStatusSuccess),
      19, uint(ChatModel::MessageStatusDelivered),
      20, uint(ChatModel::MessageStatusDeliveredToUser),
      21, uint(ChatModel::MessageStatusDisplayed),
      22, uint(ChatModel::MessageStatusFileTransferDone),
      23, uint(ChatModel::MessageStatusFileTransferError),
      24, uint(ChatModel::MessageStatusIdle),
      25, uint(ChatModel::MessageStatusInProgress),
      26, uint(ChatModel::MessageStatusNotDelivered),

       0        // eod
};

void ChatModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChatModel *_t = static_cast<ChatModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->isRemoteComposingChanged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->allEntriesRemoved(); break;
        case 2: _t->messageSent((*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[1]))); break;
        case 3: _t->messageReceived((*reinterpret_cast< const std::shared_ptr<linphone::ChatMessage>(*)>(_a[1]))); break;
        case 4: _t->messagesCountReset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef bool (ChatModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatModel::isRemoteComposingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ChatModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatModel::allEntriesRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ChatModel::*_t)(const std::shared_ptr<linphone::ChatMessage> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatModel::messageSent)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ChatModel::*_t)(const std::shared_ptr<linphone::ChatMessage> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatModel::messageReceived)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ChatModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatModel::messagesCountReset)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject ChatModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_ChatModel.data,
      qt_meta_data_ChatModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ChatModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatModel.stringdata0))
        return static_cast<void*>(const_cast< ChatModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int ChatModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
bool ChatModel::isRemoteComposingChanged(bool _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
void ChatModel::allEntriesRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ChatModel::messageSent(const std::shared_ptr<linphone::ChatMessage> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChatModel::messageReceived(const std::shared_ptr<linphone::ChatMessage> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ChatModel::messagesCountReset()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
