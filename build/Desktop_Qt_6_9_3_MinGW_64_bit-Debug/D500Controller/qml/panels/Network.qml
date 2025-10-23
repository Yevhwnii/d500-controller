import QtQuick
import QtQuick.Layouts
import QtQuick.Controls

import '../components';

Item {
    id: networkStatsPanel;

    required property bool isVisible;
    property bool disabled: false;

    Rectangle {
        anchors.fill: parent
        color: "#f0f0f0"

        GridLayout {
            id: grid
            columns: 2
            rowSpacing: 6
            columnSpacing: 36
            anchors.left: parent.left
            anchors.top: parent.top
            anchors.margins: 32

            ListModel {
                id: networkModel
                ListElement { label: qsTr("Network L1"); valueProperty: "networkL1Voltage"; unit: "V" }
                ListElement { label: qsTr("Network L2"); valueProperty: "networkL2Voltage"; unit: "V" }
                ListElement { label: qsTr("Network L3"); valueProperty: "networkL3Voltage"; unit: "V" }
                ListElement { label: qsTr("Network L1-L2"); valueProperty: "networkL1L2Voltage"; unit: "V" }
                ListElement { label: qsTr("Network L2-L3"); valueProperty: "networkL2L3Voltage"; unit: "V" }
                ListElement { label: qsTr("Network L3-L1"); valueProperty: "networkL3L1Voltage"; unit: "V" }
                ListElement { label: qsTr("Network L1 Amp"); valueProperty: "networkL1Amp"; unit: "A" }
                ListElement { label: qsTr("Network L2 Amp"); valueProperty: "networkL2Amp"; unit: "A" }
                ListElement { label: qsTr("Network L3 Amp"); valueProperty: "networkL3Amp"; unit: "A" }
                ListElement { label: qsTr("Network Neutral Amp"); valueProperty: "networkNeutralAmp"; unit: "A" }
            }

            ListModel {
                id: gensetModel
                ListElement { label: qsTr("Genset L1"); valueProperty: "gensetL1Voltage"; unit: "V" }
                ListElement { label: qsTr("Genset L2"); valueProperty: "gensetL2Voltage"; unit: "V" }
                ListElement { label: qsTr("Genset L3"); valueProperty: "gensetL3Voltage"; unit: "V" }
                ListElement { label: qsTr("Genset L1-L2"); valueProperty: "gensetL1L2Voltage"; unit: "V" }
                ListElement { label: qsTr("Genset L2-L3"); valueProperty: "gensetL2L3Voltage"; unit: "V" }
                ListElement { label: qsTr("Genset L3-L1"); valueProperty: "gensetL3L1Voltage"; unit: "V" }
                ListElement { label: qsTr("Genset L1 Amp"); valueProperty: "gensetL1Amp"; unit: "A" }
                ListElement { label: qsTr("Genset L2 Amp"); valueProperty: "gensetL2Amp"; unit: "A" }
                ListElement { label: qsTr("Genset L3 Amp"); valueProperty: "gensetL3Amp"; unit: "A" }
                ListElement { label: qsTr("Genset Neutral Amp"); valueProperty: "gensetNeutralAmp"; unit: "A" }
            }

            Row {
                Layout.column: 0
                Layout.row: 0
                Layout.bottomMargin: 8

                Row {
                    spacing: 16

                    Label {
                        text: qsTr("Mains")
                        font.pixelSize: 15
                        width: 170
                    }

                    Image {
                        source: "qrc:/icons/power-tower-icon.svg"
                        width: 32
                        height: 20
                        fillMode: Image.PreserveAspectFit
                    }
                }
            }

            Row {
                Layout.column: 1
                Layout.row: 0
                Layout.bottomMargin: 8

                Row {
                    spacing: 16

                    Label {
                        text: qsTr("Genset")
                        font.pixelSize: 15
                        width: 200
                    }

                    Image {
                        source: "qrc:/icons/battery-icon.svg"
                        width: 32
                        height: 20
                    }
                }
            }

            Repeater {
                model: networkModel
                DataCell {
                    label: model.label
                    value: networkStatus[model.valueProperty]
                    unit: model.unit
                    Layout.row: index + 1
                    Layout.column: 0
                    labelWidth: 170
                }
            }

            Repeater {
                model: gensetModel
                DataCell {
                    label: model.label
                    value: networkStatus[model.valueProperty]
                    unit: model.unit
                    Layout.row: index + 1
                    Layout.column: 1
                    labelWidth: 200
                }
            }
        }
    }

    onIsVisibleChanged: () => {
        if (isVisible)
            networkStatus.startPolling(3000);
        else {
            networkStatus.stopPolling()
        }
    }
}
