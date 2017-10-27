/************************************************************************
*   文件名称：MainWgt.h
*   编写人员：LHH
*   创建日期：2017/04/01
*   功能描述：主窗口: 极速迅雷的UI界面风格
*   备    注：
*   修改描述：
************************************************************************/

#ifndef MAINWGT_H
#define MAINWGT_H


#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QButtonGroup>

namespace Ui {
class MainWgt;
}

class MainWgt : public QWidget
{
    Q_OBJECT

public:
    explicit MainWgt(QWidget *parent = 0);
    ~MainWgt();

    /*@author by lhh
    * @brief 绘制事件
    * @param QPaintEvent
    * @return void
    */
    void paintEvent(QPaintEvent* e);


public:
    /*@author by lhh
    * @brief 窗口初始化
    * @param 无
    * @return void
    */
    void WinInit();

    /*@author by lhh
    * @brief 信号与槽的连接
    * @param 无
    * @return void
    */
    void Connects();

private slots:
    /*@author by lhh
    * @brief 正在上传
    * @param 无
    * @return void
    */
    void OnUpingBtn();

    /*@author by lhh
    * @brief 正在下载
    * @param 无
    * @return void
    */
    void OnDownloadingBtn();

    /*@author by lhh
    * @brief 上传完成
    * @param 无
    * @return void
    */
    void OnUpSuccessBtn();

    /*@author by lhh
    * @brief 下载完成
    * @param 无
    * @return void
    */
    void OnDownloadSuccessBtn();

    /*@author by lhh
    * @brief 按钮组的槽，组内按钮互斥
    * @param 当前点击的按钮
    * @return void
    */
    void OnGroupClickedBtn(QAbstractButton* cBtn);

private:
    Ui::MainWgt *ui;

    QPixmap borderPix;  // 阴影图片
    int x_local;		//鼠标x
    int y_local;		//鼠标y
    bool pressed_left;	//鼠标左键是否按下

    bool m_bFlag;       // 最大化/最小化标识


    QButtonGroup *m_pGroupBtn;
    bool m_bFlagBtn;
};

#endif // MAINWGT_H
