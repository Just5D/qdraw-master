/****************************************************************************
** Meta object code from reading C++ file 'customproperty.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../customproperty.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customproperty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ShadeWidget_t {
    QByteArrayData data[10];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShadeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShadeWidget_t qt_meta_stringdata_ShadeWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ShadeWidget"
QT_MOC_LITERAL(1, 12, 12), // "colorChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "begin"
QT_MOC_LITERAL(4, 32, 6), // "middle"
QT_MOC_LITERAL(5, 39, 3), // "end"
QT_MOC_LITERAL(6, 43, 15), // "positionChanged"
QT_MOC_LITERAL(7, 59, 8), // "position"
QT_MOC_LITERAL(8, 68, 11), // "typeChanged"
QT_MOC_LITERAL(9, 80, 4) // "type"

    },
    "ShadeWidget\0colorChanged\0\0begin\0middle\0"
    "end\0positionChanged\0position\0typeChanged\0"
    "type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShadeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x0a /* Public */,
       6,    1,   36,    2, 0x0a /* Public */,
       8,    1,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor, QMetaType::QColor, QMetaType::QColor,    3,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void ShadeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShadeWidget *_t = static_cast<ShadeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 1: _t->positionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->typeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ShadeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ShadeWidget.data,
      qt_meta_data_ShadeWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ShadeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShadeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ShadeWidget.stringdata0))
        return static_cast<void*>(const_cast< ShadeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ShadeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_ColorButton_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorButton_t qt_meta_stringdata_ColorButton = {
    {
QT_MOC_LITERAL(0, 0, 11) // "ColorButton"

    },
    "ColorButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ColorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ColorButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_ColorButton.data,
      qt_meta_data_ColorButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ColorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ColorButton.stringdata0))
        return static_cast<void*>(const_cast< ColorButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int ColorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QtGradientEditor_t {
    QByteArrayData data[7];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtGradientEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtGradientEditor_t qt_meta_stringdata_QtGradientEditor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QtGradientEditor"
QT_MOC_LITERAL(1, 17, 12), // "colorChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "begin"
QT_MOC_LITERAL(4, 37, 6), // "middle"
QT_MOC_LITERAL(5, 44, 3), // "end"
QT_MOC_LITERAL(6, 48, 7) // "clicked"

    },
    "QtGradientEditor\0colorChanged\0\0begin\0"
    "middle\0end\0clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtGradientEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       1,    1,   36,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor, QMetaType::QColor, QMetaType::QColor,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void QtGradientEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtGradientEditor *_t = static_cast<QtGradientEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 1: _t->colorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtGradientEditor::*_t)(const QColor & , const QColor & , const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtGradientEditor::colorChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QtGradientEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtGradientEditor.data,
      qt_meta_data_QtGradientEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtGradientEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtGradientEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtGradientEditor.stringdata0))
        return static_cast<void*>(const_cast< QtGradientEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int QtGradientEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QtGradientEditor::colorChanged(const QColor & _t1, const QColor & _t2, const QColor & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QtPenPropertyManager_t {
    QByteArrayData data[10];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtPenPropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtPenPropertyManager_t qt_meta_stringdata_QtPenPropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QtPenPropertyManager"
QT_MOC_LITERAL(1, 21, 12), // "valueChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "QtProperty*"
QT_MOC_LITERAL(4, 47, 8), // "property"
QT_MOC_LITERAL(5, 56, 3), // "val"
QT_MOC_LITERAL(6, 60, 8), // "setValue"
QT_MOC_LITERAL(7, 69, 14), // "slotIntChanged"
QT_MOC_LITERAL(8, 84, 15), // "slotEnumChanged"
QT_MOC_LITERAL(9, 100, 21) // "slotPropertyDestroyed"

    },
    "QtPenPropertyManager\0valueChanged\0\0"
    "QtProperty*\0property\0val\0setValue\0"
    "slotIntChanged\0slotEnumChanged\0"
    "slotPropertyDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtPenPropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   44,    2, 0x0a /* Public */,
       7,    2,   49,    2, 0x0a /* Public */,
       8,    2,   54,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPen,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPen,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void QtPenPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtPenPropertyManager *_t = static_cast<QtPenPropertyManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QPen(*)>(_a[2]))); break;
        case 1: _t->setValue((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QPen(*)>(_a[2]))); break;
        case 2: _t->slotIntChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->slotEnumChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->slotPropertyDestroyed((*reinterpret_cast< QtProperty*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtPenPropertyManager::*_t)(QtProperty * , const QPen & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtPenPropertyManager::valueChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QtPenPropertyManager::staticMetaObject = {
    { &QtAbstractPropertyManager::staticMetaObject, qt_meta_stringdata_QtPenPropertyManager.data,
      qt_meta_data_QtPenPropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtPenPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtPenPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtPenPropertyManager.stringdata0))
        return static_cast<void*>(const_cast< QtPenPropertyManager*>(this));
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtPenPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QtPenPropertyManager::valueChanged(QtProperty * _t1, const QPen & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
