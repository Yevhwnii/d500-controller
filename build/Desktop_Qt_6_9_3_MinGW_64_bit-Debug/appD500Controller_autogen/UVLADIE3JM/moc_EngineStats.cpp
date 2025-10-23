/****************************************************************************
** Meta object code from reading C++ file 'EngineStats.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/EngineStats.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EngineStats.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11EngineStatsE_t {};
} // unnamed namespace

template <> constexpr inline auto EngineStats::qt_create_metaobjectdata<qt_meta_tag_ZN11EngineStatsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EngineStats",
        "batteryVoltageChanged",
        "",
        "fuelLevelChanged",
        "engineSpeedChanged",
        "engineTemperatureChanged",
        "oilTemperatureChanged",
        "oilPressureChanged",
        "queryStats",
        "isConnected",
        "batteryVoltage",
        "fuelLevel",
        "engineSpeed",
        "engineTemperature",
        "oilTemperature",
        "oilPressure",
        "EngineRegistry",
        "BatteryVoltageAddress",
        "FuelLevelAddress",
        "EngineSpeedAddress",
        "EngineTemperatureAddress",
        "OilTemperatureAddress",
        "OilPressureAddress",
        "BatteryVoltageCoefficient",
        "FuelLevelCoefficient",
        "EngineSpeedCoefficient",
        "EngineTemperatureCoefficient",
        "OilTemperatureCoefficient",
        "OilPressureCoefficient"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'batteryVoltageChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fuelLevelChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'engineSpeedChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'engineTemperatureChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'oilTemperatureChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'oilPressureChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'queryStats'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'batteryVoltage'
        QtMocHelpers::PropertyData<QString>(10, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'fuelLevel'
        QtMocHelpers::PropertyData<QString>(11, QMetaType::QString, QMC::DefaultPropertyFlags, 1),
        // property 'engineSpeed'
        QtMocHelpers::PropertyData<QString>(12, QMetaType::QString, QMC::DefaultPropertyFlags, 2),
        // property 'engineTemperature'
        QtMocHelpers::PropertyData<QString>(13, QMetaType::QString, QMC::DefaultPropertyFlags, 3),
        // property 'oilTemperature'
        QtMocHelpers::PropertyData<QString>(14, QMetaType::QString, QMC::DefaultPropertyFlags, 4),
        // property 'oilPressure'
        QtMocHelpers::PropertyData<QString>(15, QMetaType::QString, QMC::DefaultPropertyFlags, 5),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'EngineRegistry'
        QtMocHelpers::EnumData<enum EngineRegistry>(16, 16, QMC::EnumFlags{}).add({
            {   17, EngineRegistry::BatteryVoltageAddress },
            {   18, EngineRegistry::FuelLevelAddress },
            {   19, EngineRegistry::EngineSpeedAddress },
            {   20, EngineRegistry::EngineTemperatureAddress },
            {   21, EngineRegistry::OilTemperatureAddress },
            {   22, EngineRegistry::OilPressureAddress },
            {   23, EngineRegistry::BatteryVoltageCoefficient },
            {   24, EngineRegistry::FuelLevelCoefficient },
            {   25, EngineRegistry::EngineSpeedCoefficient },
            {   26, EngineRegistry::EngineTemperatureCoefficient },
            {   27, EngineRegistry::OilTemperatureCoefficient },
            {   28, EngineRegistry::OilPressureCoefficient },
        }),
    };
    return QtMocHelpers::metaObjectData<EngineStats, qt_meta_tag_ZN11EngineStatsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EngineStats::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractStats::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11EngineStatsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11EngineStatsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11EngineStatsE_t>.metaTypes,
    nullptr
} };

void EngineStats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EngineStats *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->batteryVoltageChanged(); break;
        case 1: _t->fuelLevelChanged(); break;
        case 2: _t->engineSpeedChanged(); break;
        case 3: _t->engineTemperatureChanged(); break;
        case 4: _t->oilTemperatureChanged(); break;
        case 5: _t->oilPressureChanged(); break;
        case 6: _t->queryStats((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EngineStats::*)()>(_a, &EngineStats::batteryVoltageChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EngineStats::*)()>(_a, &EngineStats::fuelLevelChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (EngineStats::*)()>(_a, &EngineStats::engineSpeedChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (EngineStats::*)()>(_a, &EngineStats::engineTemperatureChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (EngineStats::*)()>(_a, &EngineStats::oilTemperatureChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (EngineStats::*)()>(_a, &EngineStats::oilPressureChanged, 5))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->batteryVoltage(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->fuelLevel(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->engineSpeed(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->engineTemperature(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->oilTemperature(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->oilPressure(); break;
        default: break;
        }
    }
}

const QMetaObject *EngineStats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EngineStats::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11EngineStatsE_t>.strings))
        return static_cast<void*>(this);
    return AbstractStats::qt_metacast(_clname);
}

int EngineStats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractStats::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void EngineStats::batteryVoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void EngineStats::fuelLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void EngineStats::engineSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void EngineStats::engineTemperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void EngineStats::oilTemperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void EngineStats::oilPressureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
