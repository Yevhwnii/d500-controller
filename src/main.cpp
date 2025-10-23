#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQuickStyle>
#include <QTranslator>

#include "ConnectionManager.h"
#include "EngineStats.h"
#include "NetworkStats.h"
#include "ManualController.h"
#include "SettingsManager.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    QTranslator translator;

    if (translator.load(":/i18n/ua_UA"))
        app.installTranslator(&translator);

    QQuickStyle::setStyle("Universal");

    QCoreApplication::setOrganizationName("Testing");
    QCoreApplication::setOrganizationDomain("testing.com");
    QCoreApplication::setApplicationName("D-500 Controller");

    ConnectionManager* manager = ConnectionManager::instance();
    EngineStats* engineStats = new EngineStats(&app);
    NetworkStats* networkStats = new NetworkStats(&app);
    ManualController* manualController = new ManualController(&app);
    SettingsManager *settingsManager = new SettingsManager(&app);

    engine.rootContext()->setContextProperty("connectionManager", manager);
    engine.rootContext()->setContextProperty("engineStatus", engineStats);
    engine.rootContext()->setContextProperty("networkStatus", networkStats);
    engine.rootContext()->setContextProperty("manualController", manualController);
    engine.rootContext()->setContextProperty("settingsManager", settingsManager);

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("D500Controller", "Main");

    return app.exec();
}
