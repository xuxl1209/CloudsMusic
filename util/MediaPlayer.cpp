#include "MediaPlayer.h"
#include <QDebug>
#include <QFile>

MediaPlayer::MediaPlayer(QObject *parent) : QObject(parent)
    ,m_volume(30) {
    m_instance = new VlcInstance(VlcCommon::args(), this);
    m_player = new VlcMediaPlayer(m_instance);
    connect(m_player, &VlcMediaPlayer::lengthChanged, this, &MediaPlayer::slotLengthChanged);
    connect(m_player, &VlcMediaPlayer::timeChanged, this, &MediaPlayer::slotTimeChanged);
}

MediaPlayer::~MediaPlayer() {
    disconnect(m_player, &VlcMediaPlayer::lengthChanged, this, &MediaPlayer::slotLengthChanged);
    disconnect(m_player, &VlcMediaPlayer::timeChanged, this, &MediaPlayer::slotTimeChanged);

    delete m_player;
    delete m_media;
    delete m_instance;
    m_player = nullptr;
    m_media = nullptr;
    m_instance = nullptr;
}

void MediaPlayer::loadMedia(QString &url, bool isLocal) {
    if(url.isEmpty()) {
        return;
    }

    if(isLocal) {
        if(QFile(url).exists()) {
            m_media = new VlcMedia(url, true, m_instance);
        }
    } else {
        m_media = new VlcMedia(url, m_instance);
    }
    if(m_meta) {
        delete m_meta;
        m_meta = nullptr;
    }
    m_meta = new VlcMetaManager(m_media);
    m_player->open(m_media);
}

void MediaPlayer::play() {
    m_player->play();
}

void MediaPlayer::pause() {
    m_player->pause();
}

void MediaPlayer::stop() {
    m_player->stop();
}

void MediaPlayer::setVolum(int volume) {
    m_volume = volume;
    m_player->audio()->setVolume(volume);
}

MediaInfoItem MediaPlayer::getMediaInfo() {
    MediaInfoItem info;
    if(m_meta) {
        info.album = m_meta->album();
        info.artist = m_meta->artist();
        info.artwork = m_meta->artwork();
        info.copyright = m_meta->copyright();
        info.description = m_meta->description();
        info.encoder = m_meta->encoder();
        info.genre = m_meta->genre();
        info.language = m_meta->language();
        info.number = m_meta->number();
        info.publisher = m_meta->publisher();
        info.rating = m_meta->rating();
        info.title = m_meta->title();
        info.url = m_meta->url();
        info.year = m_meta->year();
    }
    return info;
}

void MediaPlayer::slotLengthChanged(int length) {
    emit lengthChanged(length);
}

void MediaPlayer::slotTimeChanged(int time) {
    emit timeChanged(time);
}
