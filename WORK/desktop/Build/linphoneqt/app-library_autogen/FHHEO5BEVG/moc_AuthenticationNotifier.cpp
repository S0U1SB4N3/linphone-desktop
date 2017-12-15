/****************************************************************************
** Meta object code from reading C++ file 'AuthenticationNotifier.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/authentication/AuthenticationNotifier.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AuthenticationNotifier.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AuthenticationNotifier_t {
    QByteArrayData data[7];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuthenticationNotifier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuthenticationNotifier_t qt_meta_stringdata_AuthenticationNotifier = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AuthenticationNotifier"
QT_MOC_LITERAL(1, 23, 23), // "authenticationRequested"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 8), // "authInfo"
QT_MOC_LITERAL(4, 57, 5), // "realm"
QT_MOC_LITERAL(5, 63, 10), // "sipAddress"
QT_MOC_LITERAL(6, 74, 6) // "userId"

    },
    "AuthenticationNotifier\0authenticationRequested\0"
    "\0authInfo\0realm\0sipAddress\0userId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuthenticationNotifier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,

       0        // eod
};

void AuthenticationNotifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AuthenticationNotifier *_t = static_cast<AuthenticationNotifier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->authenticationRequested((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AuthenticationNotifier::*_t)(const QVariant & , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AuthenticationNotifier::authenticationRequested)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AuthenticationNotifier::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AuthenticationNotifier.data,
      qt_meta_data_AuthenticationNotifier,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AuthenticationNotifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuthenticationNotifier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AuthenticationNotifier.stringdata0))
        return static_cast<void*>(const_cast< AuthenticationNotifier*>(this));
    return QObject::qt_metacast(_clname);
}

int AuthenticationNotifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void AuthenticationNotifier::authenticationRequested(const QVariant & _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
