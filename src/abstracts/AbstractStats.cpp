#include "AbstractStats.h"

AbstractStats::AbstractStats(QObject *parent) : QObject(parent) {
    m_pollTimer = new QTimer(parent);
    AbstractStats::connect(m_pollTimer, &QTimer::timeout, this, [this]() {
        this->queryStats(ConnectionManager::instance()->isConnectedToDevice());
    });
    m_pollTimer->setTimerType(Qt::PreciseTimer);
}

AbstractStats::~AbstractStats() {
    this->stopPolling();
}

void AbstractStats::startPolling(int intervalMs)
{
    if (!m_pollTimer->isActive()) {
        this->queryStats(ConnectionManager::instance()->isConnectedToDevice());
        m_pollTimer->start(intervalMs);
    }
}

void AbstractStats::stopPolling()
{
    m_pollTimer->stop();
}

void AbstractStats::sendRequests(QVector<RegistryRequest> requests)
{
    QModbusTcpClient* client = ConnectionManager::instance()->getClient();
    int serverAddress = 1;

    for (const RegistryRequest& req : requests) {
        QModbusDataUnit location(QModbusDataUnit::HoldingRegisters, req.address, 1);
        QModbusReply* reply = client->sendReadRequest(location, serverAddress);

        if (reply) {
            connect(reply, &QModbusReply::finished, this, [reply, req]() {
                if (reply->error() == QModbusDevice::NoError) {
                    quint16 value = reply->result().value(0);
                    qDebug() << "Reply value for" << req.address << "is:" << value;
                    req.setter(value);
                } else {
                    qWarning() << "Error for address" << req.address << ":" << reply->errorString();
                    req.setter(32767);
                }
                reply->deleteLater();
            });
        }
    }
}

QString AbstractStats::getFormattedValue(int value, int coefficient) const
{
    int undefinedInt = 32767;
    if (value == undefinedInt) return QString("---");
    float convertedValue = static_cast<float>(value) / coefficient;
    QString formatted = QString::number(convertedValue, 'f', 2);
    return formatted;
}
