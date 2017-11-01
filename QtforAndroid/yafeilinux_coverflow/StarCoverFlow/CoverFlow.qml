import QtQuick 2.0
import QtGraphicalEffects 1.0

Item {
    id: coverFlow

    property ListModel model
    property int itemCount: 5

    Rectangle {
        anchors.fill: parent
        color: "black"
    }

    PathView {
        id: pathView
        anchors.fill: parent

        model: coverFlow.model
        delegate: myDelegate
        path: coverFlowPath
        pathItemCount: coverFlow.itemCount
        preferredHighlightBegin: 0.5
        preferredHighlightEnd: 0.5
    }

    Path {
        id: coverFlowPath
        startX: 0
        startY: coverFlow.height / 3
        PathAttribute { name: "iconZ"; value: 0 }
        PathAttribute { name: "iconAngle"; value: 70 }
        PathAttribute { name: "iconScale"; value: 0.6 }

        PathLine { x: coverFlow.width * 0.5; y: coverFlow.height / 3 }
        PathAttribute{ name: "iconZ"; value: 100 }
        PathAttribute{ name: "iconAngle"; value: 0 }
        PathAttribute{ name: "iconScale"; value: 1.0 }

        PathLine { x: coverFlow.width; y: coverFlow.height / 3 }
        PathAttribute{ name: "iconZ"; value: 0 }
        PathAttribute{ name: "iconAngle"; value: -70 }
        PathAttribute{ name: "iconScale"; value: 0.6 }
        PathPercent { value: 1.0 }
    }

    Component {
        id: myDelegate
        Item {
            id: delegateItem
            width: 320
            height: 450
            z: PathView.iconZ
            scale: PathView.iconScale

            Column {
                id: delegate
                spacing: 10

                Image {
                    id: dlgImage
                    source: url
                    width: delegateItem.width
                    height: delegateItem.height
                }

                Item {
                    width: delegateItem.width
                    height: delegateItem.height

                    Image {
                        id: reflection
                        width: delegateItem.width
                        height: delegateItem.height
                        source: dlgImage.source
                        opacity: 0.4
                        transform: Scale {
                            yScale: -1
                            origin.y: delegateItem.height / 2
                        }
                    }

                    LinearGradient {
                        width: delegateItem.width
                        height: delegateItem.height
                        gradient: Gradient {
                            GradientStop { position: 0.0; color: Qt.rgba(0, 0, 0, 0.1) }
                            GradientStop { position: 0.4; color: Qt.rgba(0, 0 ,0, 1) }
                        }
                    }
                }
            }

            transform: Rotation {
                origin.x: dlgImage.width / 2
                origin.y: dlgImage.height / 2
                axis { x: 0; y: 1; z: 0 }
                angle: delegateItem.PathView.iconAngle
            }
        }
    }
}
