/**
 * @file       MediaPlayer.h
 * @brief      多媒体实例 Function
 * @author     Xuxl<xuxl1209@foxmail.com>
 * @date       2023/06/30
 * @version    1.0
 * @copyright  Copyright 2023 Contributors as noted in the AUTHORS file.
 *             All right reserved. See COPYRIGHT for detailed Information.
 */
#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include <QObject>
#include <QString>

#include "VLCQtCore/Common.h"
#include "VLCQtCore/Instance.h"
#include "VLCQtCore/Media.h"
#include "VLCQtCore/MediaPlayer.h"

class MediaPlayer : public QObject
{
    Q_OBJECT
public:
    MediaPlayer(QObject* parent = nullptr);
    ~MediaPlayer();

    void loadMedia(QString &url, bool isLocal = true);

    void play();

    void pause();

    void stop();

private:
    VlcInstance *m_instance = nullptr;
    VlcMedia *m_media = nullptr;
    VlcMediaPlayer *m_player = nullptr;
};

#endif // MEDIAPLAYER_H
