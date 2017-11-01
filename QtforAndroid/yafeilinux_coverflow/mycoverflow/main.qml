import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    visible: true
    width: 1100; height: 900

    ListModel {
        id: model
        ListElement { url: "qrc:/images/01.png" }
        ListElement { url: "qrc:/images/02.png" }
        ListElement { url: "qrc:/images/03.png" }
        ListElement { url: "qrc:/images/04.png" }
        ListElement { url: "qrc:/images/05.png" }
    }

    CoverFlow {
        anchors.fill: parent
        model: model
    }
}

