#pragma once

#include <QObject>
#include <QModbusTcpClient>
#include <QTimer>

#include "ConnectionManager.h"
#include "abstracts/AbstractStats.h"

class NetworkStats : public AbstractStats
{
    Q_OBJECT
    Q_PROPERTY(QString networkL1Voltage READ networkL1Voltage NOTIFY networkL1VoltageChanged)
    Q_PROPERTY(QString networkL2Voltage READ networkL2Voltage NOTIFY networkL2VoltageChanged)
    Q_PROPERTY(QString networkL3Voltage READ networkL3Voltage NOTIFY networkL3VoltageChanged)
    Q_PROPERTY(QString gensetL1Voltage READ gensetL1Voltage NOTIFY gensetL1VoltageChanged)
    Q_PROPERTY(QString gensetL2Voltage READ gensetL2Voltage NOTIFY gensetL2VoltageChanged)
    Q_PROPERTY(QString gensetL3Voltage READ gensetL3Voltage NOTIFY gensetL3VoltageChanged)
    Q_PROPERTY(QString networkL1L2Voltage READ networkL1L2Voltage NOTIFY networkL1L2VoltageChanged)
    Q_PROPERTY(QString networkL2L3Voltage READ networkL2L3Voltage NOTIFY networkL2L3VoltageChanged)
    Q_PROPERTY(QString networkL3L1Voltage READ networkL3L1Voltage NOTIFY networkL3L1VoltageChanged)
    Q_PROPERTY(QString gensetL1L2Voltage READ gensetL1L2Voltage NOTIFY gensetL1L2VoltageChanged)
    Q_PROPERTY(QString gensetL2L3Voltage READ gensetL2L3Voltage NOTIFY gensetL2L3VoltageChanged)
    Q_PROPERTY(QString gensetL3L1Voltage READ gensetL3L1Voltage NOTIFY gensetL3L1VoltageChanged)
    Q_PROPERTY(QString networkL1Amp READ networkL1Amp NOTIFY networkL1AmpChanged)
    Q_PROPERTY(QString networkL2Amp READ networkL2Amp NOTIFY networkL2AmpChanged)
    Q_PROPERTY(QString networkL3Amp READ networkL3Amp NOTIFY networkL3AmpChanged)
    Q_PROPERTY(QString gensetL1Amp READ gensetL1Amp NOTIFY gensetL1AmpChanged)
    Q_PROPERTY(QString gensetL2Amp READ gensetL2Amp NOTIFY gensetL2AmpChanged)
    Q_PROPERTY(QString gensetL3Amp READ gensetL3Amp NOTIFY gensetL3AmpChanged)
    Q_PROPERTY(QString networkNeutralAmp READ networkNeutralAmp NOTIFY networkNeutralAmpChanged)
    Q_PROPERTY(QString gensetNeutralAmp READ gensetNeutralAmp NOTIFY gensetNeutralAmpChanged)
public:
    explicit NetworkStats(QObject *parent = nullptr);
    ~NetworkStats();

    enum NetworkRegistry {
        Vol_NetworkL1Address = 10240,
        Vol_NetworkL2Address = 10242,
        Vol_NetworkL3Address = 10244,
        Vol_GensetL1Address = 10246,
        Vol_GensetL2Address = 10248,
        Vol_GensetL3Address = 10250,
        Vol_NetworkL1L2Address = 10252,
        Vol_NetworkL2L3Address = 10254,
        Vol_NetworkL3L1Address = 10256,
        Vol_GensetL1L2Address = 10258,
        Vol_GensetL2L3Address = 10260,
        Vol_GensetL3L1Address = 10262,
        Amp_NetworkL1Address = 10264,
        Amp_NetworkL2Address = 10266,
        Amp_NetworkL3Address = 10268,
        Amp_GensetL1Address = 10270,
        Amp_GensetL2Address = 10272,
        Amp_GensetL3Address = 10274,
        Amp_NetworkNeutral = 10276,
        Amp_GensetNeutral = 10278,
        GeneralCoefficient = 10
    };
    Q_ENUM(NetworkRegistry);

    QString networkL1Voltage() const;
    QString networkL2Voltage() const;
    QString networkL3Voltage() const;
    QString gensetL1Voltage() const;
    QString gensetL2Voltage() const;
    QString gensetL3Voltage() const;
    QString networkL1L2Voltage() const;
    QString networkL2L3Voltage() const;
    QString networkL3L1Voltage() const;
    QString gensetL1L2Voltage() const;
    QString gensetL2L3Voltage() const;
    QString gensetL3L1Voltage() const;
    QString networkL1Amp() const;
    QString networkL2Amp() const;
    QString networkL3Amp() const;
    QString gensetL1Amp() const;
    QString gensetL2Amp() const;
    QString gensetL3Amp() const;
    QString networkNeutralAmp() const;
    QString gensetNeutralAmp() const;

    void setNetworkL1Voltage(int value);
    void setNetworkL2Voltage(int value);
    void setNetworkL3Voltage(int value);
    void setGensetL1Voltage(int value);
    void setGensetL2Voltage(int value);
    void setGensetL3Voltage(int value);
    void setNetworkL1L2Voltage(int value);
    void setNetworkL2L3Voltage(int value);
    void setNetworkL3L1Voltage(int value);
    void setGensetL1L2Voltage(int value);
    void setGensetL2L3Voltage(int value);
    void setGensetL3L1Voltage(int value);
    void setNetworkL1Amp(int value);
    void setNetworkL2Amp(int value);
    void setNetworkL3Amp(int value);
    void setGensetL1Amp(int value);
    void setGensetL2Amp(int value);
    void setGensetL3Amp(int value);
    void setNetworkNeutralAmp(int value);
    void setGensetNeutralAmp(int value);

private slots:
    void queryStats(bool isConnected) override;
private:
    int m_networkL1Voltage = 0;
    int m_networkL2Voltage = 0;
    int m_networkL3Voltage = 0;
    int m_gensetL1Voltage = 0;
    int m_gensetL2Voltage = 0;
    int m_gensetL3Voltage = 0;
    int m_networkL1L2Voltage = 0;
    int m_networkL2L3Voltage = 0;
    int m_networkL3L1Voltage = 0;
    int m_gensetL1L2Voltage = 0;
    int m_gensetL2L3Voltage = 0;
    int m_gensetL3L1Voltage = 0;
    int m_networkL1Amp = 0;
    int m_networkL2Amp = 0;
    int m_networkL3Amp = 0;
    int m_gensetL1Amp = 0;
    int m_gensetL2Amp = 0;
    int m_gensetL3Amp = 0;
    int m_networkNeutralAmp = 0;
    int m_gensetNeutralAmp = 0;
signals:
    void networkL1VoltageChanged();
    void networkL2VoltageChanged();
    void networkL3VoltageChanged();
    void gensetL1VoltageChanged();
    void gensetL2VoltageChanged();
    void gensetL3VoltageChanged();
    void networkL1L2VoltageChanged();
    void networkL2L3VoltageChanged();
    void networkL3L1VoltageChanged();
    void gensetL1L2VoltageChanged();
    void gensetL2L3VoltageChanged();
    void gensetL3L1VoltageChanged();
    void networkL1AmpChanged();
    void networkL2AmpChanged();
    void networkL3AmpChanged();
    void gensetL1AmpChanged();
    void gensetL2AmpChanged();
    void gensetL3AmpChanged();
    void networkNeutralAmpChanged();
    void gensetNeutralAmpChanged();
};

