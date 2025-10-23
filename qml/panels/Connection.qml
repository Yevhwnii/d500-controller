import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Item {
    id: root;

    property bool isConnected: false;
    property bool rememberDevice: false

    property string ip: "";
    property int port: 502

    Rectangle {
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        width: 270
        height: 175
        color: "#f0f0f0"
        border.color: "#bcbcbc"
        border.width: 1
        radius: 2

        GridLayout {
            anchors.fill: parent
            columns: 2
            rowSpacing: 0
            columnSpacing: 8
            anchors.margins: 8

            Rectangle {
                Layout.row: 0
                Layout.column: 0
                Layout.fillWidth: true
                Layout.preferredHeight: 30
                color: "transparent"
                border.color: "#bcbcbc"
                border.width: 1

                Text {
                    anchors.verticalCenter: parent.verticalCenter
                    anchors.left: parent.left
                    anchors.leftMargin: 6
                    text: qsTr("IP Address:")
                    font.pixelSize: 14
                }
            }

            Rectangle {
                Layout.row: 0
                Layout.column: 1
                Layout.preferredWidth: 140
                Layout.preferredHeight: 30
                color: "transparent"

                TextField {
                    id: ipField
                    text: ip
                    anchors.fill: parent
                    placeholderText: "192.168.0.10"
                    font.pixelSize: 14
                }
            }

            Rectangle {
                Layout.row: 1
                Layout.column: 0
                Layout.fillWidth: true
                Layout.preferredHeight: 30
                color: "transparent"
                border.color: "#bcbcbc"
                border.width: 1

                Text {
                    anchors.verticalCenter: parent.verticalCenter
                    anchors.left: parent.left
                    anchors.leftMargin: 6
                    text: qsTr("Port:")
                    font.pixelSize: 14
                }
            }

            Rectangle {
                Layout.row: 1
                Layout.column: 1
                Layout.preferredWidth: 140
                Layout.preferredHeight: 30
                color: "transparent"

                TextField {
                    id: portField
                    text: port
                    anchors.fill: parent
                    placeholderText: "502"
                    font.pixelSize: 14
                    inputMethodHints: Qt.ImhDigitsOnly
                }
            }

            Item {
                Layout.row: 2
                Layout.column: 0
                Layout.columnSpan: 2
                Layout.fillWidth: true
                Layout.preferredHeight: 24

                Row {
                    anchors.left: parent.left
                    anchors.verticalCenter: parent.verticalCenter
                    spacing: 4

                    CheckBox {
                        id: rememberCheck
                        text: qsTr("Remember this device")
                        checked: rememberDevice
                        onCheckedChanged: rememberDevice = checked
                        font.pixelSize: 12
                    }
                }
            }

            Rectangle {
                Layout.columnSpan: 2
                width: parent.width
                height: 36
                color: "#f0f0f0"
                border.width: 1
                border.color: "#999999"
                radius: 2

                Text {
                    text: qsTr("Connect")
                    anchors.centerIn: parent
                    font.pixelSize: 16
                    color: "#191919"
                }

                MouseArea {
                    anchors.fill: parent
                    onClicked: () => {
                        const ip = ipField.text;
                        const port = portField.text;
                        root.isConnected = connectionManager.connectDevice(ip, Number(port));

                        if (rememberDevice) {
                            settingsManager.saveDevice(ip, port);
                        }
                    }
                    cursorShape: Qt.PointingHandCursor
                }
            }
        }
    }

    Component.onCompleted: () => {
        const lastDevice = settingsManager.loadLastDevice();
        if (lastDevice.ip && lastDevice.port) {
            root.ip = lastDevice.ip;
            root.port = lastDevice.port;
        }
    }
}
