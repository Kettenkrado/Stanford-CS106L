/****************************************************************************
** Meta object code from reading C++ file 'gbrowserpane.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Library/graphics/gbrowserpane.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gbrowserpane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN22_Internal_QTextBrowserE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN22_Internal_QTextBrowserE = QtMocHelpers::stringData(
    "_Internal_QTextBrowser"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN22_Internal_QTextBrowserE[] = {

 // content:
      12,       // revision
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

Q_CONSTINIT const QMetaObject _Internal_QTextBrowser::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextBrowser::staticMetaObject>(),
    qt_meta_stringdata_ZN22_Internal_QTextBrowserE.offsetsAndSizes,
    qt_meta_data_ZN22_Internal_QTextBrowserE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN22_Internal_QTextBrowserE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<_Internal_QTextBrowser, std::true_type>
    >,
    nullptr
} };

void _Internal_QTextBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<_Internal_QTextBrowser *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *_Internal_QTextBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *_Internal_QTextBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN22_Internal_QTextBrowserE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "_Internal_QWidget"))
        return static_cast< _Internal_QWidget*>(this);
    return QTextBrowser::qt_metacast(_clname);
}

int _Internal_QTextBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
