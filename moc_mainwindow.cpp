/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[28];
    char stringdata0[416];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "on_treeView_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "index"
QT_MOC_LITERAL(4, 38, 19), // "on_listView_clicked"
QT_MOC_LITERAL(5, 58, 8), // "readfile"
QT_MOC_LITERAL(6, 67, 4), // "path"
QT_MOC_LITERAL(7, 72, 4), // "type"
QT_MOC_LITERAL(8, 77, 13), // "iconActivated"
QT_MOC_LITERAL(9, 91, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(10, 125, 6), // "reason"
QT_MOC_LITERAL(11, 132, 17), // "on_fitBtn_clicked"
QT_MOC_LITERAL(12, 150, 18), // "on_openBtn_clicked"
QT_MOC_LITERAL(13, 169, 20), // "on_tree_tbtn_clicked"
QT_MOC_LITERAL(14, 190, 7), // "checked"
QT_MOC_LITERAL(15, 198, 20), // "on_list_tbtn_clicked"
QT_MOC_LITERAL(16, 219, 11), // "displayText"
QT_MOC_LITERAL(17, 231, 4), // "text"
QT_MOC_LITERAL(18, 236, 11), // "displayInfo"
QT_MOC_LITERAL(19, 248, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(20, 270, 4), // "arg1"
QT_MOC_LITERAL(21, 275, 25), // "on_listView_doubleClicked"
QT_MOC_LITERAL(22, 301, 26), // "on_zoomSlider_valueChanged"
QT_MOC_LITERAL(23, 328, 5), // "value"
QT_MOC_LITERAL(24, 334, 17), // "on_addBtn_clicked"
QT_MOC_LITERAL(25, 352, 20), // "on_deleteBtn_clicked"
QT_MOC_LITERAL(26, 373, 18), // "on_saveBtn_clicked"
QT_MOC_LITERAL(27, 392, 23) // "on_lineEdit_textChanged"

    },
    "MainWindow\0on_treeView_clicked\0\0index\0"
    "on_listView_clicked\0readfile\0path\0"
    "type\0iconActivated\0QSystemTrayIcon::ActivationReason\0"
    "reason\0on_fitBtn_clicked\0on_openBtn_clicked\0"
    "on_tree_tbtn_clicked\0checked\0"
    "on_list_tbtn_clicked\0displayText\0text\0"
    "displayInfo\0on_comboBox_activated\0"
    "arg1\0on_listView_doubleClicked\0"
    "on_zoomSlider_valueChanged\0value\0"
    "on_addBtn_clicked\0on_deleteBtn_clicked\0"
    "on_saveBtn_clicked\0on_lineEdit_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x08 /* Private */,
       4,    1,  102,    2, 0x08 /* Private */,
       5,    2,  105,    2, 0x08 /* Private */,
       8,    1,  110,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    0,  114,    2, 0x08 /* Private */,
      13,    1,  115,    2, 0x08 /* Private */,
      15,    1,  118,    2, 0x08 /* Private */,
      16,    1,  121,    2, 0x08 /* Private */,
      18,    1,  124,    2, 0x08 /* Private */,
      19,    1,  127,    2, 0x08 /* Private */,
      21,    1,  130,    2, 0x08 /* Private */,
      22,    1,  133,    2, 0x08 /* Private */,
      24,    0,  136,    2, 0x08 /* Private */,
      25,    0,  137,    2, 0x08 /* Private */,
      26,    0,  138,    2, 0x08 /* Private */,
      27,    1,  139,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_treeView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_listView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->readfile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->iconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 4: _t->on_fitBtn_clicked(); break;
        case 5: _t->on_openBtn_clicked(); break;
        case 6: _t->on_tree_tbtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_list_tbtn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->displayText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->displayInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_listView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->on_zoomSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_addBtn_clicked(); break;
        case 14: _t->on_deleteBtn_clicked(); break;
        case 15: _t->on_saveBtn_clicked(); break;
        case 16: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
