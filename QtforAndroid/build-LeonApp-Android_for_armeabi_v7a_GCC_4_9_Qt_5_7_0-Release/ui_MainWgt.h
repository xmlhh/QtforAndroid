/********************************************************************************
** Form generated from reading UI file 'MainWgt.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWGT_H
#define UI_MAINWGT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWgt
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *m_pRightWgt;
    QHBoxLayout *horizontalLayout_7;
    QWidget *m_pUpingWgt;
    QVBoxLayout *verticalLayout;
    QWidget *m_pUpingTopWgt;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QListWidget *listWidget;
    QWidget *m_pDownloadingWgt;
    QVBoxLayout *verticalLayout_4;
    QWidget *m_pDownloadingTopWgt;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_9;
    QTableWidget *tableWidget;
    QWidget *m_pUpSuccessWgt;
    QVBoxLayout *verticalLayout_5;
    QWidget *m_pUpSuccessTopWgt;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_12;
    QTreeWidget *treeWidget;
    QWidget *m_pDownloadSuccessWgt;
    QVBoxLayout *verticalLayout_6;
    QWidget *m_pDownloadSuccessTopWgt;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_15;
    QCalendarWidget *calendarWidget;
    QWidget *m_pLeftWgt;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *m_pUpingBtn;
    QPushButton *m_pDownloadingBtn;
    QPushButton *m_pUpSuccessBtn;
    QPushButton *m_pDownSuccessBtn;

    void setupUi(QWidget *MainWgt)
    {
        if (MainWgt->objectName().isEmpty())
            MainWgt->setObjectName(QStringLiteral("MainWgt"));
        MainWgt->resize(740, 489);
        verticalLayout_2 = new QVBoxLayout(MainWgt);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        m_pRightWgt = new QWidget(MainWgt);
        m_pRightWgt->setObjectName(QStringLiteral("m_pRightWgt"));
        horizontalLayout_7 = new QHBoxLayout(m_pRightWgt);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        m_pUpingWgt = new QWidget(m_pRightWgt);
        m_pUpingWgt->setObjectName(QStringLiteral("m_pUpingWgt"));
        verticalLayout = new QVBoxLayout(m_pUpingWgt);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_pUpingTopWgt = new QWidget(m_pUpingWgt);
        m_pUpingTopWgt->setObjectName(QStringLiteral("m_pUpingTopWgt"));
        m_pUpingTopWgt->setMinimumSize(QSize(0, 120));
        m_pUpingTopWgt->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(m_pUpingTopWgt);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(m_pUpingTopWgt);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(80, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Data/Image/forward_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/Data/Image/forward_3.png"), QSize(), QIcon::Active, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(m_pUpingTopWgt);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(80, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Data/Image/disk_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(m_pUpingTopWgt);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(80, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Data/Image/backto_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addWidget(m_pUpingTopWgt);

        listWidget = new QListWidget(m_pUpingWgt);
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(11);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setFont(font);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setFont(font);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setFont(font);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setFont(font);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setFont(font);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget);
        __qlistwidgetitem6->setFont(font);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget);
        __qlistwidgetitem7->setFont(font);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listWidget);
        __qlistwidgetitem8->setFont(font);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(listWidget);
        __qlistwidgetitem9->setFont(font);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setAlternatingRowColors(true);

        verticalLayout->addWidget(listWidget);


        horizontalLayout_7->addWidget(m_pUpingWgt);

        m_pDownloadingWgt = new QWidget(m_pRightWgt);
        m_pDownloadingWgt->setObjectName(QStringLiteral("m_pDownloadingWgt"));
        verticalLayout_4 = new QVBoxLayout(m_pDownloadingWgt);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        m_pDownloadingTopWgt = new QWidget(m_pDownloadingWgt);
        m_pDownloadingTopWgt->setObjectName(QStringLiteral("m_pDownloadingTopWgt"));
        m_pDownloadingTopWgt->setMinimumSize(QSize(0, 120));
        m_pDownloadingTopWgt->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_4 = new QHBoxLayout(m_pDownloadingTopWgt);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(m_pDownloadingTopWgt);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(80, 30));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Data/Image/color_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/Data/Image/color_3.png"), QSize(), QIcon::Active, QIcon::Off);
        pushButton_7->setIcon(icon3);
        pushButton_7->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(m_pDownloadingTopWgt);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(80, 30));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Data/Image/set_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QStringLiteral(":/Data/Image/set_3.png"), QSize(), QIcon::Active, QIcon::Off);
        pushButton_8->setIcon(icon4);
        pushButton_8->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_8);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pushButton_9 = new QPushButton(m_pDownloadingTopWgt);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(80, 30));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Data/Image/setting_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QStringLiteral(":/Data/Image/setting_3.png"), QSize(), QIcon::Active, QIcon::Off);
        pushButton_9->setIcon(icon5);
        pushButton_9->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_9);


        verticalLayout_4->addWidget(m_pDownloadingTopWgt);

        tableWidget = new QTableWidget(m_pDownloadingWgt);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (tableWidget->rowCount() < 12)
            tableWidget->setRowCount(12);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(0, 7, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(1, 6, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(1, 7, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(2, 5, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(2, 6, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(2, 7, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setItem(3, 5, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setItem(3, 6, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setItem(3, 7, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget->setItem(4, 5, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget->setItem(4, 6, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget->setItem(4, 7, __qtablewidgetitem59);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(tableWidget);


        horizontalLayout_7->addWidget(m_pDownloadingWgt);

        m_pUpSuccessWgt = new QWidget(m_pRightWgt);
        m_pUpSuccessWgt->setObjectName(QStringLiteral("m_pUpSuccessWgt"));
        verticalLayout_5 = new QVBoxLayout(m_pUpSuccessWgt);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        m_pUpSuccessTopWgt = new QWidget(m_pUpSuccessWgt);
        m_pUpSuccessTopWgt->setObjectName(QStringLiteral("m_pUpSuccessTopWgt"));
        m_pUpSuccessTopWgt->setMinimumSize(QSize(0, 120));
        m_pUpSuccessTopWgt->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_5 = new QHBoxLayout(m_pUpSuccessTopWgt);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_10 = new QPushButton(m_pUpSuccessTopWgt);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setMinimumSize(QSize(80, 30));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Data/Image/disk_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QStringLiteral(":/Data/Image/disk_3.png"), QSize(), QIcon::Active, QIcon::Off);
        pushButton_10->setIcon(icon6);
        pushButton_10->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(m_pUpSuccessTopWgt);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setMinimumSize(QSize(80, 30));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Data/Image/update_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QStringLiteral(":/Data/Image/update_3.png"), QSize(), QIcon::Active, QIcon::Off);
        pushButton_11->setIcon(icon7);
        pushButton_11->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(pushButton_11);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        pushButton_12 = new QPushButton(m_pUpSuccessTopWgt);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setMinimumSize(QSize(80, 30));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Data/Image/delete_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QStringLiteral(":/Data/Image/delete_3.png"), QSize(), QIcon::Active, QIcon::Off);
        pushButton_12->setIcon(icon8);
        pushButton_12->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(pushButton_12);


        verticalLayout_5->addWidget(m_pUpSuccessTopWgt);

        treeWidget = new QTreeWidget(m_pUpSuccessWgt);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem4);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setAutoExpandDelay(-1);
        treeWidget->setAnimated(true);
        treeWidget->setAllColumnsShowFocus(false);
        treeWidget->setExpandsOnDoubleClick(true);
        treeWidget->header()->setVisible(false);

        verticalLayout_5->addWidget(treeWidget);


        horizontalLayout_7->addWidget(m_pUpSuccessWgt);

        m_pDownloadSuccessWgt = new QWidget(m_pRightWgt);
        m_pDownloadSuccessWgt->setObjectName(QStringLiteral("m_pDownloadSuccessWgt"));
        m_pDownloadSuccessWgt->setMinimumSize(QSize(0, 0));
        verticalLayout_6 = new QVBoxLayout(m_pDownloadSuccessWgt);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        m_pDownloadSuccessTopWgt = new QWidget(m_pDownloadSuccessWgt);
        m_pDownloadSuccessTopWgt->setObjectName(QStringLiteral("m_pDownloadSuccessTopWgt"));
        sizePolicy.setHeightForWidth(m_pDownloadSuccessTopWgt->sizePolicy().hasHeightForWidth());
        m_pDownloadSuccessTopWgt->setSizePolicy(sizePolicy);
        m_pDownloadSuccessTopWgt->setMinimumSize(QSize(0, 120));
        m_pDownloadSuccessTopWgt->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_6 = new QHBoxLayout(m_pDownloadSuccessTopWgt);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_13 = new QPushButton(m_pDownloadSuccessTopWgt);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setMinimumSize(QSize(80, 30));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Data/Image/up_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon9.addFile(QStringLiteral(":/Data/Image/up_3.png"), QSize(), QIcon::Active, QIcon::Off);
        pushButton_13->setIcon(icon9);
        pushButton_13->setIconSize(QSize(32, 32));

        horizontalLayout_6->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(m_pDownloadSuccessTopWgt);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);
        pushButton_14->setMinimumSize(QSize(80, 30));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Data/Image/down_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QStringLiteral(":/Data/Image/down_3.png"), QSize(), QIcon::Active, QIcon::Off);
        pushButton_14->setIcon(icon10);
        pushButton_14->setIconSize(QSize(32, 32));

        horizontalLayout_6->addWidget(pushButton_14);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        pushButton_15 = new QPushButton(m_pDownloadSuccessTopWgt);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);
        pushButton_15->setMinimumSize(QSize(80, 30));
        pushButton_15->setIcon(icon);
        pushButton_15->setIconSize(QSize(32, 32));

        horizontalLayout_6->addWidget(pushButton_15);


        verticalLayout_6->addWidget(m_pDownloadSuccessTopWgt);

        calendarWidget = new QCalendarWidget(m_pDownloadSuccessWgt);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));

        verticalLayout_6->addWidget(calendarWidget);


        horizontalLayout_7->addWidget(m_pDownloadSuccessWgt);


        verticalLayout_2->addWidget(m_pRightWgt);

        m_pLeftWgt = new QWidget(MainWgt);
        m_pLeftWgt->setObjectName(QStringLiteral("m_pLeftWgt"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pLeftWgt->sizePolicy().hasHeightForWidth());
        m_pLeftWgt->setSizePolicy(sizePolicy1);
        m_pLeftWgt->setMinimumSize(QSize(0, 150));
        m_pLeftWgt->setStyleSheet(QStringLiteral(""));
        horizontalLayout_3 = new QHBoxLayout(m_pLeftWgt);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        m_pUpingBtn = new QPushButton(m_pLeftWgt);
        m_pUpingBtn->setObjectName(QStringLiteral("m_pUpingBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pUpingBtn->sizePolicy().hasHeightForWidth());
        m_pUpingBtn->setSizePolicy(sizePolicy2);
        m_pUpingBtn->setMinimumSize(QSize(0, 80));
        m_pUpingBtn->setFont(font1);
        m_pUpingBtn->setMouseTracking(true);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Data/Image/uping_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon11.addFile(QStringLiteral(":/Data/Image/uping_3.png"), QSize(), QIcon::Active, QIcon::Off);
        m_pUpingBtn->setIcon(icon11);
        m_pUpingBtn->setIconSize(QSize(32, 32));
        m_pUpingBtn->setCheckable(true);

        horizontalLayout_3->addWidget(m_pUpingBtn);

        m_pDownloadingBtn = new QPushButton(m_pLeftWgt);
        m_pDownloadingBtn->setObjectName(QStringLiteral("m_pDownloadingBtn"));
        sizePolicy2.setHeightForWidth(m_pDownloadingBtn->sizePolicy().hasHeightForWidth());
        m_pDownloadingBtn->setSizePolicy(sizePolicy2);
        m_pDownloadingBtn->setMinimumSize(QSize(0, 80));
        m_pDownloadingBtn->setFont(font1);
        m_pDownloadingBtn->setMouseTracking(true);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Data/Image/downing_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon12.addFile(QStringLiteral(":/Data/Image/downing_3.png"), QSize(), QIcon::Active, QIcon::Off);
        m_pDownloadingBtn->setIcon(icon12);
        m_pDownloadingBtn->setIconSize(QSize(30, 30));
        m_pDownloadingBtn->setCheckable(true);

        horizontalLayout_3->addWidget(m_pDownloadingBtn);

        m_pUpSuccessBtn = new QPushButton(m_pLeftWgt);
        m_pUpSuccessBtn->setObjectName(QStringLiteral("m_pUpSuccessBtn"));
        sizePolicy2.setHeightForWidth(m_pUpSuccessBtn->sizePolicy().hasHeightForWidth());
        m_pUpSuccessBtn->setSizePolicy(sizePolicy2);
        m_pUpSuccessBtn->setMinimumSize(QSize(0, 80));
        m_pUpSuccessBtn->setFont(font1);
        m_pUpSuccessBtn->setMouseTracking(true);
        m_pUpSuccessBtn->setStyleSheet(QStringLiteral(""));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/Data/Image/done_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon13.addFile(QStringLiteral(":/Data/Image/done_3.png"), QSize(), QIcon::Active, QIcon::Off);
        m_pUpSuccessBtn->setIcon(icon13);
        m_pUpSuccessBtn->setIconSize(QSize(30, 30));
        m_pUpSuccessBtn->setCheckable(true);

        horizontalLayout_3->addWidget(m_pUpSuccessBtn);

        m_pDownSuccessBtn = new QPushButton(m_pLeftWgt);
        m_pDownSuccessBtn->setObjectName(QStringLiteral("m_pDownSuccessBtn"));
        sizePolicy2.setHeightForWidth(m_pDownSuccessBtn->sizePolicy().hasHeightForWidth());
        m_pDownSuccessBtn->setSizePolicy(sizePolicy2);
        m_pDownSuccessBtn->setMinimumSize(QSize(0, 80));
        m_pDownSuccessBtn->setFont(font1);
        m_pDownSuccessBtn->setMouseTracking(true);
        m_pDownSuccessBtn->setIcon(icon13);
        m_pDownSuccessBtn->setIconSize(QSize(30, 30));
        m_pDownSuccessBtn->setCheckable(true);
        m_pDownSuccessBtn->setChecked(false);
        m_pDownSuccessBtn->setFlat(false);

        horizontalLayout_3->addWidget(m_pDownSuccessBtn);


        verticalLayout_2->addWidget(m_pLeftWgt);


        retranslateUi(MainWgt);

        QMetaObject::connectSlotsByName(MainWgt);
    } // setupUi

    void retranslateUi(QWidget *MainWgt)
    {
        MainWgt->setWindowTitle(QApplication::translate("MainWgt", "MainWgt", 0));
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWgt", "This function was introduced in Qt 5.7", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWgt", "This signal is emitted whenever a cell in the table is double clicked.", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWgt", "The row and column specified is the cell that was double clicked.", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWgt", "This property holds the number of rows in the table.", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWgt", "By default, for a table constructed without row and column counts, this property contains a value of 0.", 0));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWgt", "Creates a new table view with the given parent.", 0));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWgt", "This signal is emitted when the cell specified by row and column has been activated", 0));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWgt", "Removes all items in the view. This will also remove all selections and headers. ", 0));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWgt", "Sets the item for the given row and column to item.", 0));
        QListWidgetItem *___qlistwidgetitem9 = listWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWgt", "The table takes ownership of the item.", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWgt", "1", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWgt", "2", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWgt", "3", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWgt", "4", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWgt", "5", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWgt", "6", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWgt", "7", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWgt", "8", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWgt", "1", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWgt", "2", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWgt", "3", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWgt", "4", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWgt", "5", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWgt", "6", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWgt", "7", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWgt", "8", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWgt", "10", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWgt", "12", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWgt", "13", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWgt", "15", 0));

        const bool __sortingEnabled1 = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(0, 0);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWgt", "0001", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(0, 1);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWgt", "0012", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(0, 2);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWgt", "0013", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(0, 3);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWgt", "0014", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(0, 4);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWgt", "0015", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(0, 5);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWgt", "0016", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(0, 6);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWgt", "0017", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(0, 7);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWgt", "0018", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(1, 0);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWgt", "0021", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(1, 1);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWgt", "0022", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(1, 2);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWgt", "0023", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(1, 3);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWgt", "0024", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(1, 4);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWgt", "0025", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(1, 5);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWgt", "0026", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(1, 6);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWgt", "0027", 0));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(1, 7);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWgt", "0028", 0));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(2, 0);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWgt", "0031", 0));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(2, 1);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWgt", "0032", 0));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(2, 2);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWgt", "0033", 0));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(2, 3);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWgt", "0034", 0));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(2, 4);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWgt", "0035", 0));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(2, 5);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWgt", "0036", 0));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(2, 6);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWgt", "0037", 0));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(2, 7);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWgt", "0038", 0));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(3, 0);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWgt", "0041", 0));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(3, 1);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWgt", "0042", 0));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(3, 2);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWgt", "0043", 0));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->item(3, 3);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWgt", "0044", 0));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->item(3, 4);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWgt", "0045", 0));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->item(3, 5);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWgt", "0046", 0));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->item(3, 6);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWgt", "0047", 0));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget->item(3, 7);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWgt", "0048", 0));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget->item(4, 0);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWgt", "0051", 0));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget->item(4, 1);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWgt", "0052", 0));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget->item(4, 2);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWgt", "0053", 0));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget->item(4, 3);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWgt", "0054", 0));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget->item(4, 4);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWgt", "0055", 0));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget->item(4, 5);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWgt", "0056", 0));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget->item(4, 6);
        ___qtablewidgetitem58->setText(QApplication::translate("MainWgt", "0057", 0));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget->item(4, 7);
        ___qtablewidgetitem59->setText(QApplication::translate("MainWgt", "0058", 0));
        tableWidget->setSortingEnabled(__sortingEnabled1);

        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(6, QApplication::translate("MainWgt", "8", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("MainWgt", "7", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("MainWgt", "5", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWgt", "4", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWgt", "3", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWgt", "2", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWgt", "1", 0));

        const bool __sortingEnabled2 = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(6, QApplication::translate("MainWgt", "n", 0));
        ___qtreewidgetitem1->setText(5, QApplication::translate("MainWgt", "b", 0));
        ___qtreewidgetitem1->setText(4, QApplication::translate("MainWgt", "v", 0));
        ___qtreewidgetitem1->setText(3, QApplication::translate("MainWgt", "c", 0));
        ___qtreewidgetitem1->setText(2, QApplication::translate("MainWgt", "x", 0));
        ___qtreewidgetitem1->setText(1, QApplication::translate("MainWgt", "z", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWgt", "q", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(6, QApplication::translate("MainWgt", "nn", 0));
        ___qtreewidgetitem2->setText(5, QApplication::translate("MainWgt", "bb", 0));
        ___qtreewidgetitem2->setText(4, QApplication::translate("MainWgt", "vv", 0));
        ___qtreewidgetitem2->setText(3, QApplication::translate("MainWgt", "cc", 0));
        ___qtreewidgetitem2->setText(2, QApplication::translate("MainWgt", "xx", 0));
        ___qtreewidgetitem2->setText(1, QApplication::translate("MainWgt", "zz", 0));
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWgt", "qq", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(6, QApplication::translate("MainWgt", "nnn", 0));
        ___qtreewidgetitem3->setText(5, QApplication::translate("MainWgt", "bbb", 0));
        ___qtreewidgetitem3->setText(4, QApplication::translate("MainWgt", "vvv", 0));
        ___qtreewidgetitem3->setText(3, QApplication::translate("MainWgt", "ccc", 0));
        ___qtreewidgetitem3->setText(2, QApplication::translate("MainWgt", "xxx", 0));
        ___qtreewidgetitem3->setText(1, QApplication::translate("MainWgt", "zzz", 0));
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWgt", "qqq", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem4->setText(6, QApplication::translate("MainWgt", "h", 0));
        ___qtreewidgetitem4->setText(5, QApplication::translate("MainWgt", "g", 0));
        ___qtreewidgetitem4->setText(4, QApplication::translate("MainWgt", "f", 0));
        ___qtreewidgetitem4->setText(3, QApplication::translate("MainWgt", "d", 0));
        ___qtreewidgetitem4->setText(2, QApplication::translate("MainWgt", "s", 0));
        ___qtreewidgetitem4->setText(1, QApplication::translate("MainWgt", "a", 0));
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWgt", "w", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(6, QApplication::translate("MainWgt", "hh", 0));
        ___qtreewidgetitem5->setText(5, QApplication::translate("MainWgt", "gg", 0));
        ___qtreewidgetitem5->setText(4, QApplication::translate("MainWgt", "ff", 0));
        ___qtreewidgetitem5->setText(3, QApplication::translate("MainWgt", "dd", 0));
        ___qtreewidgetitem5->setText(2, QApplication::translate("MainWgt", "ss", 0));
        ___qtreewidgetitem5->setText(1, QApplication::translate("MainWgt", "aa", 0));
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWgt", "ww", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem6->setText(6, QApplication::translate("MainWgt", "y", 0));
        ___qtreewidgetitem6->setText(5, QApplication::translate("MainWgt", "t", 0));
        ___qtreewidgetitem6->setText(4, QApplication::translate("MainWgt", "r", 0));
        ___qtreewidgetitem6->setText(3, QApplication::translate("MainWgt", "e", 0));
        ___qtreewidgetitem6->setText(2, QApplication::translate("MainWgt", "w", 0));
        ___qtreewidgetitem6->setText(1, QApplication::translate("MainWgt", "q", 0));
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWgt", "e", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem6->child(0);
        ___qtreewidgetitem7->setText(6, QApplication::translate("MainWgt", "yy", 0));
        ___qtreewidgetitem7->setText(5, QApplication::translate("MainWgt", "tt", 0));
        ___qtreewidgetitem7->setText(4, QApplication::translate("MainWgt", "rr", 0));
        ___qtreewidgetitem7->setText(3, QApplication::translate("MainWgt", "ee", 0));
        ___qtreewidgetitem7->setText(2, QApplication::translate("MainWgt", "ww", 0));
        ___qtreewidgetitem7->setText(1, QApplication::translate("MainWgt", "qq", 0));
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWgt", "ee", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(6, QApplication::translate("MainWgt", "yyy", 0));
        ___qtreewidgetitem8->setText(5, QApplication::translate("MainWgt", "ttt", 0));
        ___qtreewidgetitem8->setText(4, QApplication::translate("MainWgt", "rrr", 0));
        ___qtreewidgetitem8->setText(3, QApplication::translate("MainWgt", "eee", 0));
        ___qtreewidgetitem8->setText(2, QApplication::translate("MainWgt", "www", 0));
        ___qtreewidgetitem8->setText(1, QApplication::translate("MainWgt", "qqq", 0));
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWgt", "eee", 0));
        treeWidget->setSortingEnabled(__sortingEnabled2);

        pushButton_13->setText(QString());
        pushButton_14->setText(QString());
        pushButton_15->setText(QString());
        m_pUpingBtn->setText(QApplication::translate("MainWgt", "UpLoading", 0));
        m_pDownloadingBtn->setText(QApplication::translate("MainWgt", "DownLoading", 0));
        m_pUpSuccessBtn->setText(QApplication::translate("MainWgt", "UpLoadSuccess", 0));
        m_pDownSuccessBtn->setText(QApplication::translate("MainWgt", "DownLoadSuccess", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWgt: public Ui_MainWgt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWGT_H
