import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    visible: true
    width: 900
    height: 600
    title: qsTr("Hello QML")

   ListModel{
       id:model
       ListElement{url:"qrc:/Img/xjs_1.jpg"}
       ListElement{url:"qrc:/Img/xjs_2.jpg"}
       ListElement{url:"qrc:/Img/xjs_3.jpg"}
       ListElement{url:"qrc:/Img/xjs_4.jpg"}
       ListElement{url:"qrc:/Img/xjs_5.jpg"}
   }

   CoverFlow{
       anchors.fill:parent
       model:model
   }
}
