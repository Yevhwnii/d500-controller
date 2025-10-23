#include "NetworkStats.h"

NetworkStats::NetworkStats(QObject *parent)
    : AbstractStats{parent}
{}

NetworkStats::~NetworkStats()
{}

void NetworkStats::queryStats(bool isConnected)
{
    qDebug() << "querying network stats, device connected: " << isConnected;

    if (isConnected) {
        const QVector<RegistryRequest> requests = {
            { NetworkRegistry::Vol_NetworkL1Address,      [this](quint16 value) { this->setNetworkL1Voltage(value); }},
            { NetworkRegistry::Vol_NetworkL2Address,      [this](quint16 value) { this->setNetworkL2Voltage(value); }},
            { NetworkRegistry::Vol_NetworkL3Address,      [this](quint16 value) { this->setNetworkL3Voltage(value); }},
            { NetworkRegistry::Vol_GensetL1Address,       [this](quint16 value) { this->setGensetL1Voltage(value); }},
            { NetworkRegistry::Vol_GensetL2Address,       [this](quint16 value) { this->setGensetL2Voltage(value); }},
            { NetworkRegistry::Vol_GensetL3Address,       [this](quint16 value) { this->setGensetL3Voltage(value); }},
            { NetworkRegistry::Vol_NetworkL1L2Address,    [this](quint16 value) { this->setNetworkL1L2Voltage(value); }},
            { NetworkRegistry::Vol_NetworkL2L3Address,    [this](quint16 value) { this->setNetworkL2L3Voltage(value); }},
            { NetworkRegistry::Vol_NetworkL3L1Address,    [this](quint16 value) { this->setNetworkL3L1Voltage(value); }},
            { NetworkRegistry::Vol_GensetL1L2Address,     [this](quint16 value) { this->setGensetL1L2Voltage(value); }},
            { NetworkRegistry::Vol_GensetL2L3Address,     [this](quint16 value) { this->setGensetL2L3Voltage(value); }},
            { NetworkRegistry::Vol_GensetL3L1Address,     [this](quint16 value) { this->setGensetL3L1Voltage(value); }},
            { NetworkRegistry::Amp_NetworkL1Address,      [this](quint16 value) { this->setNetworkL1Amp(value); }},
            { NetworkRegistry::Amp_NetworkL2Address,      [this](quint16 value) { this->setNetworkL2Amp(value); }},
            { NetworkRegistry::Amp_NetworkL3Address,      [this](quint16 value) { this->setNetworkL3Amp(value); }},
            { NetworkRegistry::Amp_GensetL1Address,       [this](quint16 value) { this->setGensetL1Amp(value); }},
            { NetworkRegistry::Amp_GensetL2Address,       [this](quint16 value) { this->setGensetL2Amp(value); }},
            { NetworkRegistry::Amp_GensetL3Address,       [this](quint16 value) { this->setGensetL3Amp(value); }},
            { NetworkRegistry::Amp_NetworkNeutral,        [this](quint16 value) { this->setNetworkNeutralAmp(value); }},
            { NetworkRegistry::Amp_GensetNeutral,         [this](quint16 value) { this->setGensetNeutralAmp(value); }}
        };

        this->sendRequests(requests);
    }
}

QString NetworkStats::networkL1Voltage() const {
    return this->getFormattedValue(m_networkL1Voltage, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::networkL2Voltage() const {
    return this->getFormattedValue(m_networkL2Voltage, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::networkL3Voltage() const {
    return this->getFormattedValue(m_networkL3Voltage, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::gensetL1Voltage() const {
    return this->getFormattedValue(m_gensetL1Voltage, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::gensetL2Voltage() const {
    return this->getFormattedValue(m_gensetL2Voltage, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::gensetL3Voltage() const {
    return this->getFormattedValue(m_gensetL3Voltage, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::networkL1L2Voltage() const {
    return this->getFormattedValue(m_networkL1L2Voltage, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::networkL2L3Voltage() const {
    return this->getFormattedValue(m_networkL2L3Voltage, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::networkL3L1Voltage() const {
    return this->getFormattedValue(m_networkL3L1Voltage, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::gensetL1L2Voltage() const {
    return this->getFormattedValue(m_gensetL1L2Voltage, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::gensetL2L3Voltage() const {
    return this->getFormattedValue(m_gensetL2L3Voltage, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::gensetL3L1Voltage() const {
    return this->getFormattedValue(m_gensetL3L1Voltage, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::networkL1Amp() const {
    return this->getFormattedValue(m_networkL1Amp, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::networkL2Amp() const {
    return this->getFormattedValue(m_networkL2Amp, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::networkL3Amp() const {
    return this->getFormattedValue(m_networkL3Amp, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::gensetL1Amp() const {
    return this->getFormattedValue(m_gensetL1Amp, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::gensetL2Amp() const {
    return this->getFormattedValue(m_gensetL2Amp, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::gensetL3Amp() const {
    return this->getFormattedValue(m_gensetL3Amp, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::networkNeutralAmp() const {
    return this->getFormattedValue(m_networkNeutralAmp, NetworkRegistry::GeneralCoefficient);
}
QString NetworkStats::gensetNeutralAmp() const {
    return this->getFormattedValue(m_gensetNeutralAmp, NetworkRegistry::GeneralCoefficient);
}


void NetworkStats::setNetworkL1Voltage(int value) {
    if (value == m_networkL1Voltage) return;
    m_networkL1Voltage = value;
    emit networkL1VoltageChanged();
}
void NetworkStats::setNetworkL2Voltage(int value) {
    if (value == m_networkL2Voltage) return;
    m_networkL2Voltage = value;
    emit networkL2VoltageChanged();
}
void NetworkStats::setNetworkL3Voltage(int value) {
    if (value == m_networkL3Voltage) return;
    m_networkL3Voltage = value;
    emit networkL3VoltageChanged();
}
void NetworkStats::setGensetL1Voltage(int value) {
    if (value == m_gensetL1Voltage) return;
    m_gensetL1Voltage = value;
    emit gensetL1VoltageChanged();
}
void NetworkStats::setGensetL2Voltage(int value) {
    if (value == m_gensetL2Voltage) return;
    m_gensetL2Voltage = value;
    emit gensetL2VoltageChanged();
}
void NetworkStats::setGensetL3Voltage(int value) {
    if (value == m_gensetL3Voltage) return;
    m_gensetL3Voltage = value;
    emit gensetL3VoltageChanged();
}
void NetworkStats::setNetworkL1L2Voltage(int value) {
    if (value == m_networkL1L2Voltage) return;
    m_networkL1L2Voltage = value;
    emit networkL1L2VoltageChanged();
}
void NetworkStats::setNetworkL2L3Voltage(int value) {
    if (value == m_networkL2L3Voltage) return;
    m_networkL2L3Voltage = value;
    emit networkL2L3VoltageChanged();
}
void NetworkStats::setNetworkL3L1Voltage(int value) {
    if (value == m_networkL3L1Voltage) return;
    m_networkL3L1Voltage = value;
    emit networkL3L1VoltageChanged();
}
void NetworkStats::setGensetL1L2Voltage(int value) {
    if (value == m_gensetL1L2Voltage) return;
    m_gensetL1L2Voltage = value;
    emit gensetL1L2VoltageChanged();
}
void NetworkStats::setGensetL2L3Voltage(int value) {
    if (value == m_gensetL2L3Voltage) return;
    m_gensetL2L3Voltage = value;
    emit gensetL2L3VoltageChanged();
}
void NetworkStats::setGensetL3L1Voltage(int value) {
    if (value == m_gensetL3L1Voltage) return;
    m_gensetL3L1Voltage = value;
    emit gensetL3L1VoltageChanged();
}
void NetworkStats::setNetworkL1Amp(int value) {
    if (value == m_networkL1Amp) return;
    m_networkL1Amp = value;
    emit networkL1AmpChanged();
}
void NetworkStats::setNetworkL2Amp(int value) {
    if (value == m_networkL2Amp) return;
    m_networkL2Amp = value;
    emit networkL2AmpChanged();
}
void NetworkStats::setNetworkL3Amp(int value) {
    if (value == m_networkL3Amp) return;
    m_networkL3Amp = value;
    emit networkL3AmpChanged();
}
void NetworkStats::setGensetL1Amp(int value) {
    if (value == m_gensetL1Amp) return;
    m_gensetL1Amp = value;
    emit gensetL1AmpChanged();
}
void NetworkStats::setGensetL2Amp(int value) {
    if (value == m_gensetL2Amp) return;
    m_gensetL2Amp = value;
    emit gensetL2AmpChanged();
}
void NetworkStats::setGensetL3Amp(int value) {
    if (value == m_gensetL3Amp) return;
    m_gensetL3Amp = value;
    emit gensetL3AmpChanged();
}
void NetworkStats::setNetworkNeutralAmp(int value) {
    if (value == m_networkNeutralAmp) return;
    m_networkNeutralAmp = value;
    emit networkNeutralAmpChanged();
}
void NetworkStats::setGensetNeutralAmp(int value) {
    if (value == m_gensetNeutralAmp) return;
    m_gensetNeutralAmp = value;
    emit gensetNeutralAmpChanged();
}
