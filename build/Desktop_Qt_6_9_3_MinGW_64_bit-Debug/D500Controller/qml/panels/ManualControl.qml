import QtQuick
import QtQuick.Layouts
import QtQuick.Effects

Item {
    id: manualControlPanel

    required property bool isVisible

    Rectangle {
        anchors.fill: parent
        color: "#f0f0f0"

        GridLayout {
            id: arrowsLayout
            anchors.centerIn: parent
            columns: 3
            rows: 3

            Rectangle {
                Layout.column: 1
                Layout.row: 0
                width: 50
                height: 50
                radius: 50
                color: "#211e1e"

                Text {
                    text: "▲"
                    color: "white"
                    anchors.fill: parent
                    font.pixelSize: 24
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    anchors.bottomMargin: 8
                }

                RectangularShadow {
                    visible: upMouseArea.containsMouse
                    anchors.fill: parent
                    z: -1
                    radius: parent.radius
                    blur: 5
                    spread: 2
                    color: Qt.darker(parent.color, 1.4)
                }

                MouseArea {
                    id: upMouseArea
                    anchors.fill: parent
                    cursorShape: Qt.PointingHandCursor
                    hoverEnabled: true

                    onClicked: () => {
                       manualController.performAction('up');
                    }
                }
            }

            Rectangle {
                Layout.column: 0
                Layout.row: 1
                width: 50
                height: 50
                radius: 50
                color: "#211e1e"

                Text {
                    text: "▲"
                    color: "white"
                    anchors.fill: parent
                    font.pixelSize: 24
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    anchors.rightMargin: 8
                    rotation: -90
                }

                RectangularShadow {
                    visible: leftMouseArea.containsMouse
                    anchors.fill: parent
                    z: -1
                    radius: parent.radius
                    blur: 5
                    spread: 2
                    color: Qt.darker(parent.color, 1.4)
                }

                MouseArea {
                    id: leftMouseArea
                    anchors.fill: parent
                    cursorShape: Qt.PointingHandCursor
                    hoverEnabled: true

                    onClicked: () => {
                       manualController.performAction('left')
                    }
                }
            }

            Rectangle {
                Layout.column: 2
                Layout.row: 1
                width: 50
                height: 50
                radius: 50
                color: "#211e1e"

                Text {
                    text: "▲"
                    color: "white"
                    anchors.fill: parent
                    font.pixelSize: 24
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    anchors.leftMargin: 8
                    rotation: 90
                }

                RectangularShadow {
                    visible: rightMouseArea.containsMouse
                    anchors.fill: parent
                    z: -1
                    radius: parent.radius
                    blur: 5
                    spread: 2
                    color: Qt.darker(parent.color, 1.4)
                }

                MouseArea {
                    id: rightMouseArea
                    anchors.fill: parent
                    cursorShape: Qt.PointingHandCursor
                    hoverEnabled: true

                    onClicked: () => {
                       manualController.performAction('right')
                    }
                }
            }

            Rectangle {
                Layout.column: 1
                Layout.row: 2
                width: 50
                height: 50
                radius: 50
                color: "#211e1e"
                Text {
                    text: "▲"
                    color: "white"
                    anchors.fill: parent
                    font.pixelSize: 24
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    anchors.topMargin: 8
                    rotation: 180
                }

                RectangularShadow {
                    visible: downMouseArea.containsMouse
                    anchors.fill: parent
                    z: -1
                    radius: parent.radius
                    blur: 5
                    spread: 2
                    color: Qt.darker(parent.color, 1.4)
                }

                MouseArea {
                    id: downMouseArea
                    anchors.fill: parent
                    cursorShape: Qt.PointingHandCursor
                    hoverEnabled: true

                    onClicked: () => {
                       manualController.performAction('down')
                    }
                }
            }
        }

        RowLayout {
            id: buttonsLayout
            anchors.top: arrowsLayout.bottom
            anchors.topMargin: 24
            anchors.horizontalCenter: parent.horizontalCenter
            spacing: 16

            ListModel {
                id: buttonsModel

                ListElement {
                    label: "TEST"
                    color: "yellow"
                    iconSource: "qrc:/icons/gears-icon.svg"
                    textSymbol: ""
                    command: "test"
                }
                ListElement {
                    label: "RUN"
                    color: "green"
                    iconSource: ""
                    textSymbol: "I"
                    command: "run"
                }
                ListElement {
                    label: "MAN"
                    color: "black"
                    iconSource: "qrc:/icons/hand-icon.svg"
                    textSymbol: ""
                    command: "man"
                }
                ListElement {
                    label: "AUTO"
                    color: "black"
                    iconSource: "qrc:/icons/automatization-icon.svg"
                    textSymbol: ""
                    command: "auto"
                }
                ListElement {
                    label: "STOP"
                    color: "red"
                    iconSource: ""
                    textSymbol: "O"
                    command: "stop"
                }
            }

            Repeater {
                model: buttonsModel
                delegate: Item {
                    width: 50
                    height: 80

                    Rectangle {
                        id: iconCircle
                        width: 50
                        height: 50
                        radius: 50
                        color: model.color

                        Image {
                            visible: model.iconSource.length
                            source: model.iconSource
                            anchors.centerIn: parent
                            width: 48
                            height: 24
                            fillMode: Image.PreserveAspectFit
                        }

                        Text {
                            visible: !model.iconSource.length
                                     && model.textSymbol.length
                            anchors.centerIn: parent
                            font.pixelSize: 24
                            text: model.textSymbol
                            color: "white"
                            font.bold: true
                        }

                        RectangularShadow {
                            visible: hoverArea.containsMouse
                            anchors.fill: iconCircle
                            z: -1
                            radius: iconCircle.radius
                            blur: 5
                            spread: 2
                            color: Qt.darker(iconCircle.color, 1.4)
                        }

                        MouseArea {
                            id: hoverArea
                            anchors.fill: parent
                            cursorShape: Qt.PointingHandCursor
                            hoverEnabled: true

                            onClicked: () => {
                               manualController.performAction(model.command);
                            }
                        }
                    }

                    Text {
                        anchors.top: iconCircle.bottom
                        anchors.topMargin: 4
                        anchors.horizontalCenter: parent.horizontalCenter
                        text: model.label
                        color: "black"
                        font.pixelSize: 16
                        font.bold: true
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                    }
                }
            }
        }
    }
}
