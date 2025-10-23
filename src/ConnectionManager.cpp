#include "ConnectionManager.h"

ConnectionManager::ConnectionManager(QObject *parent) : QObject(parent) {
    m_modbusClient = new QModbusTcpClient(parent);
    m_modbusClient->setTimeout(100);
}

ConnectionManager *ConnectionManager::instance() {
    static ConnectionManager* s_instance = new ConnectionManager();
    return s_instance;
}

bool ConnectionManager::connectDevice(QString ipAddress, int port)
{
    if (m_isConnectedToDevice) {
        m_modbusClient->disconnectDevice();
        ConnectionManager::disconnect(m_deviceStateConnection);
        m_isConnectedToDevice = false;
        qDebug() << "Disconnected from device";
    }

    m_modbusClient->setConnectionParameter(QModbusDevice::NetworkAddressParameter, ipAddress);
    m_modbusClient->setConnectionParameter(QModbusDevice::NetworkPortParameter, port);

    m_deviceStateConnection = ConnectionManager::connect(m_modbusClient, &QModbusTcpClient::stateChanged, this, &ConnectionManager::onStateChanged);

    m_isConnectedToDevice = m_modbusClient->connectDevice();

    qDebug() << "Connected to device on IP - " << ipAddress << "at port" << port << "-" << m_isConnectedToDevice;

    return m_isConnectedToDevice;
}


void ConnectionManager::onStateChanged(QModbusDevice::State state)
{
    qDebug() << "State change" << state;

    emit connectionStateChange(state);

    if (state == QModbusDevice::State::ConnectedState) {
        emit deviceConnectionChange(true);
    }
}

bool ConnectionManager::isConnectedToDevice() const
{
    return m_isConnectedToDevice;
}

QModbusTcpClient *ConnectionManager::getClient() const
{
    return m_modbusClient;
}
