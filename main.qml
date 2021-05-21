import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Banco de dados")
    ColumnLayout {
        id: columnLayout
        width: parent.width
        height: parent.height
        Rectangle {
            Layout.fillWidth: true
            Layout.preferredHeight: parent.height / 2
            color: "#fafafa"
            Text {
                anchors.centerIn: parent
                text: "Verique o terminal"
                color: "black"
                font.pixelSize: 24
            }
        }
    }
}
