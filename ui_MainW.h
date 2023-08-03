/********************************************************************************
** Form generated from reading UI file 'MainW.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINW_H
#define UI_MAINW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainW
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *sideBarW;
    QVBoxLayout *verticalLayout_2;
    QLabel *logoLab;
    QSpacerItem *verticalSpacer_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *onlineLab;
    QRadioButton *recommendBtn;
    QRadioButton *musicHomeBtn;
    QRadioButton *videoBtn;
    QRadioButton *radarBtn;
    QSpacerItem *verticalSpacer_2;
    QLabel *myMusicLab;
    QRadioButton *myLoveBtn;
    QRadioButton *localMusicBtn;
    QRadioButton *recentlyPlayBtn;
    QRadioButton *tryListenListBtn;
    QRadioButton *purchasedBtn;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *myPlaylistBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *newPlaylistBtn;
    QPushButton *myPlayListExBtn;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *collectionPlaylistBtn;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *collectionPlaylistExBtn;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *backBtn;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *searchEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *minBtn;
    QPushButton *winBtn;
    QPushButton *closeBtn;
    QSpacerItem *verticalSpacer_4;
    QWidget *contentW;
    QWidget *controlW;
    QVBoxLayout *verticalLayout;
    QSlider *seekSlider;
    QHBoxLayout *horizontalLayout_5;
    QLabel *albumLab;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *cycleBtn;
    QPushButton *preBtn;
    QPushButton *playBtn;
    QPushButton *nextBtn;
    QPushButton *volumeBtn;
    QSpacerItem *horizontalSpacer_5;
    QLabel *timeLab;
    QPushButton *playListExBtn;

    void setupUi(QWidget *MainW)
    {
        if (MainW->objectName().isEmpty())
            MainW->setObjectName(QString::fromUtf8("MainW"));
        MainW->resize(1200, 800);
        MainW->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(MainW);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sideBarW = new QWidget(MainW);
        sideBarW->setObjectName(QString::fromUtf8("sideBarW"));
        sideBarW->setMinimumSize(QSize(200, 0));
        sideBarW->setMaximumSize(QSize(200, 16777215));
        verticalLayout_2 = new QVBoxLayout(sideBarW);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        logoLab = new QLabel(sideBarW);
        logoLab->setObjectName(QString::fromUtf8("logoLab"));
        logoLab->setMinimumSize(QSize(0, 60));
        logoLab->setMaximumSize(QSize(16777215, 60));
        logoLab->setScaledContents(false);

        verticalLayout_2->addWidget(logoLab);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        scrollArea = new QScrollArea(sideBarW);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 198, 728));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 0, 20, 0);
        onlineLab = new QLabel(scrollAreaWidgetContents_2);
        onlineLab->setObjectName(QString::fromUtf8("onlineLab"));

        verticalLayout_3->addWidget(onlineLab);

        recommendBtn = new QRadioButton(scrollAreaWidgetContents_2);
        recommendBtn->setObjectName(QString::fromUtf8("recommendBtn"));

        verticalLayout_3->addWidget(recommendBtn);

        musicHomeBtn = new QRadioButton(scrollAreaWidgetContents_2);
        musicHomeBtn->setObjectName(QString::fromUtf8("musicHomeBtn"));

        verticalLayout_3->addWidget(musicHomeBtn);

        videoBtn = new QRadioButton(scrollAreaWidgetContents_2);
        videoBtn->setObjectName(QString::fromUtf8("videoBtn"));

        verticalLayout_3->addWidget(videoBtn);

        radarBtn = new QRadioButton(scrollAreaWidgetContents_2);
        radarBtn->setObjectName(QString::fromUtf8("radarBtn"));

        verticalLayout_3->addWidget(radarBtn);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        myMusicLab = new QLabel(scrollAreaWidgetContents_2);
        myMusicLab->setObjectName(QString::fromUtf8("myMusicLab"));

        verticalLayout_3->addWidget(myMusicLab);

        myLoveBtn = new QRadioButton(scrollAreaWidgetContents_2);
        myLoveBtn->setObjectName(QString::fromUtf8("myLoveBtn"));

        verticalLayout_3->addWidget(myLoveBtn);

        localMusicBtn = new QRadioButton(scrollAreaWidgetContents_2);
        localMusicBtn->setObjectName(QString::fromUtf8("localMusicBtn"));

        verticalLayout_3->addWidget(localMusicBtn);

        recentlyPlayBtn = new QRadioButton(scrollAreaWidgetContents_2);
        recentlyPlayBtn->setObjectName(QString::fromUtf8("recentlyPlayBtn"));

        verticalLayout_3->addWidget(recentlyPlayBtn);

        tryListenListBtn = new QRadioButton(scrollAreaWidgetContents_2);
        tryListenListBtn->setObjectName(QString::fromUtf8("tryListenListBtn"));

        verticalLayout_3->addWidget(tryListenListBtn);

        purchasedBtn = new QRadioButton(scrollAreaWidgetContents_2);
        purchasedBtn->setObjectName(QString::fromUtf8("purchasedBtn"));

        verticalLayout_3->addWidget(purchasedBtn);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        myPlaylistBtn = new QPushButton(scrollAreaWidgetContents_2);
        myPlaylistBtn->setObjectName(QString::fromUtf8("myPlaylistBtn"));
        myPlaylistBtn->setMinimumSize(QSize(70, 30));
        myPlaylistBtn->setMaximumSize(QSize(70, 30));

        horizontalLayout_2->addWidget(myPlaylistBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        newPlaylistBtn = new QPushButton(scrollAreaWidgetContents_2);
        newPlaylistBtn->setObjectName(QString::fromUtf8("newPlaylistBtn"));
        newPlaylistBtn->setMinimumSize(QSize(30, 30));
        newPlaylistBtn->setMaximumSize(QSize(30, 30));

        horizontalLayout_2->addWidget(newPlaylistBtn);

        myPlayListExBtn = new QPushButton(scrollAreaWidgetContents_2);
        myPlayListExBtn->setObjectName(QString::fromUtf8("myPlayListExBtn"));
        myPlayListExBtn->setMinimumSize(QSize(30, 30));
        myPlayListExBtn->setMaximumSize(QSize(30, 30));

        horizontalLayout_2->addWidget(myPlayListExBtn);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        collectionPlaylistBtn = new QPushButton(scrollAreaWidgetContents_2);
        collectionPlaylistBtn->setObjectName(QString::fromUtf8("collectionPlaylistBtn"));
        collectionPlaylistBtn->setMinimumSize(QSize(70, 30));
        collectionPlaylistBtn->setMaximumSize(QSize(70, 30));

        horizontalLayout_4->addWidget(collectionPlaylistBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        collectionPlaylistExBtn = new QPushButton(scrollAreaWidgetContents_2);
        collectionPlaylistExBtn->setObjectName(QString::fromUtf8("collectionPlaylistExBtn"));
        collectionPlaylistExBtn->setMinimumSize(QSize(30, 30));
        collectionPlaylistExBtn->setMaximumSize(QSize(30, 30));

        horizontalLayout_4->addWidget(collectionPlaylistExBtn);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea);


        horizontalLayout->addWidget(sideBarW);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(30, 0, 30, 0);
        backBtn = new QPushButton(MainW);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setMinimumSize(QSize(25, 30));
        backBtn->setMaximumSize(QSize(25, 30));

        horizontalLayout_3->addWidget(backBtn);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        searchEdit = new QLineEdit(MainW);
        searchEdit->setObjectName(QString::fromUtf8("searchEdit"));
        searchEdit->setMinimumSize(QSize(250, 30));
        searchEdit->setMaximumSize(QSize(250, 30));
        searchEdit->setClearButtonEnabled(true);

        horizontalLayout_3->addWidget(searchEdit);

        horizontalSpacer = new QSpacerItem(40, 60, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        minBtn = new QPushButton(MainW);
        minBtn->setObjectName(QString::fromUtf8("minBtn"));
        minBtn->setMinimumSize(QSize(30, 30));
        minBtn->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(minBtn);

        winBtn = new QPushButton(MainW);
        winBtn->setObjectName(QString::fromUtf8("winBtn"));
        winBtn->setMinimumSize(QSize(30, 30));
        winBtn->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(winBtn);

        closeBtn = new QPushButton(MainW);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setMinimumSize(QSize(30, 30));
        closeBtn->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(closeBtn);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_4);

        contentW = new QWidget(MainW);
        contentW->setObjectName(QString::fromUtf8("contentW"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(contentW->sizePolicy().hasHeightForWidth());
        contentW->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(contentW);

        controlW = new QWidget(MainW);
        controlW->setObjectName(QString::fromUtf8("controlW"));
        controlW->setMinimumSize(QSize(0, 70));
        controlW->setMaximumSize(QSize(16777215, 70));
        verticalLayout = new QVBoxLayout(controlW);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        seekSlider = new QSlider(controlW);
        seekSlider->setObjectName(QString::fromUtf8("seekSlider"));
        seekSlider->setMinimumSize(QSize(0, 15));
        seekSlider->setMaximumSize(QSize(16777215, 15));
        seekSlider->setPageStep(1);
        seekSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(seekSlider);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(30, -1, 30, -1);
        albumLab = new QLabel(controlW);
        albumLab->setObjectName(QString::fromUtf8("albumLab"));
        albumLab->setMinimumSize(QSize(40, 40));
        albumLab->setMaximumSize(QSize(40, 40));

        horizontalLayout_5->addWidget(albumLab);

        horizontalSpacer_7 = new QSpacerItem(90, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        cycleBtn = new QPushButton(controlW);
        cycleBtn->setObjectName(QString::fromUtf8("cycleBtn"));
        cycleBtn->setMinimumSize(QSize(30, 30));
        cycleBtn->setMaximumSize(QSize(30, 30));

        horizontalLayout_6->addWidget(cycleBtn);

        preBtn = new QPushButton(controlW);
        preBtn->setObjectName(QString::fromUtf8("preBtn"));
        preBtn->setMinimumSize(QSize(30, 30));
        preBtn->setMaximumSize(QSize(30, 30));

        horizontalLayout_6->addWidget(preBtn);

        playBtn = new QPushButton(controlW);
        playBtn->setObjectName(QString::fromUtf8("playBtn"));
        playBtn->setMinimumSize(QSize(40, 40));
        playBtn->setMaximumSize(QSize(40, 40));

        horizontalLayout_6->addWidget(playBtn);

        nextBtn = new QPushButton(controlW);
        nextBtn->setObjectName(QString::fromUtf8("nextBtn"));
        nextBtn->setMinimumSize(QSize(30, 30));
        nextBtn->setMaximumSize(QSize(30, 30));

        horizontalLayout_6->addWidget(nextBtn);

        volumeBtn = new QPushButton(controlW);
        volumeBtn->setObjectName(QString::fromUtf8("volumeBtn"));
        volumeBtn->setMinimumSize(QSize(30, 30));
        volumeBtn->setMaximumSize(QSize(30, 30));

        horizontalLayout_6->addWidget(volumeBtn);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        horizontalSpacer_5 = new QSpacerItem(40, 55, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        timeLab = new QLabel(controlW);
        timeLab->setObjectName(QString::fromUtf8("timeLab"));
        timeLab->setMinimumSize(QSize(80, 0));
        timeLab->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_5->addWidget(timeLab);

        playListExBtn = new QPushButton(controlW);
        playListExBtn->setObjectName(QString::fromUtf8("playListExBtn"));
        playListExBtn->setMinimumSize(QSize(50, 30));
        playListExBtn->setMaximumSize(QSize(50, 30));

        horizontalLayout_5->addWidget(playListExBtn);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_5->addWidget(controlW);


        horizontalLayout->addLayout(verticalLayout_5);


        retranslateUi(MainW);

        QMetaObject::connectSlotsByName(MainW);
    } // setupUi

    void retranslateUi(QWidget *MainW)
    {
        MainW->setWindowTitle(QCoreApplication::translate("MainW", "MainW", nullptr));
        logoLab->setText(QString());
        onlineLab->setText(QCoreApplication::translate("MainW", "\345\234\250\347\272\277\351\237\263\344\271\220", nullptr));
        recommendBtn->setText(QCoreApplication::translate("MainW", "\346\216\250\350\215\220", nullptr));
        musicHomeBtn->setText(QCoreApplication::translate("MainW", "\351\237\263\344\271\220\351\246\206", nullptr));
        videoBtn->setText(QCoreApplication::translate("MainW", "\350\247\206\351\242\221", nullptr));
        radarBtn->setText(QCoreApplication::translate("MainW", "\351\233\267\350\276\276", nullptr));
        myMusicLab->setText(QCoreApplication::translate("MainW", "\346\210\221\347\232\204\351\237\263\344\271\220", nullptr));
        myLoveBtn->setText(QCoreApplication::translate("MainW", "\346\210\221\345\226\234\346\254\242", nullptr));
        localMusicBtn->setText(QCoreApplication::translate("MainW", "\346\234\254\345\234\260\345\222\214\344\270\213\350\275\275", nullptr));
        recentlyPlayBtn->setText(QCoreApplication::translate("MainW", "\346\234\200\350\277\221\346\222\255\346\224\276", nullptr));
        tryListenListBtn->setText(QCoreApplication::translate("MainW", "\350\257\225\345\220\254\345\210\227\350\241\250", nullptr));
        purchasedBtn->setText(QCoreApplication::translate("MainW", "\345\267\262\350\264\255\351\237\263\344\271\220", nullptr));
        myPlaylistBtn->setText(QCoreApplication::translate("MainW", "\345\210\233\345\273\272\347\232\204\346\255\214\345\215\225", nullptr));
#if QT_CONFIG(tooltip)
        newPlaylistBtn->setToolTip(QCoreApplication::translate("MainW", "\346\226\260\345\273\272\346\255\214\345\215\225", nullptr));
#endif // QT_CONFIG(tooltip)
        newPlaylistBtn->setText(QString());
        myPlayListExBtn->setText(QString());
        collectionPlaylistBtn->setText(QCoreApplication::translate("MainW", "\346\224\266\350\227\217\347\232\204\346\255\214\345\215\225", nullptr));
        collectionPlaylistExBtn->setText(QString());
        backBtn->setText(QString());
        searchEdit->setPlaceholderText(QCoreApplication::translate("MainW", "\346\220\234\347\264\242", nullptr));
        minBtn->setText(QString());
        winBtn->setText(QString());
        closeBtn->setText(QString());
        albumLab->setText(QString());
        cycleBtn->setText(QString());
        preBtn->setText(QString());
        playBtn->setText(QString());
        nextBtn->setText(QString());
        volumeBtn->setText(QString());
        timeLab->setText(QString());
        playListExBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainW: public Ui_MainW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINW_H
