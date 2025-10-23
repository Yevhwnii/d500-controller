#pragma once

#include <QObject>
#include <QModbusTcpClient>
#include <QVariant>

class ConnectionManager : public QObject
{
    Q_OBJECT
public:
    static ConnectionManager* instance();
    Q_INVOKABLE bool connectDevice(QString ipAddress, int port);

    QModbusTcpClient *getClient() const;

    bool isConnectedToDevice() const;

private slots:
    void onStateChanged(QModbusDevice::State state);
private:
    QModbusTcpClient* m_modbusClient = nullptr;
    bool m_isConnectedToDevice = false;
    QMetaObject::Connection m_deviceStateConnection;
    explicit ConnectionManager(QObject *parent = nullptr);
    Q_DISABLE_COPY(ConnectionManager)

signals:
    void deviceConnectionChange(bool isConnected);
    void connectionStateChange(int status);
};


