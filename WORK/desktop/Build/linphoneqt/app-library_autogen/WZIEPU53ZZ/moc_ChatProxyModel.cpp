/****************************************************************************
** Meta object code from reading C++ file 'ChatProxyModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/chat/ChatProxyModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatProxyModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatProxyModel_t {
    QByteArrayData data[26];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatProxyModel_t qt_meta_stringdata_ChatProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ChatProxyModel"
QT_MOC_LITERAL(1, 15, 17), // "sipAddressChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "sipAddress"
QT_MOC_LITERAL(4, 45, 24), // "isRemoteComposingChanged"
QT_MOC_LITERAL(5, 70, 6), // "status"
QT_MOC_LITERAL(6, 77, 17), // "moreEntriesLoaded"
QT_MOC_LITERAL(7, 95, 1), // "n"
QT_MOC_LITERAL(8, 97, 22), // "entryTypeFilterChanged"
QT_MOC_LITERAL(9, 120, 20), // "ChatModel::EntryType"
QT_MOC_LITERAL(10, 141, 4), // "type"
QT_MOC_LITERAL(11, 146, 15), // "loadMoreEntries"
QT_MOC_LITERAL(12, 162, 18), // "setEntryTypeFilter"
QT_MOC_LITERAL(13, 181, 11), // "removeEntry"
QT_MOC_LITERAL(14, 193, 2), // "id"
QT_MOC_LITERAL(15, 196, 16), // "removeAllEntries"
QT_MOC_LITERAL(16, 213, 11), // "sendMessage"
QT_MOC_LITERAL(17, 225, 7), // "message"
QT_MOC_LITERAL(18, 233, 13), // "resendMessage"
QT_MOC_LITERAL(19, 247, 15), // "sendFileMessage"
QT_MOC_LITERAL(20, 263, 4), // "path"
QT_MOC_LITERAL(21, 268, 12), // "downloadFile"
QT_MOC_LITERAL(22, 281, 8), // "openFile"
QT_MOC_LITERAL(23, 290, 17), // "openFileDirectory"
QT_MOC_LITERAL(24, 308, 7), // "compose"
QT_MOC_LITERAL(25, 316, 17) // "isRemoteComposing"

    },
    "ChatProxyModel\0sipAddressChanged\0\0"
    "sipAddress\0isRemoteComposingChanged\0"
    "status\0moreEntriesLoaded\0n\0"
    "entryTypeFilterChanged\0ChatModel::EntryType\0"
    "type\0loadMoreEntries\0setEntryTypeFilter\0"
    "removeEntry\0id\0removeAllEntries\0"
    "sendMessage\0message\0resendMessage\0"
    "sendFileMessage\0path\0downloadFile\0"
    "openFile\0openFileDirectory\0compose\0"
    "isRemoteComposing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       2,  128, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       6,    1,   95,    2, 0x06 /* Public */,
       8,    1,   98,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    0,  101,    2, 0x02 /* Public */,
      12,    1,  102,    2, 0x02 /* Public */,
      13,    1,  105,    2, 0x02 /* Public */,
      15,    0,  108,    2, 0x02 /* Public */,
      16,    1,  109,    2, 0x02 /* Public */,
      18,    1,  112,    2, 0x02 /* Public */,
      19,    1,  115,    2, 0x02 /* Public */,
      21,    1,  118,    2, 0x02 /* Public */,
      22,    1,  121,    2, 0x02 /* Public */,
      23,    1,  124,    2, 0x02 /* Public */,
      24,    0,  127,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
      25, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void ChatProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChatProxyModel *_t = static_cast<ChatProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sipAddressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { bool _r = _t->isRemoteComposingChanged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->moreEntriesLoaded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->entryTypeFilterChanged((*reinterpret_cast< ChatModel::EntryType(*)>(_a[1]))); break;
        case 4: _t->loadMoreEntries(); break;
        case 5: _t->setEntryTypeFilter((*reinterpret_cast< ChatModel::EntryType(*)>(_a[1]))); break;
        case 6: _t->removeEntry((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->removeAllEntries(); break;
        case 8: _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->resendMessage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->sendFileMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->downloadFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->openFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->openFileDirectory((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->compose(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChatProxyModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatProxyModel::sipAddressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef bool (ChatProxyModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatProxyModel::isRemoteComposingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ChatProxyModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatProxyModel::moreEntriesLoaded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ChatProxyModel::*_t)(ChatModel::EntryType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatProxyModel::entryTypeFilterChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ChatProxyModel *_t = static_cast<ChatProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getSipAddress(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getIsRemoteComposing(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ChatProxyModel *_t = static_cast<ChatProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSipAddress(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ChatProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_ChatProxyModel.data,
      qt_meta_data_ChatProxyModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ChatProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatProxyModel.stringdata0))
        return static_cast<void*>(const_cast< ChatProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ChatProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
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
void ChatProxyModel::sipAddressChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
bool ChatProxyModel::isRemoteComposingChanged(bool _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
void ChatProxyModel::moreEntriesLoaded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChatProxyModel::entryTypeFilterChanged(ChatModel::EntryType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
