#include "EngineStats.h"

EngineStats::EngineStats(QObject *parent)
    : AbstractStats{parent}
{}

EngineStats::~EngineStats() {}

void EngineStats::queryStats(bool isConnected)
{
    qDebug() << "querying engine stats, device connected: " << isConnected;

    if (isConnected) {
        const QVector<RegistryRequest> requests = {
            { EngineRegistry::BatteryVoltageAddress, [this](quint16 value) { this->setBatteryVoltage(value); }},
            { EngineRegistry::FuelLevelAddress, [this](quint16 value) { this->setFuelLevel(value); }},
            { EngineRegistry::EngineSpeedAddress, [this](quint16 value) { this->setEngineSpeed(value); }},
            { EngineRegistry::EngineTemperatureAddress, [this](quint16 value) { this->setEngineTemperature(value); }},
            { EngineRegistry::OilTemperatureAddress, [this](quint16 value) { this->setOilTemperature(value); }},
            { EngineRegistry::OilPressureAddress, [this](quint16 value) { this->setOilPressure(value); }}
        };

        this->sendRequests(requests);
    }
}

QString EngineStats::oilPressure() const
{
    return this->getFormattedValue(m_oilPressure, EngineRegistry::OilPressureCoefficient);
}

void EngineStats::setOilPressure(int newOilPressure)
{
    if (newOilPressure == m_oilPressure) return;
    m_oilPressure = newOilPressure;
    emit oilPressureChanged();
}

QString EngineStats::oilTemperature() const
{
    return this->getFormattedValue(m_oilTemperature, EngineRegistry::OilTemperatureCoefficient);
}

void EngineStats::setOilTemperature(int newOilTemperature)
{
    if (newOilTemperature == m_oilTemperature) return;
    m_oilTemperature = newOilTemperature;
    emit oilTemperatureChanged();
}

QString EngineStats::engineTemperature() const
{
    return this->getFormattedValue(m_engineTemperature, EngineRegistry::EngineTemperatureCoefficient);
}

void EngineStats::setEngineTemperature(int newEngineTemperature)
{
    if (newEngineTemperature == m_engineTemperature) return;
    m_engineTemperature = newEngineTemperature;
    emit engineTemperatureChanged();
}

QString EngineStats::engineSpeed() const
{
    return this->getFormattedValue(m_engineSpeed, EngineRegistry::EngineSpeedCoefficient);
}

void EngineStats::setEngineSpeed(int newEngineSpeed)
{
    if (newEngineSpeed == m_engineSpeed) return;
    m_engineSpeed = newEngineSpeed;
    emit engineSpeedChanged();
}

QString EngineStats::fuelLevel() const
{
    return this->getFormattedValue(m_fuelLevel, EngineRegistry::FuelLevelCoefficient);
}

void EngineStats::setFuelLevel(int newFuelLevel)
{
    if (newFuelLevel == m_fuelLevel) return;
    m_fuelLevel = newFuelLevel;
    emit fuelLevelChanged();
}

QString EngineStats::batteryVoltage() const
{
    return this->getFormattedValue(m_batteryVoltage, EngineRegistry::BatteryVoltageCoefficient);
}

void EngineStats::setBatteryVoltage(int voltage)
{
    if (voltage == m_batteryVoltage) return;
    m_batteryVoltage = voltage;
    emit batteryVoltageChanged();
}
