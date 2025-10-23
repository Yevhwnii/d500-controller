#include "settingsmanager.h"

SettingsManager::SettingsManager(QObject *parent)
    : QObject{parent}
{}

void SettingsManager::saveDevice(QString ip, int port)
{
    QSettings settings;
    settings.beginGroup("Device");
    settings.setValue("ip", ip);
    settings.setValue("port", port);
    settings.endGroup();
}

QVariantMap SettingsManager::loadLastDevice()
{
    QVariantMap map;
    QSettings settings;
    settings.beginGroup("Device");
    QString ip = settings.value("ip", "").toString();
    int port = settings.value("port", 0).toInt();
    settings.endGroup();
    map["ip"] = ip;
    map["port"] = port;

    return map;
}
