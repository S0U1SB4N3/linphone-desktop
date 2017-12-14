/****************************************************************************
** Meta object code from reading C++ file 'ContactsListModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/contacts/ContactsListModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactsListModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactsListModel_t {
    QByteArrayData data[16];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactsListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactsListModel_t qt_meta_stringdata_ContactsListModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ContactsListModel"
QT_MOC_LITERAL(1, 18, 12), // "contactAdded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "ContactModel*"
QT_MOC_LITERAL(4, 46, 7), // "contact"
QT_MOC_LITERAL(5, 54, 14), // "contactRemoved"
QT_MOC_LITERAL(6, 69, 19), // "const ContactModel*"
QT_MOC_LITERAL(7, 89, 14), // "contactUpdated"
QT_MOC_LITERAL(8, 104, 15), // "sipAddressAdded"
QT_MOC_LITERAL(9, 120, 10), // "sipAddress"
QT_MOC_LITERAL(10, 131, 17), // "sipAddressRemoved"
QT_MOC_LITERAL(11, 149, 10), // "addContact"
QT_MOC_LITERAL(12, 160, 11), // "VcardModel*"
QT_MOC_LITERAL(13, 172, 10), // "vcardModel"
QT_MOC_LITERAL(14, 183, 13), // "removeContact"
QT_MOC_LITERAL(15, 197, 12) // "cleanAvatars"

    },
    "ContactsListModel\0contactAdded\0\0"
    "ContactModel*\0contact\0contactRemoved\0"
    "const ContactModel*\0contactUpdated\0"
    "sipAddressAdded\0sipAddress\0sipAddressRemoved\0"
    "addContact\0VcardModel*\0vcardModel\0"
    "removeContact\0cleanAvatars"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactsListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       7,    1,   60,    2, 0x06 /* Public */,
       8,    2,   63,    2, 0x06 /* Public */,
      10,    2,   68,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    1,   73,    2, 0x02 /* Public */,
      14,    1,   76,    2, 0x02 /* Public */,
      15,    0,   79,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    9,

 // methods: parameters
    0x80000000 | 3, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void ContactsListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContactsListModel *_t = static_cast<ContactsListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contactAdded((*reinterpret_cast< ContactModel*(*)>(_a[1]))); break;
        case 1: _t->contactRemoved((*reinterpret_cast< const ContactModel*(*)>(_a[1]))); break;
        case 2: _t->contactUpdated((*reinterpret_cast< ContactModel*(*)>(_a[1]))); break;
        case 3: _t->sipAddressAdded((*reinterpret_cast< ContactModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->sipAddressRemoved((*reinterpret_cast< ContactModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: { ContactModel* _r = _t->addContact((*reinterpret_cast< VcardModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ContactModel**>(_a[0]) = std::move(_r); }  break;
        case 6: _t->removeContact((*reinterpret_cast< ContactModel*(*)>(_a[1]))); break;
        case 7: _t->cleanAvatars(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactModel* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactModel* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactModel* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactModel* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VcardModel* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ContactModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ContactsListModel::*_t)(ContactModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContactsListModel::contactAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ContactsListModel::*_t)(const ContactModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContactsListModel::contactRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ContactsListModel::*_t)(ContactModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContactsListModel::contactUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ContactsListModel::*_t)(ContactModel * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContactsListModel::sipAddressAdded)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ContactsListModel::*_t)(ContactModel * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContactsListModel::sipAddressRemoved)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject ContactsListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_ContactsListModel.data,
      qt_meta_data_ContactsListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ContactsListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactsListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactsListModel.stringdata0))
        return static_cast<void*>(const_cast< ContactsListModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int ContactsListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void ContactsListModel::contactAdded(ContactModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ContactsListModel::contactRemoved(const ContactModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ContactsListModel::contactUpdated(ContactModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ContactsListModel::sipAddressAdded(ContactModel * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ContactsListModel::sipAddressRemoved(ContactModel * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
