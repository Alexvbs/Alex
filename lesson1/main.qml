import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

ApplicationWindow {
    id: win
    visible: true
    width: 640
    height: 480
    title: qsTr("lesson")

    Column {
        id: col
        spacing: 20
       anchors.horizontalCenter: parent.horizontalCenter
        width: parent.width
        height: parent.height* .5

        TextField {
            width: parent.width* .8
            height: parent.height * .2
            anchors.horizontalCenter: parent.horizontalCenter
            id: username
            placeholderText: qsTr("Username")
            font.pointSize: 14
            validator: RegExpValidator {regExp:/^((\+7|8)+[0-9]{10})$/}
            background:
                Rectangle {
                    radius: 5
                    border.color: "grey"
                    border.width: 1
            }
        }
        TextField {
            width: parent.width* .9
            height: parent.height* .2
            anchors.horizontalCenter: parent.horizontalCenter
            id: pass
            placeholderText: qsTr("Number phone")
            font.pointSize: 14
            background:
                Rectangle {
                radius: 5
                border.color: "grey"
                border.width: 1
            }
        }
        TextField {
            width: parent.width
            height: parent.height* .6
            anchors.horizontalCenter: parent.horizontalCenter
            id: mind
            placeholderText: qsTr("Enter text")
            font.pointSize: 14
            maximumLength: 10

            background:
                Rectangle {
                radius: 5
                border.color: "grey"
                border.width: 1
            }
        }
    }
}
