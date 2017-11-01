import QtQuick 2.0

Item {
    id: coverFlow

    property ListModel model
    property int itemCount: 10
    property int topMargin: 80

    Rectangle {
        anchors.fill: parent
        color: "black"
    }

    Component.onCompleted: {
        pathView.currentIndex = 0;
    }

    PathView {
        id: pathView

        model: coverFlow.model
        delegate: MyDelegate {}
        path: coverFlowPath
        pathItemCount: coverFlow.itemCount

        anchors.fill: parent
        preferredHighlightBegin: 0.5
        preferredHighlightEnd: 0.5
        focus: true

        Keys.onRightPressed: {
            if (interactive) {
                incrementCurrentIndex()
            }
        }

        Keys.onLeftPressed: {
            if (interactive) {
                decrementCurrentIndex()
            }
        }
    }

    Path {
        id: coverFlowPath

        startX: 0
        startY: coverFlow.height / 3
        PathAttribute { name: "iconZ"; value: 0 }
        PathAttribute { name: "iconAngle"; value: 70 }
        PathAttribute { name: "iconScale"; value: 0.6 }

        PathLine { x: coverFlow.width * 0.3; y: coverFlow.height / 3;  }
        PathAttribute { name: "iconZ"; value: 50 }
        PathAttribute { name: "iconAngle"; value: 45 }
        PathAttribute { name: "iconScale"; value: 0.85 }
        PathPercent { value: 0.40 }

        PathLine { x: coverFlow.width * 0.5; y: coverFlow.height / 3;  }
        PathAttribute { name: "iconZ"; value: 100 }
        PathAttribute { name: "iconAngle"; value: 0 }
        PathAttribute { name: "iconScale"; value: 1.0 }

        PathLine { x: coverFlow.width * 0.7; y: coverFlow.height / 3; }
        PathAttribute { name: "iconZ"; value: 50 }
        PathAttribute { name: "iconAngle"; value: -45 }
        PathAttribute { name: "iconScale"; value: 0.85 }
        PathPercent { value: 0.60 }

        PathLine { x: coverFlow.width; y: coverFlow.height / 3; }
        PathAttribute { name: "iconZ"; value: 0 }
        PathAttribute { name: "iconAngle"; value: -70 }
        PathAttribute { name: "iconScale"; value: 0.6 }
        PathPercent { value: 1.0 }
    }
}
