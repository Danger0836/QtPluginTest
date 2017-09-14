import QtQuick 2.5
import QtQuick.Window 2.2
import com.vrv.TestPlugin 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }
    }

    Text {
        text: qsTr("Hello World")
        anchors.centerIn: parent
    }

    MyRect {
        anchors.centerIn: parent
    }

    TestPlguin {

    }
}
