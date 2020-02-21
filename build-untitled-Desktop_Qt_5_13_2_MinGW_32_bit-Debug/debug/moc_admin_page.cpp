/****************************************************************************
** Meta object code from reading C++ file 'admin_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../untitled/admin_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_admin_t {
    QByteArrayData data[21];
    char stringdata0[386];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_admin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_admin_t qt_meta_stringdata_admin = {
    {
QT_MOC_LITERAL(0, 0, 5), // "admin"
QT_MOC_LITERAL(1, 6, 21), // "on_new_course_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 22), // "on_new_student_clicked"
QT_MOC_LITERAL(4, 52, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 74, 9), // "hide_tabs"
QT_MOC_LITERAL(6, 84, 22), // "on_new_teacher_clicked"
QT_MOC_LITERAL(7, 107, 19), // "on_teaching_clicked"
QT_MOC_LITERAL(8, 127, 18), // "on_advisor_clicked"
QT_MOC_LITERAL(9, 146, 21), // "on_course_add_clicked"
QT_MOC_LITERAL(10, 168, 16), // "on_i_add_clicked"
QT_MOC_LITERAL(11, 185, 16), // "on_s_add_clicked"
QT_MOC_LITERAL(12, 202, 16), // "on_t_add_clicked"
QT_MOC_LITERAL(13, 219, 17), // "on_assign_clicked"
QT_MOC_LITERAL(14, 237, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(15, 261, 19), // "on_s_id_textChanged"
QT_MOC_LITERAL(16, 281, 4), // "arg1"
QT_MOC_LITERAL(17, 286, 25), // "on_teaches_id_textChanged"
QT_MOC_LITERAL(18, 312, 19), // "on_i_id_textChanged"
QT_MOC_LITERAL(19, 332, 25), // "on_advisor_id_textChanged"
QT_MOC_LITERAL(20, 358, 27) // "on_student_id_2_textChanged"

    },
    "admin\0on_new_course_clicked\0\0"
    "on_new_student_clicked\0on_pushButton_clicked\0"
    "hide_tabs\0on_new_teacher_clicked\0"
    "on_teaching_clicked\0on_advisor_clicked\0"
    "on_course_add_clicked\0on_i_add_clicked\0"
    "on_s_add_clicked\0on_t_add_clicked\0"
    "on_assign_clicked\0on_pushButton_2_clicked\0"
    "on_s_id_textChanged\0arg1\0"
    "on_teaches_id_textChanged\0on_i_id_textChanged\0"
    "on_advisor_id_textChanged\0"
    "on_student_id_2_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_admin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08 /* Private */,
       3,    0,  105,    2, 0x08 /* Private */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    1,  107,    2, 0x08 /* Private */,
       6,    0,  110,    2, 0x08 /* Private */,
       7,    0,  111,    2, 0x08 /* Private */,
       8,    0,  112,    2, 0x08 /* Private */,
       9,    0,  113,    2, 0x08 /* Private */,
      10,    0,  114,    2, 0x08 /* Private */,
      11,    0,  115,    2, 0x08 /* Private */,
      12,    0,  116,    2, 0x08 /* Private */,
      13,    0,  117,    2, 0x08 /* Private */,
      14,    0,  118,    2, 0x08 /* Private */,
      15,    1,  119,    2, 0x08 /* Private */,
      17,    1,  122,    2, 0x08 /* Private */,
      18,    1,  125,    2, 0x08 /* Private */,
      19,    1,  128,    2, 0x08 /* Private */,
      20,    1,  131,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,

       0        // eod
};

void admin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<admin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_new_course_clicked(); break;
        case 1: _t->on_new_student_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->hide_tabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_new_teacher_clicked(); break;
        case 5: _t->on_teaching_clicked(); break;
        case 6: _t->on_advisor_clicked(); break;
        case 7: _t->on_course_add_clicked(); break;
        case 8: _t->on_i_add_clicked(); break;
        case 9: _t->on_s_add_clicked(); break;
        case 10: _t->on_t_add_clicked(); break;
        case 11: _t->on_assign_clicked(); break;
        case 12: _t->on_pushButton_2_clicked(); break;
        case 13: _t->on_s_id_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->on_teaches_id_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->on_i_id_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_advisor_id_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->on_student_id_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject admin::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_admin.data,
    qt_meta_data_admin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *admin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *admin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_admin.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int admin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
