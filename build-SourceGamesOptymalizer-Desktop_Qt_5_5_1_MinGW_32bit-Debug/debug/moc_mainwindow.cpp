/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 26), // "on_GoodConnection__clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "checked"
QT_MOC_LITERAL(4, 47, 25), // "on_BadConnection__clicked"
QT_MOC_LITERAL(5, 73, 21), // "on_checkBox_6_clicked"
QT_MOC_LITERAL(6, 95, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(7, 119, 4), // "arg1"
QT_MOC_LITERAL(8, 124, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(9, 144, 21), // "on_checkBox_2_clicked"
QT_MOC_LITERAL(10, 166, 21), // "on_checkBox_3_clicked"
QT_MOC_LITERAL(11, 188, 21), // "on_checkBox_4_clicked"
QT_MOC_LITERAL(12, 210, 21), // "on_checkBox_5_clicked"
QT_MOC_LITERAL(13, 232, 11), // "setTextEdit"
QT_MOC_LITERAL(14, 244, 10), // "AppendText"
QT_MOC_LITERAL(15, 255, 4), // "text"
QT_MOC_LITERAL(16, 260, 4), // "Save"
QT_MOC_LITERAL(17, 265, 6), // "SaveAs"
QT_MOC_LITERAL(18, 272, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(19, 294, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(20, 318, 26) // "on_actionSave_As_triggered"

    },
    "MainWindow\0on_GoodConnection__clicked\0"
    "\0checked\0on_BadConnection__clicked\0"
    "on_checkBox_6_clicked\0on_spinBox_valueChanged\0"
    "arg1\0on_checkBox_clicked\0on_checkBox_2_clicked\0"
    "on_checkBox_3_clicked\0on_checkBox_4_clicked\0"
    "on_checkBox_5_clicked\0setTextEdit\0"
    "AppendText\0text\0Save\0SaveAs\0"
    "on_pushButton_clicked\0on_actionSave_triggered\0"
    "on_actionSave_As_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x08 /* Private */,
       4,    1,   97,    2, 0x08 /* Private */,
       5,    1,  100,    2, 0x08 /* Private */,
       6,    1,  103,    2, 0x08 /* Private */,
       8,    1,  106,    2, 0x08 /* Private */,
       9,    1,  109,    2, 0x08 /* Private */,
      10,    1,  112,    2, 0x08 /* Private */,
      11,    1,  115,    2, 0x08 /* Private */,
      12,    1,  118,    2, 0x08 /* Private */,
      13,    0,  121,    2, 0x08 /* Private */,
      14,    1,  122,    2, 0x08 /* Private */,
      16,    0,  125,    2, 0x08 /* Private */,
      17,    0,  126,    2, 0x08 /* Private */,
      18,    0,  127,    2, 0x08 /* Private */,
      19,    0,  128,    2, 0x08 /* Private */,
      20,    0,  129,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_GoodConnection__clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_BadConnection__clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_checkBox_6_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_checkBox_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_checkBox_3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_checkBox_4_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_checkBox_5_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setTextEdit(); break;
        case 10: _t->AppendText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->Save(); break;
        case 12: _t->SaveAs(); break;
        case 13: _t->on_pushButton_clicked(); break;
        case 14: _t->on_actionSave_triggered(); break;
        case 15: _t->on_actionSave_As_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
