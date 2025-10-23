import QtQuick
import QtQuick.Layouts
import QtQuick.Controls


Item {
    id: controlsPanel

    property int tabBarHeight: 0;
    property int tabBarItemHeight: 0;
    property int tabBarItemsAmount: 0;
    property int currentTab: tabBar.currentIndex

    property bool isDeviceConnected: false;

    onIsDeviceConnectedChanged: () => {
        tabBar.currentIndex = tabBar.currentIndex + 1;
    }

    TabBar {
        id: tabBar
        anchors.fill: parent
        spacing: 4
        anchors.leftMargin: -25
        anchors.topMargin: 5

        contentItem: ListView {
            model: tabBar.contentModel
            currentIndex: tabBar.currentIndex

            spacing: tabBar.spacing
            orientation: ListView.Vertical
            boundsBehavior: Flickable.StopAtBounds
            flickableDirection: Flickable.AutoFlickIfNeeded
            snapMode: ListView.SnapToItem

            Repeater {
                model: [qsTr("Connection"), qsTr("Engine"), qsTr("Network"), qsTr("Control")]
                TabButton {
                    id: control
                    text: modelData
                    padding: 0
                    anchors.horizontalCenter: parent.horizontalCenter
                    enabled: shouldEnable()

                    function shouldEnable() {
                        if (modelData === qsTr("Connection")) return !controlsPanel.isDeviceConnected;
                        return controlsPanel.isDeviceConnected;
                    }

                    contentItem: Text {
                        id: text
                        text: control.text
                        anchors.left : control.left
                        color: control.enabled ? control.checked ? "#fff" : "#000" : "#a0a0a0"
                        font.weight: Font.Normal
                        font.pixelSize: 12
                    }

                    background: Rectangle {
                        anchors.left: parent.left
                        anchors.leftMargin: -5
                        width: text.paintedWidth + 10
                        color: control.checked ? "#357EC7" : "#fff" ;
                    }

                    Component.onCompleted: () => {
                        if(!controlsPanel.tabBarItemHeight) controlsPanel.tabBarItemHeight = height;
                    }
                }
            }

            Component.onCompleted: () => {
                controlsPanel.tabBarHeight = contentHeight;
                controlsPanel.tabBarItemsAmount = count;
                }
            }

            onCurrentIndexChanged: {
                    controlsPanel.currentTab = currentIndex
                }
        }

        Canvas {
            width: 30
            height: tabBarHeight
            contextType: "2d"
            anchors.left: parent.left
            anchors.top: parent.top
            anchors.topMargin: tabBar.anchors.topMargin
            onPaint: {
                const ctx = getContext("2d")
                const xOffset = 1;
                const yOffset = 2;
                const spacing = tabBar.spacing;
                const itemsCount = controlsPanel.tabBarItemsAmount;
                const itemHeight = controlsPanel.tabBarItemHeight;

                const drawHorizontalLine = (y) => {
                    ctx.moveTo(width / 2 - xOffset, y)
                    ctx.lineTo(width, y)
                }
                const drawVerticalLine = (y1, y2) => {
                    ctx.moveTo(width / 2, y1 + yOffset)
                    ctx.lineTo(width / 2, y2 - yOffset)
                }
                const calculateY = (itemHeight, spacing, step) => {
                    return (itemHeight / 2) + (itemHeight + spacing) * step;
                }

                ctx.setLineDash([2, 1])
                ctx.strokeStyle = "#000"
                ctx.beginPath()

                for (let i = 0; i < itemsCount; ++i) {
                    const y = calculateY(itemHeight, spacing, i);
                    drawHorizontalLine(y);

                    const drawToY = calculateY(itemHeight, spacing, i + 1);
                    if (i + 1 < itemsCount)
                        drawVerticalLine(y, drawToY)
                }

                ctx.stroke()
            }
        }
    }


