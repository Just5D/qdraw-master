/****************************************************************************
** Meta object code from reading C++ file 'drawobj.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../drawobj.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawobj.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShapeMimeData_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShapeMimeData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShapeMimeData_t qt_meta_stringdata_ShapeMimeData = {
    {
QT_MOC_LITERAL(0, 0, 13) // "ShapeMimeData"

    },
    "ShapeMimeData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShapeMimeData[] = {

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

void ShapeMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ShapeMimeData::staticMetaObject = {
    { &QMimeData::staticMetaObject, qt_meta_stringdata_ShapeMimeData.data,
      qt_meta_data_ShapeMimeData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ShapeMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShapeMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShapeMimeData.stringdata0))
        return static_cast<void*>(const_cast< ShapeMimeData*>(this));
    return QMimeData::qt_metacast(_clname);
}

int ShapeMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GraphicsItem_t {
    QByteArrayData data[10];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicsItem_t qt_meta_stringdata_GraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GraphicsItem"
QT_MOC_LITERAL(1, 13, 14), // "selectedChange"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(4, 44, 4), // "item"
QT_MOC_LITERAL(5, 49, 3), // "pen"
QT_MOC_LITERAL(6, 53, 5), // "brush"
QT_MOC_LITERAL(7, 59, 5), // "width"
QT_MOC_LITERAL(8, 65, 6), // "height"
QT_MOC_LITERAL(9, 72, 8) // "position"

    },
    "GraphicsItem\0selectedChange\0\0"
    "QGraphicsItem*\0item\0pen\0brush\0width\0"
    "height\0position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicsItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       5,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, QMetaType::QColor, 0x00095103,
       6, QMetaType::QColor, 0x00095003,
       7, QMetaType::QReal, 0x00095103,
       8, QMetaType::QReal, 0x00095103,
       9, QMetaType::QPointF, 0x00095003,

       0        // eod
};

void GraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphicsItem *_t = static_cast<GraphicsItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedChange((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GraphicsItem::*_t)(QGraphicsItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsItem::selectedChange)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GraphicsItem *_t = static_cast<GraphicsItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->penColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->brushColor(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->width(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->height(); break;
        case 4: *reinterpret_cast< QPointF*>(_v) = _t->pos(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        GraphicsItem *_t = static_cast<GraphicsItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBrushColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setHeight(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setPos(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject GraphicsItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GraphicsItem.data,
      qt_meta_data_GraphicsItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsItem.stringdata0))
        return static_cast<void*>(const_cast< GraphicsItem*>(this));
    if (!strcmp(_clname, "AbstractShapeType<QGraphicsItem>"))
        return static_cast< AbstractShapeType<QGraphicsItem>*>(const_cast< GraphicsItem*>(this));
    return QObject::qt_metacast(_clname);
}

int GraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GraphicsItem::selectedChange(QGraphicsItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GraphicsItemGroup_t {
    QByteArrayData data[10];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicsItemGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicsItemGroup_t qt_meta_stringdata_GraphicsItemGroup = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GraphicsItemGroup"
QT_MOC_LITERAL(1, 18, 14), // "selectedChange"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(4, 49, 4), // "item"
QT_MOC_LITERAL(5, 54, 3), // "pen"
QT_MOC_LITERAL(6, 58, 5), // "brush"
QT_MOC_LITERAL(7, 64, 5), // "width"
QT_MOC_LITERAL(8, 70, 6), // "height"
QT_MOC_LITERAL(9, 77, 8) // "position"

    },
    "GraphicsItemGroup\0selectedChange\0\0"
    "QGraphicsItem*\0item\0pen\0brush\0width\0"
    "height\0position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicsItemGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       5,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, QMetaType::QColor, 0x00095103,
       6, QMetaType::QColor, 0x00095003,
       7, QMetaType::QReal, 0x00095103,
       8, QMetaType::QReal, 0x00095103,
       9, QMetaType::QPointF, 0x00095003,

       0        // eod
};

void GraphicsItemGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphicsItemGroup *_t = static_cast<GraphicsItemGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedChange((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GraphicsItemGroup::*_t)(QGraphicsItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsItemGroup::selectedChange)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GraphicsItemGroup *_t = static_cast<GraphicsItemGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->penColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->brushColor(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->width(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->height(); break;
        case 4: *reinterpret_cast< QPointF*>(_v) = _t->pos(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        GraphicsItemGroup *_t = static_cast<GraphicsItemGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBrushColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setHeight(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setPos(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject GraphicsItemGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GraphicsItemGroup.data,
      qt_meta_data_GraphicsItemGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GraphicsItemGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsItemGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsItemGroup.stringdata0))
        return static_cast<void*>(const_cast< GraphicsItemGroup*>(this));
    if (!strcmp(_clname, "AbstractShapeType<QGraphicsItemGroup>"))
        return static_cast< AbstractShapeType<QGraphicsItemGroup>*>(const_cast< GraphicsItemGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int GraphicsItemGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GraphicsItemGroup::selectedChange(QGraphicsItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
