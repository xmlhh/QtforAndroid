/****************************************************************************
** Meta object code from reading C++ file 'MainWgt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LeonApp/MainWgt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWgt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWgt_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWgt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWgt_t qt_meta_stringdata_MainWgt = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MainWgt"
QT_MOC_LITERAL(1, 8, 10), // "OnUpingBtn"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 16), // "OnDownloadingBtn"
QT_MOC_LITERAL(4, 37, 14), // "OnUpSuccessBtn"
QT_MOC_LITERAL(5, 52, 20), // "OnDownloadSuccessBtn"
QT_MOC_LITERAL(6, 73, 17), // "OnGroupClickedBtn"
QT_MOC_LITERAL(7, 91, 16), // "QAbstractButton*"
QT_MOC_LITERAL(8, 108, 4) // "cBtn"

    },
    "MainWgt\0OnUpingBtn\0\0OnDownloadingBtn\0"
    "OnUpSuccessBtn\0OnDownloadSuccessBtn\0"
    "OnGroupClickedBtn\0QAbstractButton*\0"
    "cBtn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWgt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void MainWgt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWgt *_t = static_cast<MainWgt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnUpingBtn(); break;
        case 1: _t->OnDownloadingBtn(); break;
        case 2: _t->OnUpSuccessBtn(); break;
        case 3: _t->OnDownloadSuccessBtn(); break;
        case 4: _t->OnGroupClickedBtn((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWgt::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWgt.data,
      qt_meta_data_MainWgt,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWgt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWgt::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWgt.stringdata0))
        return static_cast<void*>(const_cast< MainWgt*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainWgt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
