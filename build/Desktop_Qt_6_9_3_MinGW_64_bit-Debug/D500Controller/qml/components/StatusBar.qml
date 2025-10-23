import QtQuick
import QtQuick.Layouts

Item {
    id: bar

    property string statusText: qsTr("Not connected")
    property string statusColor: 'lightgrey'

    anchors.top: parent.top
    anchors.left: parent.left
    anchors.right: parent.right
    height: 32

    Rectangle {
        anchors.fill: parent
        color: "#fff"
        border.color: "lightgrey"
        border.width: 1


        RowLayout {
            anchors.right: parent.right
            anchors.verticalCenter: parent.verticalCenter
            anchors.rightMargin: 16

            Rectangle {
                id: status
                width: 12
                height: 12
                radius: 6
                color: statusColor
            }

            Text {
                text: statusText
                font.pixelSize: 12
            }
        }
    }

    Connections {
        target: connectionManager
        function onConnectionStateChange(newStatus) {
            const statusMap = {
                0: {text: qsTr("Not connected"), statusColor: "lightgrey"},
                1: {text: qsTr("Connecting..."), statusColor: "orange"},
                2: {text: qsTr("Connected"), statusColor: "green"},
            };
            const status = statusMap[newStatus];
            bar.statusText = status.text;
            bar.statusColor = status.statusColor;
        }
    }
}
