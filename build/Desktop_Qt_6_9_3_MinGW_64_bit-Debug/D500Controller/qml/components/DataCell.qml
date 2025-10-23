import QtQuick
import QtQuick.Layouts
import QtQuick.Controls

Row {
    property string label: "Label"
    property string value: "---"
    property string unit: ""
    property int labelWidth: 130

    spacing: 16

    Text {
        text: label + ":"
        color: "#222"
        font.pixelSize: 14
        verticalAlignment: Text.AlignVCenter
        width: labelWidth
        horizontalAlignment: Text.AlignLeft
    }
    Text {
        text: value + " " + unit
        color: "#222"
        font.pixelSize: 14
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignLeft
    }
}
