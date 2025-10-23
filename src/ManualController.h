#pragma once

#include <QObject>

#include "ConnectionManager.h"

class ManualController : public QObject
{
    Q_OBJECT
public:
    explicit ManualController(QObject *parent = nullptr);

    enum Action {
        Stop,
        Man,
        Auto,
        Test,
        Run,
        Right,
        Left,
        Up,
        Down,
        Unknown
    };

    enum Bit {
        StopBit = 0,
        ManBit  = 1,
        AutoBit = 2,
        TestBit = 3,
        RunBit  = 4,
        RightBit= 7,
        LeftBit = 8,
        UpBit   = 9,
        DownBit = 10
    };


    Q_INVOKABLE void performAction(QString action);

private:
    static constexpr int InputAddress = 8193;

    Action getActionFromString(QString action);
    Bit getBitByAction(Action action);

signals:
};

