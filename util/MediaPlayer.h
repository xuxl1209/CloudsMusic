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
#include "VLCQtCore/MetaManager.h"
#include "VLCQtCore/TrackModel.h"

struct MediaInfoItem {
    QString album;
    QString artist;
    QString artwork;
    QString copyright;
    QString description;
    QString encoder;
    QString genre;
    QString language;
    int number;
    QString publisher;
    QString rating;
    QString title;
    QString url;
    int year;
};

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

    MediaInfoItem getMediaInfo();

signals:
    void lengthChanged(int length);

    void timeChanged(int time);

protected slots:
    void slotLengthChanged(int length);

    void slotTimeChanged(int time);

private:
    VlcInstance *m_instance = nullptr;
    VlcMedia *m_media = nullptr;
    VlcMediaPlayer *m_player = nullptr;
    VlcMetaManager *m_meta = nullptr;
};

#endif // MEDIAPLAYER_H
