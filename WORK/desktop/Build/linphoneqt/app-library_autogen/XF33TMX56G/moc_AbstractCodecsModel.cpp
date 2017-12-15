/****************************************************************************
** Meta object code from reading C++ file 'AbstractCodecsModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/codecs/AbstractCodecsModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractCodecsModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractCodecsModel_t {
    QByteArrayData data[12];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractCodecsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractCodecsModel_t qt_meta_stringdata_AbstractCodecsModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AbstractCodecsModel"
QT_MOC_LITERAL(1, 20, 11), // "enableCodec"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 2), // "id"
QT_MOC_LITERAL(4, 36, 6), // "status"
QT_MOC_LITERAL(5, 43, 9), // "moveCodec"
QT_MOC_LITERAL(6, 53, 6), // "source"
QT_MOC_LITERAL(7, 60, 11), // "destination"
QT_MOC_LITERAL(8, 72, 10), // "setBitrate"
QT_MOC_LITERAL(9, 83, 7), // "bitrate"
QT_MOC_LITERAL(10, 91, 11), // "setRecvFmtp"
QT_MOC_LITERAL(11, 103, 8) // "recvFmtp"

    },
    "AbstractCodecsModel\0enableCodec\0\0id\0"
    "status\0moveCodec\0source\0destination\0"
    "setBitrate\0bitrate\0setRecvFmtp\0recvFmtp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractCodecsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x02 /* Public */,
       5,    2,   39,    2, 0x02 /* Public */,
       8,    2,   44,    2, 0x02 /* Public */,
      10,    2,   49,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,   11,

       0        // eod
};

void AbstractCodecsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractCodecsModel *_t = static_cast<AbstractCodecsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enableCodec((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->moveCodec((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setBitrate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setRecvFmtp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject AbstractCodecsModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_AbstractCodecsModel.data,
      qt_meta_data_AbstractCodecsModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AbstractCodecsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractCodecsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractCodecsModel.stringdata0))
        return static_cast<void*>(const_cast< AbstractCodecsModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int AbstractCodecsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
