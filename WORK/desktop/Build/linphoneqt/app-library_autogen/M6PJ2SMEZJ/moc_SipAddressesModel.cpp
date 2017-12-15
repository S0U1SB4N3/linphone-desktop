/****************************************************************************
** Meta object code from reading C++ file 'SipAddressesModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/sip-addresses/SipAddressesModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SipAddressesModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SipAddressesModel_t {
    QByteArrayData data[15];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SipAddressesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SipAddressesModel_t qt_meta_stringdata_SipAddressesModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SipAddressesModel"
QT_MOC_LITERAL(1, 18, 4), // "find"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "sipAddress"
QT_MOC_LITERAL(4, 35, 22), // "mapSipAddressToContact"
QT_MOC_LITERAL(5, 58, 13), // "ContactModel*"
QT_MOC_LITERAL(6, 72, 21), // "getSipAddressObserver"
QT_MOC_LITERAL(7, 94, 19), // "SipAddressObserver*"
QT_MOC_LITERAL(8, 114, 26), // "getTransportFromSipAddress"
QT_MOC_LITERAL(9, 141, 24), // "addTransportToSipAddress"
QT_MOC_LITERAL(10, 166, 9), // "transport"
QT_MOC_LITERAL(11, 176, 12), // "interpretUrl"
QT_MOC_LITERAL(12, 189, 14), // "addressIsValid"
QT_MOC_LITERAL(13, 204, 7), // "address"
QT_MOC_LITERAL(14, 212, 17) // "sipAddressIsValid"

    },
    "SipAddressesModel\0find\0\0sipAddress\0"
    "mapSipAddressToContact\0ContactModel*\0"
    "getSipAddressObserver\0SipAddressObserver*\0"
    "getTransportFromSipAddress\0"
    "addTransportToSipAddress\0transport\0"
    "interpretUrl\0addressIsValid\0address\0"
    "sipAddressIsValid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SipAddressesModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x02 /* Public */,
       4,    1,   62,    2, 0x02 /* Public */,
       6,    1,   65,    2, 0x02 /* Public */,
       8,    1,   68,    2, 0x02 /* Public */,
       9,    2,   71,    2, 0x02 /* Public */,
      11,    1,   76,    2, 0x02 /* Public */,
      11,    1,   79,    2, 0x02 /* Public */,
      12,    1,   82,    2, 0x02 /* Public */,
      14,    1,   85,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QVariantMap, QMetaType::QString,    3,
    0x80000000 | 5, QMetaType::QString,    3,
    0x80000000 | 7, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,   10,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QUrl,    3,
    QMetaType::Bool, QMetaType::QString,   13,
    QMetaType::Bool, QMetaType::QString,    3,

       0        // eod
};

void SipAddressesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SipAddressesModel *_t = static_cast<SipAddressesModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QVariantMap _r = _t->find((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 1: { ContactModel* _r = _t->mapSipAddressToContact((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ContactModel**>(_a[0]) = std::move(_r); }  break;
        case 2: { SipAddressObserver* _r = _t->getSipAddressObserver((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< SipAddressObserver**>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getTransportFromSipAddress((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->addTransportToSipAddress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->interpretUrl((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->interpretUrl((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->addressIsValid((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->sipAddressIsValid((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject SipAddressesModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_SipAddressesModel.data,
      qt_meta_data_SipAddressesModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SipAddressesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SipAddressesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SipAddressesModel.stringdata0))
        return static_cast<void*>(const_cast< SipAddressesModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int SipAddressesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
