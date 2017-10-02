/****************************************************************************
** Meta object code from reading C++ file 'drawscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../drawscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DrawScene_t {
    QByteArrayData data[15];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawScene_t qt_meta_stringdata_DrawScene = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DrawScene"
QT_MOC_LITERAL(1, 10, 9), // "itemMoved"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(4, 36, 4), // "item"
QT_MOC_LITERAL(5, 41, 11), // "oldPosition"
QT_MOC_LITERAL(6, 53, 10), // "itemRotate"
QT_MOC_LITERAL(7, 64, 8), // "oldAngle"
QT_MOC_LITERAL(8, 73, 9), // "itemAdded"
QT_MOC_LITERAL(9, 83, 10), // "itemResize"
QT_MOC_LITERAL(10, 94, 6), // "handle"
QT_MOC_LITERAL(11, 101, 5), // "scale"
QT_MOC_LITERAL(12, 107, 11), // "itemControl"
QT_MOC_LITERAL(13, 119, 6), // "newPos"
QT_MOC_LITERAL(14, 126, 8) // "lastPos_"

    },
    "DrawScene\0itemMoved\0\0QGraphicsItem*\0"
    "item\0oldPosition\0itemRotate\0oldAngle\0"
    "itemAdded\0itemResize\0handle\0scale\0"
    "itemControl\0newPos\0lastPos_"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    2,   44,    2, 0x06 /* Public */,
       8,    1,   49,    2, 0x06 /* Public */,
       9,    3,   52,    2, 0x06 /* Public */,
      12,    4,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPointF,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QReal,    4,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::QPointF,    4,   10,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::QPointF, QMetaType::QPointF,    4,   10,   13,   14,

       0        // eod
};

void DrawScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DrawScene *_t = static_cast<DrawScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemMoved((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 1: _t->itemRotate((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2]))); break;
        case 2: _t->itemAdded((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 3: _t->itemResize((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 4: _t->itemControl((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< const QPointF(*)>(_a[4]))); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 4:
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
            typedef void (DrawScene::*_t)(QGraphicsItem * , const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DrawScene::itemMoved)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DrawScene::*_t)(QGraphicsItem * , const qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DrawScene::itemRotate)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DrawScene::*_t)(QGraphicsItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DrawScene::itemAdded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DrawScene::*_t)(QGraphicsItem * , int , const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DrawScene::itemResize)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DrawScene::*_t)(QGraphicsItem * , int , const QPointF & , const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DrawScene::itemControl)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject DrawScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_DrawScene.data,
      qt_meta_data_DrawScene,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DrawScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DrawScene.stringdata0))
        return static_cast<void*>(const_cast< DrawScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int DrawScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void DrawScene::itemMoved(QGraphicsItem * _t1, const QPointF & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DrawScene::itemRotate(QGraphicsItem * _t1, const qreal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DrawScene::itemAdded(QGraphicsItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DrawScene::itemResize(QGraphicsItem * _t1, int _t2, const QPointF & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DrawScene::itemControl(QGraphicsItem * _t1, int _t2, const QPointF & _t3, const QPointF & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
