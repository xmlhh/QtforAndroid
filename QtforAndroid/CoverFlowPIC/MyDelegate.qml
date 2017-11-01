import QtQuick 2.0
import QtGraphicalEffects 1.0

Item {
    id: delegateItem
    z: PathView.iconZ
    width: 320
    height: 450
    scale: PathView.iconScale

    Column  {
        id: delegate
        y: coverFlow.topMargin
        spacing: 10

        Rectangle {
            id: delegateImage

            width: delegateItem.width
            height: delegateItem.height
            z: reflection.z + 1
            color: "white"

            Image {
                id: dlgImg

                width: delegateImage.width - 4
                height: delegateImage.height - 4
                anchors.centerIn: parent
                clip: true
                fillMode: Image.PreserveAspectCrop
                source: url
                smooth: true
            }
        }

        Item {
            width: delegateImage.width
            height: delegateImage.height

            Image {
                id: reflection

                width: delegateImage.width
                height: delegateImage.height
                clip: true
                source: dlgImg.source
                fillMode: Image.PreserveAspectCrop
                smooth: true

                transform : Scale {
                    yScale: -1
                    origin.y: delegateImage.height / 2
                }
            }
            LinearGradient {
                width: delegateImage.width
                height: delegateImage.height
                gradient: Gradient {
                    GradientStop { position: 0.0; color:  Qt.rgba(0, 0, 0, 0.3)}
                    GradientStop { position: 0.4; color:  Qt.rgba(0, 0, 0, 1)}
                }
            }
        }

        transform: Rotation {
            origin.x: delegateImage.width / 2
            origin.y: delegateImage.height / 2
            axis { x: 0; y: 1; z: 0 }
            angle: delegateItem.PathView.iconAngle
        }

        states: [
            State {
                name: "scaled"
                PropertyChanges {
                    target: delegateImage
                    scale: 1.8
                }
            }
        ]

        transitions: [
            Transition {
                from: ""
                to: "scaled"
                reversible: true
                ParallelAnimation {
                    PropertyAnimation {
                        target: delegateImage
                        properties: "scale"
                        duration: 300
                    }
                }
            }
        ]
    }

}
