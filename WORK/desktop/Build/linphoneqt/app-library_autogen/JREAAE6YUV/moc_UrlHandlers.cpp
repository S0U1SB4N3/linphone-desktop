/****************************************************************************
** Meta object code from reading C++ file 'UrlHandlers.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/url-handlers/UrlHandlers.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UrlHandlers.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UrlHandlers_t {
    QByteArrayData data[6];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UrlHandlers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UrlHandlers_t qt_meta_stringdata_UrlHandlers = {
    {
QT_MOC_LITERAL(0, 0, 11), // "UrlHandlers"
QT_MOC_LITERAL(1, 12, 3), // "sip"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 10), // "sipAddress"
QT_MOC_LITERAL(4, 28, 9), // "handleSip"
QT_MOC_LITERAL(5, 38, 3) // "url"

    },
    "UrlHandlers\0sip\0\0sipAddress\0handleSip\0"
    "url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UrlHandlers[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    5,

       0        // eod
};

void UrlHandlers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UrlHandlers *_t = static_cast<UrlHandlers *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sip((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->handleSip((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UrlHandlers::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UrlHandlers::sip)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject UrlHandlers::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UrlHandlers.data,
      qt_meta_data_UrlHandlers,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UrlHandlers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UrlHandlers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UrlHandlers.stringdata0))
        return static_cast<void*>(const_cast< UrlHandlers*>(this));
    return QObject::qt_metacast(_clname);
}

int UrlHandlers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UrlHandlers::sip(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
