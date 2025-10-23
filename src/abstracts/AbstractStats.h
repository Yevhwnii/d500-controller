#pragma once

#include <QObject>
#include <QTimer>

#include "src/ConnectionManager.h"

class AbstractStats : public QObject
{
    Q_OBJECT
public:
    explicit AbstractStats(QObject *parent = nullptr);
    ~AbstractStats();

    Q_INVOKABLE void startPolling(int intervalMs);
    Q_INVOKABLE void stopPolling();

    struct RegistryRequest {
        int address;
        std::function<void(quint16)> setter;
    };

protected:
    QTimer* m_pollTimer = nullptr;
    virtual void queryStats(bool isConnected) = 0;
    void sendRequests(QVector<RegistryRequest> requests);
    QString getFormattedValue(int value, int coefficient) const;
private:
};


