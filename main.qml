//import procinfo.CPUInfoReader 1.0
import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2

ApplicationWindow {
    title: qsTr("cpuinfo")
    width: 640
    height: 480
    visible: true

    MainForm {
        anchors.fill: parent
        refreshButton.onClicked: infoText.text = qsTr("hello")
        // TODO: once CPUInfoReader import works, show the result here
    }
}
