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

#if defined(_MSC_VER)
#include <Windows.h>
typedef SSIZE_T ssize_t;
#endif
#include <QObject>
#include <QString>
#include <memory>
#include "vlc/vlc.h"

class MediaPlayer : public QObject
{
    Q_OBJECT
public:
    enum State{
        Stopped,    //停止
        Playing,    //播放中
        Paused      //暂停
    };

    MediaPlayer(QObject *parent=nullptr);
    ~MediaPlayer();
    /**
     * @brief setMedia
     * @param file
     */
    void setMedia(const QString &file);
    /**
     * @brief setOutputObject 设置输出对象
     * @param hwnd
     */
    void setOutputObject(void *hwnd);
    /**
     * @brief play 播放
     */
    void play();
    /**
     * @brief pause 暂停
     */
    void pause();
    /**
     * @brief resume 继续
     */
    void resume();
    /**
     * @brief stop 停止
     */
    void stop();
    /**
     * @brief getTime 获取时长
     * @return
     */
    int64_t getTime();
    /**
     * @brief getPlayTime 获取播放时间
     * @return
     */
    int64_t getPlayTime();
    /**
     * @brief setPlayTime 设置播放时间
     * @param time
     */
    void setPlayTime(int64_t time);
    /**
     * @brief setVolume 设置音量
     * @param volume
     */
    void setVolume(int volume);
    /**
     * @brief getVolume 获取音量
     * @return
     */
    int getVolume();
    /**
     * @brief setTrack 设置音轨
     * @param track
     * @return
     */
    bool setTrack(int track);
    /**
     * @brief getState 获取状态
     * @return
     */
    State getState();

private:
    /**
     * @brief m_instance vlc实例
     */
    libvlc_instance_t *m_instance = nullptr;
    /**
     * @brief m_player 播放器
     */
    libvlc_media_player_t *m_player = nullptr;
    /**
     * @brief m_media 媒体
     */
    libvlc_media_t *m_media = nullptr;
    /**
     * @brief m_manager 事件管理器
     */
    libvlc_event_manager_t *m_manager = nullptr;
};

#endif // MEDIAPLAYER_H
