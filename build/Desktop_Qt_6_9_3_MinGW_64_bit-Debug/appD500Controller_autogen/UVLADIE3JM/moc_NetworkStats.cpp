/****************************************************************************
** Meta object code from reading C++ file 'NetworkStats.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/NetworkStats.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkStats.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.3. It"
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
struct qt_meta_tag_ZN12NetworkStatsE_t {};
} // unnamed namespace

template <> constexpr inline auto NetworkStats::qt_create_metaobjectdata<qt_meta_tag_ZN12NetworkStatsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NetworkStats",
        "networkL1VoltageChanged",
        "",
        "networkL2VoltageChanged",
        "networkL3VoltageChanged",
        "gensetL1VoltageChanged",
        "gensetL2VoltageChanged",
        "gensetL3VoltageChanged",
        "networkL1L2VoltageChanged",
        "networkL2L3VoltageChanged",
        "networkL3L1VoltageChanged",
        "gensetL1L2VoltageChanged",
        "gensetL2L3VoltageChanged",
        "gensetL3L1VoltageChanged",
        "networkL1AmpChanged",
        "networkL2AmpChanged",
        "networkL3AmpChanged",
        "gensetL1AmpChanged",
        "gensetL2AmpChanged",
        "gensetL3AmpChanged",
        "networkNeutralAmpChanged",
        "gensetNeutralAmpChanged",
        "queryStats",
        "isConnected",
        "networkL1Voltage",
        "networkL2Voltage",
        "networkL3Voltage",
        "gensetL1Voltage",
        "gensetL2Voltage",
        "gensetL3Voltage",
        "networkL1L2Voltage",
        "networkL2L3Voltage",
        "networkL3L1Voltage",
        "gensetL1L2Voltage",
        "gensetL2L3Voltage",
        "gensetL3L1Voltage",
        "networkL1Amp",
        "networkL2Amp",
        "networkL3Amp",
        "gensetL1Amp",
        "gensetL2Amp",
        "gensetL3Amp",
        "networkNeutralAmp",
        "gensetNeutralAmp",
        "NetworkRegistry",
        "Vol_NetworkL1Address",
        "Vol_NetworkL2Address",
        "Vol_NetworkL3Address",
        "Vol_GensetL1Address",
        "Vol_GensetL2Address",
        "Vol_GensetL3Address",
        "Vol_NetworkL1L2Address",
        "Vol_NetworkL2L3Address",
        "Vol_NetworkL3L1Address",
        "Vol_GensetL1L2Address",
        "Vol_GensetL2L3Address",
        "Vol_GensetL3L1Address",
        "Amp_NetworkL1Address",
        "Amp_NetworkL2Address",
        "Amp_NetworkL3Address",
        "Amp_GensetL1Address",
        "Amp_GensetL2Address",
        "Amp_GensetL3Address",
        "Amp_NetworkNeutral",
        "Amp_GensetNeutral",
        "GeneralCoefficient"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'networkL1VoltageChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'networkL2VoltageChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'networkL3VoltageChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gensetL1VoltageChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gensetL2VoltageChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gensetL3VoltageChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'networkL1L2VoltageChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'networkL2L3VoltageChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'networkL3L1VoltageChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gensetL1L2VoltageChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gensetL2L3VoltageChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gensetL3L1VoltageChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'networkL1AmpChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'networkL2AmpChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'networkL3AmpChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gensetL1AmpChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gensetL2AmpChanged'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gensetL3AmpChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'networkNeutralAmpChanged'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gensetNeutralAmpChanged'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'queryStats'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'networkL1Voltage'
        QtMocHelpers::PropertyData<QString>(24, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'networkL2Voltage'
        QtMocHelpers::PropertyData<QString>(25, QMetaType::QString, QMC::DefaultPropertyFlags, 1),
        // property 'networkL3Voltage'
        QtMocHelpers::PropertyData<QString>(26, QMetaType::QString, QMC::DefaultPropertyFlags, 2),
        // property 'gensetL1Voltage'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags, 3),
        // property 'gensetL2Voltage'
        QtMocHelpers::PropertyData<QString>(28, QMetaType::QString, QMC::DefaultPropertyFlags, 4),
        // property 'gensetL3Voltage'
        QtMocHelpers::PropertyData<QString>(29, QMetaType::QString, QMC::DefaultPropertyFlags, 5),
        // property 'networkL1L2Voltage'
        QtMocHelpers::PropertyData<QString>(30, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
        // property 'networkL2L3Voltage'
        QtMocHelpers::PropertyData<QString>(31, QMetaType::QString, QMC::DefaultPropertyFlags, 7),
        // property 'networkL3L1Voltage'
        QtMocHelpers::PropertyData<QString>(32, QMetaType::QString, QMC::DefaultPropertyFlags, 8),
        // property 'gensetL1L2Voltage'
        QtMocHelpers::PropertyData<QString>(33, QMetaType::QString, QMC::DefaultPropertyFlags, 9),
        // property 'gensetL2L3Voltage'
        QtMocHelpers::PropertyData<QString>(34, QMetaType::QString, QMC::DefaultPropertyFlags, 10),
        // property 'gensetL3L1Voltage'
        QtMocHelpers::PropertyData<QString>(35, QMetaType::QString, QMC::DefaultPropertyFlags, 11),
        // property 'networkL1Amp'
        QtMocHelpers::PropertyData<QString>(36, QMetaType::QString, QMC::DefaultPropertyFlags, 12),
        // property 'networkL2Amp'
        QtMocHelpers::PropertyData<QString>(37, QMetaType::QString, QMC::DefaultPropertyFlags, 13),
        // property 'networkL3Amp'
        QtMocHelpers::PropertyData<QString>(38, QMetaType::QString, QMC::DefaultPropertyFlags, 14),
        // property 'gensetL1Amp'
        QtMocHelpers::PropertyData<QString>(39, QMetaType::QString, QMC::DefaultPropertyFlags, 15),
        // property 'gensetL2Amp'
        QtMocHelpers::PropertyData<QString>(40, QMetaType::QString, QMC::DefaultPropertyFlags, 16),
        // property 'gensetL3Amp'
        QtMocHelpers::PropertyData<QString>(41, QMetaType::QString, QMC::DefaultPropertyFlags, 17),
        // property 'networkNeutralAmp'
        QtMocHelpers::PropertyData<QString>(42, QMetaType::QString, QMC::DefaultPropertyFlags, 18),
        // property 'gensetNeutralAmp'
        QtMocHelpers::PropertyData<QString>(43, QMetaType::QString, QMC::DefaultPropertyFlags, 19),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'NetworkRegistry'
        QtMocHelpers::EnumData<enum NetworkRegistry>(44, 44, QMC::EnumFlags{}).add({
            {   45, NetworkRegistry::Vol_NetworkL1Address },
            {   46, NetworkRegistry::Vol_NetworkL2Address },
            {   47, NetworkRegistry::Vol_NetworkL3Address },
            {   48, NetworkRegistry::Vol_GensetL1Address },
            {   49, NetworkRegistry::Vol_GensetL2Address },
            {   50, NetworkRegistry::Vol_GensetL3Address },
            {   51, NetworkRegistry::Vol_NetworkL1L2Address },
            {   52, NetworkRegistry::Vol_NetworkL2L3Address },
            {   53, NetworkRegistry::Vol_NetworkL3L1Address },
            {   54, NetworkRegistry::Vol_GensetL1L2Address },
            {   55, NetworkRegistry::Vol_GensetL2L3Address },
            {   56, NetworkRegistry::Vol_GensetL3L1Address },
            {   57, NetworkRegistry::Amp_NetworkL1Address },
            {   58, NetworkRegistry::Amp_NetworkL2Address },
            {   59, NetworkRegistry::Amp_NetworkL3Address },
            {   60, NetworkRegistry::Amp_GensetL1Address },
            {   61, NetworkRegistry::Amp_GensetL2Address },
            {   62, NetworkRegistry::Amp_GensetL3Address },
            {   63, NetworkRegistry::Amp_NetworkNeutral },
            {   64, NetworkRegistry::Amp_GensetNeutral },
            {   65, NetworkRegistry::GeneralCoefficient },
        }),
    };
    return QtMocHelpers::metaObjectData<NetworkStats, qt_meta_tag_ZN12NetworkStatsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NetworkStats::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractStats::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12NetworkStatsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12NetworkStatsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12NetworkStatsE_t>.metaTypes,
    nullptr
} };

void NetworkStats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NetworkStats *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->networkL1VoltageChanged(); break;
        case 1: _t->networkL2VoltageChanged(); break;
        case 2: _t->networkL3VoltageChanged(); break;
        case 3: _t->gensetL1VoltageChanged(); break;
        case 4: _t->gensetL2VoltageChanged(); break;
        case 5: _t->gensetL3VoltageChanged(); break;
        case 6: _t->networkL1L2VoltageChanged(); break;
        case 7: _t->networkL2L3VoltageChanged(); break;
        case 8: _t->networkL3L1VoltageChanged(); break;
        case 9: _t->gensetL1L2VoltageChanged(); break;
        case 10: _t->gensetL2L3VoltageChanged(); break;
        case 11: _t->gensetL3L1VoltageChanged(); break;
        case 12: _t->networkL1AmpChanged(); break;
        case 13: _t->networkL2AmpChanged(); break;
        case 14: _t->networkL3AmpChanged(); break;
        case 15: _t->gensetL1AmpChanged(); break;
        case 16: _t->gensetL2AmpChanged(); break;
        case 17: _t->gensetL3AmpChanged(); break;
        case 18: _t->networkNeutralAmpChanged(); break;
        case 19: _t->gensetNeutralAmpChanged(); break;
        case 20: _t->queryStats((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::networkL1VoltageChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::networkL2VoltageChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::networkL3VoltageChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::gensetL1VoltageChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::gensetL2VoltageChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::gensetL3VoltageChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::networkL1L2VoltageChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::networkL2L3VoltageChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::networkL3L1VoltageChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::gensetL1L2VoltageChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::gensetL2L3VoltageChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::gensetL3L1VoltageChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::networkL1AmpChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::networkL2AmpChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::networkL3AmpChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::gensetL1AmpChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::gensetL2AmpChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::gensetL3AmpChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::networkNeutralAmpChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (NetworkStats::*)()>(_a, &NetworkStats::gensetNeutralAmpChanged, 19))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->networkL1Voltage(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->networkL2Voltage(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->networkL3Voltage(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->gensetL1Voltage(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->gensetL2Voltage(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->gensetL3Voltage(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->networkL1L2Voltage(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->networkL2L3Voltage(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->networkL3L1Voltage(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->gensetL1L2Voltage(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->gensetL2L3Voltage(); break;
        case 11: *reinterpret_cast<QString*>(_v) = _t->gensetL3L1Voltage(); break;
        case 12: *reinterpret_cast<QString*>(_v) = _t->networkL1Amp(); break;
        case 13: *reinterpret_cast<QString*>(_v) = _t->networkL2Amp(); break;
        case 14: *reinterpret_cast<QString*>(_v) = _t->networkL3Amp(); break;
        case 15: *reinterpret_cast<QString*>(_v) = _t->gensetL1Amp(); break;
        case 16: *reinterpret_cast<QString*>(_v) = _t->gensetL2Amp(); break;
        case 17: *reinterpret_cast<QString*>(_v) = _t->gensetL3Amp(); break;
        case 18: *reinterpret_cast<QString*>(_v) = _t->networkNeutralAmp(); break;
        case 19: *reinterpret_cast<QString*>(_v) = _t->gensetNeutralAmp(); break;
        default: break;
        }
    }
}

const QMetaObject *NetworkStats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkStats::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12NetworkStatsE_t>.strings))
        return static_cast<void*>(this);
    return AbstractStats::qt_metacast(_clname);
}

int NetworkStats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractStats::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void NetworkStats::networkL1VoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NetworkStats::networkL2VoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NetworkStats::networkL3VoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void NetworkStats::gensetL1VoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NetworkStats::gensetL2VoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void NetworkStats::gensetL3VoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void NetworkStats::networkL1L2VoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void NetworkStats::networkL2L3VoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void NetworkStats::networkL3L1VoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void NetworkStats::gensetL1L2VoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void NetworkStats::gensetL2L3VoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void NetworkStats::gensetL3L1VoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void NetworkStats::networkL1AmpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void NetworkStats::networkL2AmpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void NetworkStats::networkL3AmpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void NetworkStats::gensetL1AmpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void NetworkStats::gensetL2AmpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void NetworkStats::gensetL3AmpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void NetworkStats::networkNeutralAmpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void NetworkStats::gensetNeutralAmpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}
QT_WARNING_POP
