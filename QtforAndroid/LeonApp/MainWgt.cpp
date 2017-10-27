#include "MainWgt.h"
#include "ui_MainWgt.h"

//const int BORDER = 20;
const int BORDER = 0;

MainWgt::MainWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWgt)
  , x_local(0)
  , y_local(0)
  , pressed_left(false)
  , m_bFlag(true)
  , m_bFlagBtn(true)
{

    WinInit();

}

MainWgt::~MainWgt()
{
    delete ui;
}


/*@author by lhh
* @brief 绘制事件
* @param QPaintEvent
* @return void
*/
void MainWgt::paintEvent(QPaintEvent* /*e*/)
{
    QPainter painter(this);

#if 0
    /* 阴影绘制，四个边框，宽度BORDER */
    painter.drawPixmap(QPoint(0, 0), borderPix, QRect(0, 0, BORDER, BORDER));


    painter.drawPixmap(QPoint(0, height() - BORDER)
                        , borderPix
                        , QRect(0, borderPix.height() - BORDER, BORDER, BORDER));

    painter.drawPixmap(QPoint(width() - BORDER, 0)
                        , borderPix
                        , QRect(borderPix.width() - BORDER, 0, BORDER, BORDER));

    painter.drawPixmap(QPoint(width() - BORDER, height() - BORDER)
                        , borderPix
                        , QRect(borderPix.width() - BORDER, borderPix.height() - BORDER, BORDER, BORDER));

    painter.drawPixmap(QRect(0, BORDER, BORDER, height() - BORDER * 2)
                        , borderPix
                        , QRect(0, BORDER, BORDER, borderPix.height() - BORDER * 2));

    painter.drawPixmap(QRect(width() - BORDER, BORDER, BORDER, height() - BORDER * 2)
                        , borderPix
                        , QRect(borderPix.width() - BORDER, BORDER, BORDER, borderPix.height() - BORDER * 2));

    painter.drawPixmap(QRect(BORDER, 0, width() - BORDER * 2, BORDER)
                        , borderPix
                        , QRect(BORDER, 0,borderPix.width() - BORDER * 2, BORDER));

    painter.drawPixmap(QRect(BORDER, height() - BORDER, width() - BORDER * 2, BORDER)
                        , borderPix
                        , QRect(BORDER, borderPix.height() - BORDER, borderPix.width() - BORDER * 2, BORDER));


    /* 背景 */
    painter.setRenderHint(QPainter::Antialiasing);
    painter.fillRect(QRect(BORDER, BORDER, width() - BORDER * 2, height() - BORDER * 2)
                    , QBrush(QColor(55, 64, 72, 250)));

#endif

}


/*@author by lhh
* @brief 窗口初始化
* @param 无
* @return void
*/
void MainWgt::WinInit()
{
    ui->setupUi(this);
    //ui->setupUi(m_pCenterWidget);

    setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    setWindowOpacity(0.95);

    // 显示与隐藏
    ui->m_pUpingBtn->setChecked(true);
    ui->m_pUpingWgt->setVisible(true);
    ui->m_pDownloadingWgt->setVisible(false);
    ui->m_pUpSuccessWgt->setVisible(false);
    ui->m_pDownloadSuccessWgt->setVisible(false);

    //设置表行高为23
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(120);
    ui->treeWidget->setStyleSheet("QTreeView::item{height: 120px;}");
    ui->listWidget->setStyleSheet("QListView::item{height: 120px;}");

    // 按钮组
    m_pGroupBtn = new QButtonGroup;
    //m_pGroupBtn->addButton(ui->m_pCloudDiskBtn, 1);
    m_pGroupBtn->addButton(ui->m_pUpingBtn, 1);
    m_pGroupBtn->addButton(ui->m_pDownloadingBtn, 2);
    m_pGroupBtn->addButton(ui->m_pUpSuccessBtn, 3);
    m_pGroupBtn->addButton(ui->m_pDownSuccessBtn, 4);

    Connects();

}

/*@author by lhh
* @brief 信号与槽的连接
* @param 无
* @return void
*/
void MainWgt::Connects()
{

    connect(ui->m_pUpingBtn, SIGNAL(clicked()), this, SLOT(OnUpingBtn()));
    connect(ui->m_pDownloadingBtn, SIGNAL(clicked()), this, SLOT(OnDownloadingBtn()));
    connect(ui->m_pUpSuccessBtn, SIGNAL(clicked()), this, SLOT(OnUpSuccessBtn()));
    connect(ui->m_pDownSuccessBtn, SIGNAL(clicked()), this, SLOT(OnDownloadSuccessBtn()));

    connect(m_pGroupBtn, SIGNAL(buttonClicked(QAbstractButton*)),
            this, SLOT(OnGroupClickedBtn(QAbstractButton*)));

}


/*@author by lhh
* @brief 正在上传
* @param 无
* @return void
*/
void MainWgt::OnUpingBtn()
{
    ui->m_pUpingWgt->setVisible(true);
    ui->m_pDownloadingWgt->setVisible(false);
    ui->m_pUpSuccessWgt->setVisible(false);
    ui->m_pDownloadSuccessWgt->setVisible(false);
}

/*@author by lhh
* @brief 正在下载
* @param 无
* @return void
*/
void MainWgt::OnDownloadingBtn()
{
    ui->m_pUpingWgt->setVisible(false);
    ui->m_pDownloadingWgt->setVisible(true);
    ui->m_pUpSuccessWgt->setVisible(false);
    ui->m_pDownloadSuccessWgt->setVisible(false);
}

/*@author by lhh
* @brief 上传完成
* @param 无
* @return void
*/
void MainWgt::OnUpSuccessBtn()
{
    ui->m_pUpingWgt->setVisible(false);
    ui->m_pDownloadingWgt->setVisible(false);
    ui->m_pUpSuccessWgt->setVisible(true);
    ui->m_pDownloadSuccessWgt->setVisible(false);
}

/*@author by lhh
* @brief 下载完成
* @param 无
* @return void
*/
void MainWgt::OnDownloadSuccessBtn()
{
    ui->m_pUpingWgt->setVisible(false);
    ui->m_pDownloadingWgt->setVisible(false);
    ui->m_pUpSuccessWgt->setVisible(false);
    ui->m_pDownloadSuccessWgt->setVisible(true);
}


/*@author by lhh
* @brief 按钮组的槽，组内按钮互斥
* @param 当前点击的按钮
* @return void
*/
void MainWgt::OnGroupClickedBtn(QAbstractButton* cBtn)
{
    if  (m_bFlagBtn)
    {
        cBtn->setChecked(m_bFlagBtn);
    }
}
