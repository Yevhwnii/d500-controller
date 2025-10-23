import QtQuick
import QtQuick.Controls


ApplicationWindow {
    width: 868
    height: 640
    visible: true
    title: qsTr("D-500 Controller")

    SplitView {
        anchors.fill: parent
        orientation: Qt.Horizontal

        Controls {
            id: controls
            SplitView.minimumWidth: 150
            SplitView.preferredWidth: 150
            SplitView.maximumWidth: 200
            isDeviceConnected: panel.isDeviceConnected;
        }

        InformationPanel {
            id: panel;
            SplitView.fillWidth: true
            currentIndex: controls.currentTab
        }
    }

}
