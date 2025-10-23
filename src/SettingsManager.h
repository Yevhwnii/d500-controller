#pragma once

#include <QObject>
#include <QSettings>


class SettingsManager : public QObject
{
    Q_OBJECT
public:
    explicit SettingsManager(QObject *parent = nullptr);
    Q_INVOKABLE void saveDevice(QString ip, int port);
    Q_INVOKABLE QVariantMap loadLastDevice();
};

