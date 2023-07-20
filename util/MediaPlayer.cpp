#include "MediaPlayer.h"

#include <QFile>

MediaPlayer::MediaPlayer(QObject *parent) : QObject(parent) {
    m_instance = new VlcInstance(VlcCommon::args(), this);
    m_player = new VlcMediaPlayer(m_instance);

}

MediaPlayer::~MediaPlayer() {
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
