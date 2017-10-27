#include "widget.h"
#include <QApplication>
#include <QElapsedTimer>
#include <QSplashScreen>
#include <QLabel>
#include <QMovie>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    QElapsedTimer t;//定义运行时间变量

/*@author by lhh
* @brief Merray Christmas
* @param 娱乐
*/
#if 0

//启动画面0
    QPixmap pixmap0(":/Image/christmas/JiXiangRuYi.gif");
    QSplashScreen splash0(pixmap0);
    QLabel lbl0(&splash0);
    QMovie mv0(":/Image/christmas/JiXiangRuYi.gif");
    lbl0.setMovie(&mv0);
    lbl0.setWindowFlags(Qt::FramelessWindowHint);//隐藏边框
    mv0.start();
    splash0.show();
    splash0.setCursor(Qt::BlankCursor);//设置光标颜色

    t.start();
    while(t.elapsed()<8000)
    {
        QCoreApplication::processEvents();
    }
    splash0.close();

//启动画面
    //QPixmap pixmap(":/new/prefix1/images/teachers_day.png");
    QPixmap pixmap(":/Image/christmas/apple512.png");
    QSplashScreen splash(pixmap);
    splash.setDisabled(true);//禁止事件处理响应
    splash.show();
    a.processEvents();//频繁处理响应事件

    t.start();
    while(t.elapsed()<2500)
    {
        QCoreApplication::processEvents();
    }
    splash.showMessage(QString::fromUtf8("《我是你的小丫小苹果》"),
                       Qt::AlignCenter|Qt::AlignAbsolute, Qt::green);//QFont::setBold(true)不是QObject类
    //splash.showMessage(QObject::tr(">>>>>>>>>>>>>>>>Leon<<<<<<<<<<<<<<<<<"), Qt::AlignHCenter |Qt::AlignBottom, Qt::blue);

    t.start();
    while(t.elapsed()<2500)
    {
        QCoreApplication::processEvents();
    }

    QPixmap pixmap20(":/Image/christmas/apple512.png");
    QSplashScreen splash20(pixmap20);
    splash20.setDisabled(true);//禁止事件处理响应
    splash20.show();
    a.processEvents();//保证事件处理过程中，可以处理其他事件
    splash20.showMessage(QString::fromUtf8("\n\n\n\n\n亲，你来咬我啊！！！"),
                       Qt::AlignCenter|Qt::AlignAbsolute, Qt::green);

    t.start();
    while(t.elapsed()<2500)
    {
        QCoreApplication::processEvents();
    }
    QPixmap pixmap21(":/Image/christmas/apple512.png");
    QSplashScreen splash21(pixmap21);
    splash21.setDisabled(true);//禁止事件处理响应
    splash21.show();
    a.processEvents();//保证事件处理过程中，可以处理其他事件
    splash21.showMessage(QString::fromUtf8("\n\n\n\n\n\n\n\n来咬我啊！！！"),
                       Qt::AlignCenter|Qt::AlignAbsolute, Qt::green);

    t.start();
    while(t.elapsed()<2500)
    {
        QCoreApplication::processEvents();
    }
    QPixmap pixmap22(":/Image/christmas/apple512.png");
    QSplashScreen splash22(pixmap22);
    splash22.setDisabled(true);//禁止事件处理响应
    splash22.show();
    a.processEvents();//保证事件处理过程中，可以处理其他事件
    splash22.showMessage(QString::fromUtf8("\n\n\n\n\n\n\n\n\n\n咬我啊！！！"),
                       Qt::AlignCenter|Qt::AlignAbsolute, Qt::green);

    t.start();
    while(t.elapsed()<2500)
    {
        QCoreApplication::processEvents();
    }
    QPixmap pixmap23(":/Image/christmas/apple512.png");
    QSplashScreen splash23(pixmap23);
    splash23.setDisabled(true);//禁止事件处理响应
    splash23.show();
    a.processEvents();//保证事件处理过程中，可以处理其他事件
    splash23.showMessage(QString::fromUtf8("\n\n\n\n\n\n\n\n\n\n\n\nO(∩_∩)O哈哈哈哈~"),
                       Qt::AlignCenter|Qt::AlignAbsolute, Qt::green);

    t.start();
    while(t.elapsed()<2500)
    {
        QCoreApplication::processEvents();
    }

    QPixmap pixmap24(":/Image/christmas/apple512.png");
    QSplashScreen splash24(pixmap24);
    splash24.setDisabled(true);//禁止事件处理响应
    splash24.show();
    a.processEvents();//保证事件处理过程中，可以处理其他事件
    splash24.showMessage(QString::fromUtf8("\n\n\n\n\n\n\n\n\n\n\n\n\n\n平安夜，祝您平平安安，健健康康，快快乐乐！！！"),
                       Qt::AlignCenter|Qt::AlignAbsolute, Qt::green);

    t.start();
    while(t.elapsed()<6000)
    {
        QCoreApplication::processEvents();
    }
    QPixmap pixmap25(":/Image/christmas/apple512.png");
    QSplashScreen splash25(pixmap25);
    splash25.setDisabled(true);//禁止事件处理响应
    splash25.show();
    a.processEvents();//保证事件处理过程中，可以处理其他事件
    splash25.showMessage(QString::fromUtf8("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n~\\(^o^)/~廖浩辉赠~\\(^o^)/~"),
                       Qt::AlignCenter|Qt::AlignAbsolute, Qt::green);

    t.start();
    while(t.elapsed()<6000)
    {
        QCoreApplication::processEvents();
    }
    splash.close();
    splash20.close();
    splash21.close();
    splash22.close();
    splash23.close();
    splash24.close();
    splash25.close();


    QPixmap pixmap26(":/Image/christmas/apple512.png");
    QSplashScreen splash26(pixmap26);
    splash26.setDisabled(true);//禁止事件处理响应
    splash26.show();
    a.processEvents();//保证事件处理过程中，可以处理其他事件

//启动画面1
    QPixmap pixmap1(":/Image/christmas/christmas1.gif");
    QSplashScreen splash1(pixmap1);
    QLabel lbl1(&splash1);
    QMovie mv1(":/Image/christmas/christmas1.gif");
    lbl1.setMovie(&mv1);
    lbl1.setWindowFlags(Qt::FramelessWindowHint);//隐藏边框
    mv1.start();
    splash1.show();
    splash1.setCursor(Qt::BlankCursor);//设置光标颜色

    t.start();
    while(t.elapsed()<10000)
    {
        QCoreApplication::processEvents();
    }
    splash1.close();
    //splash25.close();


/*//启动画面3
    QPixmap pixmap3(":/new/prefix1/images/christmas12.gif");
    QSplashScreen splash3(pixmap3);
    QLabel lbl3(&splash3);
    QMovie mv3(":/new/prefix1/images/christmas12.gif");
    lbl3.setMovie(&mv3);
    lbl3.setWindowFlags(Qt::FramelessWindowHint);//隐藏边框
    mv3.start();
    splash3.show();
    splash3.setCursor(Qt::BlankCursor);//设置光标颜色

    t.start();
    while(t.elapsed()<500)
    {
        QCoreApplication::processEvents();
    }

//启动画面4
    QPixmap pixmap4(":/new/prefix1/images/Bchristmas.gif");
    QSplashScreen splash4(pixmap4);
    QLabel lbl4(&splash4);
    QMovie mv4(":/new/prefix1/images/Bchristmas.gif");
    lbl4.setMovie(&mv4);
    lbl4.setWindowFlags(Qt::FramelessWindowHint);//隐藏边框
    mv4.start();
    splash4.show();
    splash4.setCursor(Qt::BlankCursor);//设置光标颜色

    t.start();
    while(t.elapsed()<6000)
    {
        QCoreApplication::processEvents();
    }
    splash3.close();
    splash4.close();
*/

//启动画面10
    QPixmap pixmap10(":/Image/christmas/Achristmas.gif");
    QSplashScreen splash10(pixmap10);
    QLabel lbl10(&splash10);
    QMovie mv10(":/Image/christmas/Achristmas.gif");
    lbl10.setMovie(&mv10);
    lbl10.setWindowFlags(Qt::FramelessWindowHint);//隐藏边框
    mv10.start();
    splash10.show();
    splash10.setCursor(Qt::BlankCursor);//设置光标颜色
    //splash10.showMessage(QObject::tr(">>>>>>>>>>>>>>>>Leon<<<<<<<<<<<<<<<<<"), Qt::AlignVCenter |Qt::AlignBottom, Qt::white);


    //t.start();
    //延时15s
    //while(t.elapsed()<15000)
    //{
    //    QCoreApplication::processEvents();
    //}
    //exit(0);//退出后台程序

    //QApplication::exit();

#endif




/*@author by lhh
* @brief 新年快乐！
* @param 娱乐
*/
#if 1
    //QElapsedTimer t;//定义运行时间变量

    QPixmap pixmap0(":/Image/happyNewYear/HappyLove.gif");
    QSplashScreen splash0(pixmap0);//定义飞溅屏幕
    QLabel lbl0(&splash0);//定义标签
    QMovie mv0(":/Image/happyNewYear/HappyLove.gif");
    lbl0.setMovie(&mv0);//标签设置动态gif
    mv0.start();//启动动态gif
    splash0.setDisabled(true);//禁止事件响应
    splash0.show();//飞溅屏幕显示
    a.processEvents();//频繁处理响应事件

    //splash0.showMessage(QObject::tr("      --Leon赠"),
    //                   Qt::AlignHCenter|Qt::AlignBottom, Qt::red);

    /*t.start();
    while(t.elapsed()<8000)
    {
        QCoreApplication::processEvents();
    }*/
    //splash0.close();

    QPixmap pixmap1(":/Image/happyNewYear/JiXiangRuYi.gif");
    QSplashScreen splash1(pixmap1);//定义飞溅屏幕
    QLabel lbl1(&splash1);//定义标签
    QMovie mv1(":/Image/happyNewYear/JiXiangRuYi.gif");
    lbl1.setMovie(&mv1);//标签设置动态gif
    mv1.start();//启动动态gif
    splash1.setDisabled(true);//禁止事件响应
    splash1.show();//飞溅屏幕显示
    a.processEvents();//频繁处理响应事件

    QPixmap pixmap00(":/Image/happyNewYear/fireworks2.gif");
    QSplashScreen splash00(pixmap00);//定义飞溅屏幕
    QLabel lbl00(&splash00);//定义标签
    QMovie mv00(":/Image/happyNewYear/fireworks2.gif");
    lbl00.setMovie(&mv00);//标签设置动态gif
    mv00.start();//启动动态gif
    splash00.setDisabled(true);//禁止事件响应
    splash00.show();//飞溅屏幕显示
    a.processEvents();//频繁处理响应事件

    t.start();
    while(t.elapsed()<17000)
    {
        QCoreApplication::processEvents();
    }
    splash00.close();
    splash0.close();
    splash1.close();

/*
    QPixmap pixmap2(":/new/prefix1/images/HappyNewYear10.gif");
    QSplashScreen splash2(pixmap2);//定义飞溅屏幕
    QLabel lbl2(&splash2);//定义标签
    QMovie mv2(":/new/prefix1/images/HappyNewYear10.gif");
    lbl2.setMovie(&mv2);//标签设置动态gif
    mv2.start();//启动动态gif
    splash2.setDisabled(true);//禁止事件响应
    splash2.show();//飞溅屏幕显示
    a.processEvents();//频繁处理响应事件

    QPixmap pixmap20(":/new/prefix1/images/fireworks2.gif");
    QSplashScreen splash20(pixmap20);//定义飞溅屏幕
    QLabel lbl20(&splash20);//定义标签
    QMovie mv20(":/new/prefix1/images/fireworks2.gif");
    lbl20.setMovie(&mv20);//标签设置动态gif
    mv20.start();//启动动态gif
    splash20.setDisabled(true);//禁止事件响应
    splash20.show();//飞溅屏幕显示
    a.processEvents();//频繁处理响应事件

    t.start();
    while(t.elapsed()<6000)
    {
        QCoreApplication::processEvents();
    }
    splash2.close();
    splash20.close();
*/

    QPixmap pixmap3(":/Image/happyNewYear/LuckForYou.gif");
    QSplashScreen splash3(pixmap3);//定义飞溅屏幕
    QLabel lbl3(&splash3);//定义标签
    QMovie mv3(":/Image/happyNewYear/LuckForYou.gif");
    lbl3.setMovie(&mv3);//标签设置动态gif
    mv3.start();//启动动态gif
    splash3.setDisabled(true);//禁止事件响应
    splash3.show();//飞溅屏幕显示
    a.processEvents();//频繁处理响应事件

    QPixmap pixmap30(":/Image/happyNewYear/fireworks2.gif");
    QSplashScreen splash30(pixmap30);//定义飞溅屏幕
    QLabel lbl30(&splash30);//定义标签
    QMovie mv30(":/Image/happyNewYear/fireworks2.gif");
    lbl30.setMovie(&mv30);//标签设置动态gif
    mv30.start();//启动动态gif
    splash30.setDisabled(true);//禁止事件响应
    splash30.show();//飞溅屏幕显示
    a.processEvents();//频繁处理响应事件

    t.start();
    while(t.elapsed()<17000)
    {
        QCoreApplication::processEvents();
    }
    splash3.close();
    splash30.close();


    QPixmap pixmap4(":/Image/happyNewYear/HappyNewYear1_1.gif");
    QSplashScreen splash4(pixmap4);//定义飞溅屏幕
    QLabel lbl4(&splash4);//定义标签
    QMovie mv4(":/Image/happyNewYear/HappyNewYear1_1.gif");
    lbl4.setMovie(&mv4);//标签设置动态gif
    mv4.start();//启动动态gif
    splash4.setDisabled(true);//禁止事件响应
    splash4.show();//飞溅屏幕显示
    a.processEvents();//频繁处理响应事件

    QPixmap pixmap40(":/Image/happyNewYear/fireworks1.gif");
    QSplashScreen splash40(pixmap40);//定义飞溅屏幕
    QLabel lbl40(&splash40);//定义标签
    QMovie mv40(":/Image/happyNewYear/fireworks1.gif");
    lbl40.setMovie(&mv40);//标签设置动态gif
    mv40.start();//启动动态gif
    splash40.setDisabled(true);//禁止事件响应
    splash40.show();//飞溅屏幕显示
    a.processEvents();//频繁处理响应事件


    /*QPixmap pixmap41(":/new/prefix1/images/LuckHappy.jpg");
    QSplashScreen splash41(pixmap41);//定义飞溅屏幕
    splash41.show();*/

    QSplashScreen ss(QPixmap(":/Image/happyNewYear/LuckHappy.jpg"));
    ss.show();

    /*QSplashScreen *splash41 = new QSplashScreen;
    splash41->setPixmap(QPixmap(":/new/prefix1/images/LuckHappy.jpg"));
    splash41->setDisabled(true);//禁止事件响应
    splash41->show();//飞溅屏幕显示*/
    a.processEvents();//频繁处理响应事件

    splash40.showMessage(QString::fromUtf8("——廖浩辉赠"),
                       Qt::AlignRight|Qt::AlignBottom, Qt::red);

    /*t.start();
    while(t.elapsed()<8500)
    {
        QCoreApplication::processEvents();
    }*/
    //splash3.close();
    //splash30.close();

#endif
    t.start();
    while(t.elapsed()<1000000000)
        QCoreApplication::processEvents();

    return a.exec();
}
