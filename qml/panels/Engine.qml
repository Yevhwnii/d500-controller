import QtQuick
import QtQuick.Layouts

import '../components';

Item {
    id: engineStatsPanel;

    required property bool isVisible;
    property bool disabled: false;

    Rectangle {
        anchors.fill: parent
        color: "#f0f0f0"

        Column {
            anchors.left: parent.left;
            anchors.top: parent.top;
            anchors.topMargin: 16
            anchors.leftMargin: 16

            ListModel {
                id: engineModel
                ListElement { label: qsTr("Battery Voltage"); valueProperty: "batteryVoltage"; unit: "Vdc" }
                ListElement { label: qsTr("Engine Speed"); valueProperty: "engineSpeed"; unit: "Rpm" }
                ListElement { label: qsTr("Engine Temperature"); valueProperty: "engineTemperature"; unit: "°C" }
                ListElement { label: qsTr("Oil Pressure"); valueProperty: "oilPressure"; unit: "Bar" }
                ListElement { label: qsTr("Oil Temperature"); valueProperty: "oilTemperature"; unit: "°C" }
                ListElement { label: qsTr("Fuel Level"); valueProperty: "fuelLevel"; unit: "%" }
            }

            Repeater {
                model: engineModel
                DataCell {
                    label: model.label
                    value: engineStatus[model.valueProperty]
                    unit: model.unit
                    labelWidth: 150
                }
            }
        }
    }

    onIsVisibleChanged: () => {                       
        if (isVisible)
            engineStatus.startPolling(3000);
        else {
            engineStatus.stopPolling()
        }
    }
}
