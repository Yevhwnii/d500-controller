#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>
#include <QtCore/qhash.h>
#include <QtCore/qstring.h>

namespace QmlCacheGeneratedCode {
namespace _qt_qml_D500Controller_qml_Main_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_D500Controller_qml_Controls_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_D500Controller_qml_InformationPanel_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_D500Controller_qml_panels_Engine_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_D500Controller_qml_panels_Connection_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_D500Controller_qml_panels_Network_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_D500Controller_qml_panels_ManualControl_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_D500Controller_qml_components_DataCell_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_D500Controller_qml_components_StatusBar_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/D500Controller/qml/Main.qml"), &QmlCacheGeneratedCode::_qt_qml_D500Controller_qml_Main_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/D500Controller/qml/Controls.qml"), &QmlCacheGeneratedCode::_qt_qml_D500Controller_qml_Controls_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/D500Controller/qml/InformationPanel.qml"), &QmlCacheGeneratedCode::_qt_qml_D500Controller_qml_InformationPanel_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/D500Controller/qml/panels/Engine.qml"), &QmlCacheGeneratedCode::_qt_qml_D500Controller_qml_panels_Engine_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/D500Controller/qml/panels/Connection.qml"), &QmlCacheGeneratedCode::_qt_qml_D500Controller_qml_panels_Connection_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/D500Controller/qml/panels/Network.qml"), &QmlCacheGeneratedCode::_qt_qml_D500Controller_qml_panels_Network_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/D500Controller/qml/panels/ManualControl.qml"), &QmlCacheGeneratedCode::_qt_qml_D500Controller_qml_panels_ManualControl_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/D500Controller/qml/components/DataCell.qml"), &QmlCacheGeneratedCode::_qt_qml_D500Controller_qml_components_DataCell_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/D500Controller/qml/components/StatusBar.qml"), &QmlCacheGeneratedCode::_qt_qml_D500Controller_qml_components_StatusBar_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.structVersion = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qmlcache_appD500Controller)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qmlcache_appD500Controller))
int QT_MANGLE_NAMESPACE(qCleanupResources_qmlcache_appD500Controller)() {
    return 1;
}
