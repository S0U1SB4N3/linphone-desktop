/****************************************************************************
** Meta object code from reading C++ file 'App.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/app/App.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'App.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_App_t {
    QByteArrayData data[13];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_App_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_App_t qt_meta_stringdata_App = {
    {
QT_MOC_LITERAL(0, 0, 3), // "App"
QT_MOC_LITERAL(1, 4, 19), // "configLocaleChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "locale"
QT_MOC_LITERAL(4, 32, 7), // "restart"
QT_MOC_LITERAL(5, 40, 14), // "getCallsWindow"
QT_MOC_LITERAL(6, 55, 13), // "QQuickWindow*"
QT_MOC_LITERAL(7, 69, 17), // "getSettingsWindow"
QT_MOC_LITERAL(8, 87, 15), // "smartShowWindow"
QT_MOC_LITERAL(9, 103, 6), // "window"
QT_MOC_LITERAL(10, 110, 12), // "configLocale"
QT_MOC_LITERAL(11, 123, 16), // "availableLocales"
QT_MOC_LITERAL(12, 140, 9) // "qtVersion"

    },
    "App\0configLocaleChanged\0\0locale\0restart\0"
    "getCallsWindow\0QQuickWindow*\0"
    "getSettingsWindow\0smartShowWindow\0"
    "window\0configLocale\0availableLocales\0"
    "qtVersion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_App[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x02 /* Public */,
       5,    0,   43,    2, 0x02 /* Public */,
       7,    0,   44,    2, 0x02 /* Public */,
       8,    1,   45,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    QMetaType::Void,
    0x80000000 | 6,
    0x80000000 | 6,
    QMetaType::Void, 0x80000000 | 6,    9,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495103,
       3, QMetaType::QString, 0x00095401,
      11, QMetaType::QVariantList, 0x00095401,
      12, QMetaType::QString, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void App::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        App *_t = static_cast<App *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configLocaleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->restart(); break;
        case 2: { QQuickWindow* _r = _t->getCallsWindow();
            if (_a[0]) *reinterpret_cast< QQuickWindow**>(_a[0]) = std::move(_r); }  break;
        case 3: { QQuickWindow* _r = _t->getSettingsWindow();
            if (_a[0]) *reinterpret_cast< QQuickWindow**>(_a[0]) = std::move(_r); }  break;
        case 4: _t->smartShowWindow((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (App::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&App::configLocaleChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        App *_t = static_cast<App *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getConfigLocale(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getLocale(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->getAvailableLocales(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getQtVersion(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        App *_t = static_cast<App *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setConfigLocale(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject App::staticMetaObject = {
    { &SingleApplication::staticMetaObject, qt_meta_stringdata_App.data,
      qt_meta_data_App,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *App::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *App::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_App.stringdata0))
        return static_cast<void*>(const_cast< App*>(this));
    return SingleApplication::qt_metacast(_clname);
}

int App::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SingleApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void App::configLocaleChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
