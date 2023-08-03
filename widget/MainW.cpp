#include "MainW.h"
#include "ui_MainW.h"
#include "util/UTF8Code.h"
#include "util/WidgetManager.h"

#include <QDebug>
#include <QFile>
#include <QImage>
#include <QPixmap>

MainW::MainW(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainW)
    , m_isPlay(false)
    , m_isMax(false)
    , m_isMousePress(false)
    , m_volumeBtnChecked(false)
    , m_mousePressPoint(-1, -1)
    , m_player(new MediaPlayer) {
    ui->setupUi(this);
    setWindowTitle("无限云音乐");
    setWindowFlags(Qt::FramelessWindowHint);

    m_volumeW = new VolumeW(this);
    m_volumeW->setVisible(false);
    this->installEventFilter(m_volumeW);

    initUI();
    QString file = "E:/WorkSpace/Media/英雄联盟 _ Against the Current - Legends Never Die.mp3";
    m_player->loadMedia(file);

    connect(m_player, &MediaPlayer::lengthChanged, this, &MainW::lengthChanged);
    connect(m_player, &MediaPlayer::timeChanged, this, &MainW::timeChanged);
    connect(m_volumeW, &VolumeW::valueChanged, this, &MainW::volumeChanged);
}

MainW::~MainW() {
    disconnect(m_player, &MediaPlayer::lengthChanged, this, &MainW::lengthChanged);
    disconnect(m_player, &MediaPlayer::timeChanged, this, &MainW::timeChanged);
    disconnect(m_volumeW, &VolumeW::valueChanged, this, &MainW::volumeChanged);
    if(m_player){
        m_player->stop();
        delete m_player;
        m_player = nullptr;
    }
    delete ui;
}

void MainW::initUI() {
    QFile *styleFile;
    styleFile  = new QFile("./resource/style/style-dark.qss");
    styleFile->open(QFile::ReadOnly);
    QString styleSheet = QString(styleFile->readAll());
    qApp->setStyleSheet(styleSheet);
    styleFile->close();

    QImage* logoImg = new QImage("./resource/image/logo.png");
    ui->logoLab->setAlignment(Qt::AlignCenter);
    ui->logoLab->setPixmap(QPixmap::fromImage(*logoImg));
    ui->logoLab->setScaledContents(true);

    ui->closeBtn->setIcon(QIcon("./resource/image/关闭.png"));
    ui->closeBtn->setIconSize(QSize(20, 20));
    ui->winBtn->setIcon(QIcon("./resource/image/最大化.png"));
    ui->winBtn->setIconSize(QSize(20, 20));
    ui->minBtn->setIcon(QIcon("./resource/image/最小化.png"));
    ui->minBtn->setIconSize(QSize(20, 20));
    ui->backBtn->setIcon(QIcon("./resource/image/回退.png"));
    ui->backBtn->setIconSize(QSize(20, 20));

    ui->recommendBtn->setIcon(QIcon("./resource/image/推荐.png"));
    ui->recommendBtn->setIconSize(QSize(20, 20));
    ui->musicHomeBtn->setIcon(QIcon("./resource/image/音乐馆.png"));
    ui->musicHomeBtn->setIconSize(QSize(20, 20));
    ui->videoBtn->setIcon(QIcon("./resource/image/视频.png"));
    ui->videoBtn->setIconSize(QSize(20, 20));
    ui->radarBtn->setIcon(QIcon("./resource/image/雷达.png"));
    ui->radarBtn->setIconSize(QSize(20, 20));
    ui->myLoveBtn->setIcon(QIcon("./resource/image/我喜欢.png"));
    ui->myLoveBtn->setIconSize(QSize(20, 20));
    ui->localMusicBtn->setIcon(QIcon("./resource/image/本地.png"));
    ui->localMusicBtn->setIconSize(QSize(20, 20));
    ui->recentlyPlayBtn->setIcon(QIcon("./resource/image/最近播放.png"));
    ui->recentlyPlayBtn->setIconSize(QSize(20, 20));
    ui->tryListenListBtn->setIcon(QIcon("./resource/image/试听列表.png"));
    ui->tryListenListBtn->setIconSize(QSize(20, 20));
    ui->purchasedBtn->setIcon(QIcon("./resource/image/已购音乐.png"));
    ui->purchasedBtn->setIconSize(QSize(20, 20));
    ui->newPlaylistBtn->setIcon(QIcon("./resource/image/添加.png"));
    ui->newPlaylistBtn->setIconSize(QSize(20, 20));
    ui->myPlayListExBtn->setIcon(QIcon("./resource/image/合并.png"));
    ui->myPlayListExBtn->setIconSize(QSize(20, 20));
    ui->collectionPlaylistExBtn->setIcon(QIcon("./resource/image/合并.png"));
    ui->collectionPlaylistExBtn->setIconSize(QSize(20, 20));

    ui->cycleBtn->setIcon(QIcon("./resource/image/循环.png"));
    ui->cycleBtn->setIconSize(QSize(22, 22));
    ui->preBtn->setIcon(QIcon("./resource/image/上一首.png"));
    ui->preBtn->setIconSize(QSize(22, 22));
    ui->playBtn->setIcon(QIcon("./resource/image/播放.png"));
    ui->playBtn->setIconSize(QSize(40, 40));
    ui->nextBtn->setIcon(QIcon("./resource/image/下一首.png"));
    ui->nextBtn->setIconSize(QSize(22, 22));
    ui->volumeBtn->setIcon(QIcon("./resource/image/低音量.png"));
    ui->volumeBtn->setIconSize(QSize(22, 22));

    ui->playListExBtn->setIcon(QIcon("./resource/image/试听列表.png"));
    ui->playListExBtn->setIconSize(QSize(18, 18));
    ui->playListExBtn->setText("0"); 
}

void MainW::mousePressEvent(QMouseEvent *event) {
    if(event->button() == Qt::MouseButton::LeftButton && event->pos().x() > 5 && event->pos().x() < (this->width() - 5) && event->y() < 60){
        m_isMousePress = true;
        m_mousePressPoint = event->globalPos();
    }
}

void MainW::mouseReleaseEvent(QMouseEvent *event) {
    m_isMousePress = false;
}

void MainW::mouseMoveEvent(QMouseEvent *event) {
    if(m_isMousePress) {
        auto point = event->globalPos();
        int subX = point.x() - m_mousePressPoint.x();
        int subY = point.y() - m_mousePressPoint.y();
        auto titlePos = this->mapToGlobal(QPoint(0, 0));
        this->move(titlePos.x() + subX, titlePos.y() + subY);
        m_mousePressPoint = point;
    }
}

void MainW::on_minBtn_clicked() {
    setWindowState(Qt::WindowMinimized);
}

void MainW::on_winBtn_clicked() {
    if(m_isMax) {
        setWindowState(Qt::WindowNoState);
        ui->winBtn->setIcon(QIcon("./resource/image/最大化.png"));
        m_isMax = false;
    } else {
        setWindowState(Qt::WindowMaximized);
        ui->winBtn->setIcon(QIcon("./resource/image/窗口化.png"));
        m_isMax = true;
    }
}

void MainW::on_closeBtn_clicked() {
    qApp->exit(1);
}

void MainW::on_playBtn_clicked() {
    if(m_isPlay) {
        ui->playBtn->setIcon(QIcon("./resource/image/播放.png"));
        m_isPlay = false;
        m_player->pause();
    } else {
        ui->playBtn->setIcon(QIcon("./resource/image/暂停.png"));
        m_isPlay = true;
        m_player->play();
    }
}

void MainW::on_volumeBtn_clicked() {
    if(!m_volumeBtnChecked && m_volumeW) {
        m_volumeBtnChecked = true;
        m_volumeW->setVisible(true);
        QApplication::setActiveWindow(m_volumeW);
    }else{
        m_volumeBtnChecked = false;
    }

}

void MainW::lengthChanged(int length) {
    int minutes = length / 1000 / 60;
    int seconds = length / 1000 % 60;
    m_totalTimeStr = "";
    m_curTimeStr = "00:00";
    if(minutes < 10) {
        m_totalTimeStr += "0";
    }
    m_totalTimeStr += QString::number(minutes) + ":";
    if(seconds < 10) {
        m_totalTimeStr += "0";
    }
    m_totalTimeStr += QString::number(seconds);
    ui->timeLab->setText(m_curTimeStr + "/" + m_totalTimeStr);
    ui->seekSlider->setMaximum(length);
    MediaInfoItem info = m_player->getMediaInfo();
    ui->albumLab->setPixmap(QPixmap::fromImage(QImage(info.album)));
}

void MainW::timeChanged(int time) {
    int minutes = time / 1000 / 60;
    int seconds = time / 1000 % 60;
    m_curTimeStr = "";
    if(minutes < 10) {
        m_curTimeStr += "0";
    }
    m_curTimeStr += QString::number(minutes) + ":";
    if(seconds < 10) {
        m_curTimeStr += "0";
    }
    m_curTimeStr += QString::number(seconds);
    ui->timeLab->setText(m_curTimeStr + "/" + m_totalTimeStr);
    ui->seekSlider->setValue(time);
}

void MainW::volumeChanged(int value) {
    if(m_player) {
        m_player->setVolum(value);
    }
}
