#pragma once

#include <QObject>
#include <QModbusTcpClient>
#include <QTimer>

#include "ConnectionManager.h"
#include "abstracts/AbstractStats.h"

class EngineStats : public AbstractStats
{
    Q_OBJECT
    Q_PROPERTY(QString batteryVoltage READ batteryVoltage NOTIFY batteryVoltageChanged)
    Q_PROPERTY(QString fuelLevel READ fuelLevel NOTIFY fuelLevelChanged)
    Q_PROPERTY(QString engineSpeed READ engineSpeed NOTIFY engineSpeedChanged)
    Q_PROPERTY(QString engineTemperature READ engineTemperature NOTIFY engineTemperatureChanged)
    Q_PROPERTY(QString oilTemperature READ oilTemperature NOTIFY oilTemperatureChanged)
    Q_PROPERTY(QString oilPressure READ oilPressure NOTIFY oilPressureChanged)
public:
    explicit EngineStats(QObject *parent = nullptr);
    ~EngineStats();

    enum EngineRegistry {
        BatteryVoltageAddress = 10341,
        FuelLevelAddress = 10363,
        EngineSpeedAddress = 10376,
        EngineTemperatureAddress = 10362,
        OilTemperatureAddress = 10364,
        OilPressureAddress = 10361,
        BatteryVoltageCoefficient = 100,
        FuelLevelCoefficient = 10,
        EngineSpeedCoefficient = 1,
        EngineTemperatureCoefficient = 10,
        OilTemperatureCoefficient = 10,
        OilPressureCoefficient = 10
    };
    Q_ENUM(EngineRegistry);

    QString batteryVoltage() const;
    void setBatteryVoltage(int voltage);

    QString fuelLevel() const;
    void setFuelLevel(int newFuelLevel);

    QString engineSpeed() const;
    void setEngineSpeed(int newEngineSpeed);

    QString engineTemperature() const;
    void setEngineTemperature(int newEngineTemperature);

    QString oilTemperature() const;
    void setOilTemperature(int newOilTemperature);

    QString oilPressure() const;
    void setOilPressure(int newOilPressure);

private slots:
    void queryStats(bool isConnected) override;
private:
    int m_batteryVoltage = 0;
    int m_fuelLevel = 0;
    int m_engineSpeed = 0;
    int m_engineTemperature = 0;
    int m_oilTemperature = 0;
    int m_oilPressure = 0;
signals:
    void batteryVoltageChanged();
    void fuelLevelChanged();
    void engineSpeedChanged();
    void engineTemperatureChanged();
    void oilTemperatureChanged();
    void oilPressureChanged();
};

