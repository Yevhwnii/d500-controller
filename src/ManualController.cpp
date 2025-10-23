#include "ManualController.h"

ManualController::ManualController(QObject *parent)
    : QObject{parent}
{}

void ManualController::performAction(QString command)
{
    QModbusTcpClient* client = ConnectionManager::instance()->getClient();
    int serverAddress = 1;

    QModbusDataUnit unit(QModbusDataUnit::HoldingRegisters, ManualController::InputAddress, 1);
    Action action = this->getActionFromString(command);
    Bit bit = this->getBitByAction(action);
    unit.setValue(0, 1 << bit);
    QModbusReply* reply = client->sendWriteRequest(unit, serverAddress);

    if (reply) {
        connect(reply, &QModbusReply::finished, this, [reply]() {
            if (reply->error() == QModbusDevice::NoError) {
                quint16 value = reply->result().value(0);
                qDebug() << "Reply value for" << ManualController::InputAddress << "is:" << value;
            } else {
                qWarning() << "Error for address" << ManualController::InputAddress << ":" << reply->errorString();
            }
            reply->deleteLater();
        });
    }
}

ManualController::Bit ManualController::getBitByAction(Action action)
{
    QMap<Action, Bit> bitMap = {
        { Action::Stop, Bit::StopBit },
        { Action::Man, Bit::ManBit },
        { Action::Auto, Bit::AutoBit },
        { Action::Test, Bit::TestBit },
        { Action::Run, Bit::RunBit },
        { Action::Right, Bit::RightBit },
        { Action::Left, Bit::LeftBit },
        { Action::Up, Bit::UpBit },
        { Action::Down, Bit::DownBit }
    };
    return bitMap.value(action, Bit::StopBit);
}

ManualController::Action ManualController::getActionFromString(QString action)
{
    QMap<QString, Action> actionMap = {
        { "stop", Action::Stop },
        { "man", Action::Man },
        { "auto", Action::Auto },
        { "test", Action::Test },
        { "run", Action::Run },
        { "right", Action::Right },
        { "left", Action::Left },
        { "up", Action::Up },
        { "down", Action::Down }
    };
    return actionMap.value(action.toLower(), Action::Unknown);
}
