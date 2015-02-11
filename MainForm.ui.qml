import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1

Item {
    width: 640
    height: 480

    property alias refreshButton: refreshButton
    property alias infoText: infoText

    Button {
        id: refreshButton
        x: 282
        y: 8
        text: qsTr("Refresh")
    }

    TextArea {
        id: infoText
        x: 8
        y: 42
        width: 624
        height: 430
        font.family: "Courier"
    }
}
