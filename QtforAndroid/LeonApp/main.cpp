#include "MainWgt.h"
#include <QApplication>
#include <QScreen>
#include <QFont>
#include <QDesktopWidget>
#include <QMainWindow>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//#ifdef ANDROID
//    QSize iconSize(32, 32);

//    QScreen *screen = qApp->primaryScreen();
//    QFont f = qApp->font();
//    int pixelSize = (f.pointSize() * screen->logicalDotsPerInch()) / 72;
//    QSize screenSize = screen->size();
//    if(screenSize.width() > 960 || screenSize.height() > 960)
//    {
//        iconSize *= ((qreal)pixelSize) / 20;
//    }
//#endif

    QString styleName;
    styleName = ":/Data/Css/blue.css";

    QFile file(styleName);
    file.open(QFile::ReadOnly);
    QString qss = QLatin1String(file.readAll());
    qApp->setStyleSheet(qss);
    qApp->setPalette(QPalette(QColor("#F0F0F0")));

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));


    //QDesktopWidget* desktopWgt =  QApplication::desktop();
    MainWgt w;
    //w.show();

    QMainWindow mainwindow;
    mainwindow.setCentralWidget(&w);
    mainwindow.show();

    return a.exec();
}
