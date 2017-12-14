/****************************************************************************
** Meta object code from reading C++ file 'AccountSettingsModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/settings/AccountSettingsModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccountSettingsModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccountSettingsModel_t {
    QByteArrayData data[28];
    char stringdata0[504];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccountSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccountSettingsModel_t qt_meta_stringdata_AccountSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AccountSettingsModel"
QT_MOC_LITERAL(1, 21, 22), // "accountSettingsUpdated"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 25), // "getProxyConfigDescription"
QT_MOC_LITERAL(4, 71, 38), // "std::shared_ptr<linphone::Pro..."
QT_MOC_LITERAL(5, 110, 11), // "proxyConfig"
QT_MOC_LITERAL(6, 122, 21), // "setDefaultProxyConfig"
QT_MOC_LITERAL(7, 144, 22), // "addOrUpdateProxyConfig"
QT_MOC_LITERAL(8, 167, 4), // "data"
QT_MOC_LITERAL(9, 172, 17), // "removeProxyConfig"
QT_MOC_LITERAL(10, 190, 17), // "createProxyConfig"
QT_MOC_LITERAL(11, 208, 11), // "addAuthInfo"
QT_MOC_LITERAL(12, 220, 35), // "std::shared_ptr<linphone::Aut..."
QT_MOC_LITERAL(13, 256, 8), // "authInfo"
QT_MOC_LITERAL(14, 265, 8), // "password"
QT_MOC_LITERAL(15, 274, 6), // "userId"
QT_MOC_LITERAL(16, 281, 17), // "eraseAllPasswords"
QT_MOC_LITERAL(17, 299, 8), // "username"
QT_MOC_LITERAL(18, 308, 10), // "sipAddress"
QT_MOC_LITERAL(19, 319, 17), // "registrationState"
QT_MOC_LITERAL(20, 337, 17), // "RegistrationState"
QT_MOC_LITERAL(21, 355, 18), // "primaryDisplayName"
QT_MOC_LITERAL(22, 374, 15), // "primaryUsername"
QT_MOC_LITERAL(23, 390, 17), // "primarySipAddress"
QT_MOC_LITERAL(24, 408, 8), // "accounts"
QT_MOC_LITERAL(25, 417, 27), // "RegistrationStateRegistered"
QT_MOC_LITERAL(26, 445, 30), // "RegistrationStateNotRegistered"
QT_MOC_LITERAL(27, 476, 27) // "RegistrationStateInProgress"

    },
    "AccountSettingsModel\0accountSettingsUpdated\0"
    "\0getProxyConfigDescription\0"
    "std::shared_ptr<linphone::ProxyConfig>\0"
    "proxyConfig\0setDefaultProxyConfig\0"
    "addOrUpdateProxyConfig\0data\0"
    "removeProxyConfig\0createProxyConfig\0"
    "addAuthInfo\0std::shared_ptr<linphone::AuthInfo>\0"
    "authInfo\0password\0userId\0eraseAllPasswords\0"
    "username\0sipAddress\0registrationState\0"
    "RegistrationState\0primaryDisplayName\0"
    "primaryUsername\0primarySipAddress\0"
    "accounts\0RegistrationStateRegistered\0"
    "RegistrationStateNotRegistered\0"
    "RegistrationStateInProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccountSettingsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   78, // properties
       1,  106, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x02 /* Public */,
       6,    1,   58,    2, 0x02 /* Public */,
       7,    2,   61,    2, 0x02 /* Public */,
       9,    1,   66,    2, 0x02 /* Public */,
      10,    0,   69,    2, 0x02 /* Public */,
      11,    3,   70,    2, 0x02 /* Public */,
      16,    0,   77,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariantMap, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Bool, 0x80000000 | 4, QMetaType::QVariantMap,    5,    8,
    QMetaType::Void, 0x80000000 | 4,    5,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString, QMetaType::QString,   13,   14,   15,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::QString, 0x00495103,
      18, QMetaType::QString, 0x00495001,
      19, 0x80000000 | 20, 0x00495009,
      21, QMetaType::QString, 0x00495103,
      22, QMetaType::QString, 0x00495103,
      23, QMetaType::QString, 0x00495001,
      24, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
      20, 0x0,    3,  110,

 // enum data: key, value
      25, uint(AccountSettingsModel::RegistrationStateRegistered),
      26, uint(AccountSettingsModel::RegistrationStateNotRegistered),
      27, uint(AccountSettingsModel::RegistrationStateInProgress),

       0        // eod
};

void AccountSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccountSettingsModel *_t = static_cast<AccountSettingsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accountSettingsUpdated(); break;
        case 1: { QVariantMap _r = _t->getProxyConfigDescription((*reinterpret_cast< const std::shared_ptr<linphone::ProxyConfig>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setDefaultProxyConfig((*reinterpret_cast< const std::shared_ptr<linphone::ProxyConfig>(*)>(_a[1]))); break;
        case 3: { bool _r = _t->addOrUpdateProxyConfig((*reinterpret_cast< const std::shared_ptr<linphone::ProxyConfig>(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->removeProxyConfig((*reinterpret_cast< const std::shared_ptr<linphone::ProxyConfig>(*)>(_a[1]))); break;
        case 5: { std::shared_ptr<linphone::ProxyConfig> _r = _t->createProxyConfig();
            if (_a[0]) *reinterpret_cast< std::shared_ptr<linphone::ProxyConfig>*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->addAuthInfo((*reinterpret_cast< const std::shared_ptr<linphone::AuthInfo>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->eraseAllPasswords(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ProxyConfig> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ProxyConfig> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ProxyConfig> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<linphone::ProxyConfig> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AccountSettingsModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountSettingsModel::accountSettingsUpdated)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AccountSettingsModel *_t = static_cast<AccountSettingsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getUsername(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getSipAddress(); break;
        case 2: *reinterpret_cast< RegistrationState*>(_v) = _t->getRegistrationState(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getPrimaryDisplayName(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getPrimaryUsername(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getPrimarySipAddress(); break;
        case 6: *reinterpret_cast< QVariantList*>(_v) = _t->getAccounts(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AccountSettingsModel *_t = static_cast<AccountSettingsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPrimaryDisplayName(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setPrimaryUsername(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject AccountSettingsModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AccountSettingsModel.data,
      qt_meta_data_AccountSettingsModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AccountSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccountSettingsModel.stringdata0))
        return static_cast<void*>(const_cast< AccountSettingsModel*>(this));
    return QObject::qt_metacast(_clname);
}

int AccountSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AccountSettingsModel::accountSettingsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
