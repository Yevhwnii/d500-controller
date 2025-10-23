import QtQuick
import QtQuick.Layouts

import 'panels';
import 'components';

Item {
    id: informationalPanel
    required property int currentIndex;
    property bool isDeviceConnected: connection.isConnected;

    StatusBar {
        id: statusBar
    }

    StackLayout {
        id: layout
        anchors.top: statusBar.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        currentIndex: informationalPanel.currentIndex

        Connection {
            id: connection
        }

        Engine {
            id: engineStats
            isVisible: StackLayout.isCurrentItem
        }

        Network {
            id: networkStats
            isVisible: StackLayout.isCurrentItem
        }

        ManualControl {
            id: controls
            isVisible: StackLayout.isCurrentItem
        }
    }
}
