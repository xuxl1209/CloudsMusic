#include "MediaPlayer.h"

#include <QDir>

static void handleEvents(const libvlc_event_t *event, void *userData)
{
    MediaPlayer* obj = (MediaPlayer*)userData;

//    switch (event->type)
//    {
//    // 加载完成
//    case libvlc_MediaPlayerVout:
//    {
//        emit obj->playAllTime(obj->GetTime() / 1000);
//        break;
//    }
//    // media player 位置改变
//    case libvlc_MediaPlayerPositionChanged:
//    {
//        int time = obj->getPlayTime();
//        emit obj->playCurrentTime(time / 1000);
//        break;
//    }
//    // 播放完成
//    case libvlc_MediaPlayerEndReached:
//    {
//        obj->getState();
//        obj->PlayEnd();
//        break;
//    }
//    default:
//        break;
//    }
}

MediaPlayer::MediaPlayer(QObject *parent) : QObject(parent)
{
    m_instance = libvlc_new(0, nullptr);
    m_player = libvlc_media_player_new(m_instance);
}

MediaPlayer::~MediaPlayer()
{
    /*释放media*/
    if (m_media){
        libvlc_media_release(m_media);
        m_media = nullptr;
    }
    /*释放player*/
    libvlc_media_player_release(m_player);
    m_player = nullptr;
    /*释放实例*/
    libvlc_release(m_instance);
    m_instance = nullptr;
}

void MediaPlayer::setMedia(const QString &file)
{
    /*将文件路径转换成本地系统风格*/
    QString path = QDir::toNativeSeparators(file);
    /*释放media*/
    if(m_media){
        libvlc_media_release(m_media);
        m_media = nullptr;
    }
    /*创建新的media*/
    m_media = libvlc_media_new_path(m_instance, path.toStdString().c_str());
    /*设置player的media*/
    libvlc_media_player_set_media(m_player, m_media);
}

void MediaPlayer::setOutputObject(void *hwnd)
{
    /*设置播放句柄*/
#if defined(Q_OS_WIN)
    libvlc_media_player_set_hwnd(m_player, hwnd);
#elif defined(Q_OS_LINUX)
    libvlc_media_player_set_xwindow(player, hwnd);
#elif defined(Q_OS_MAC)
    libvlc_media_player_set_nsobject(player, hwnd);
#endif
}

void MediaPlayer::play()
{
    libvlc_media_player_play(m_player);
}

void MediaPlayer::pause()
{
    libvlc_media_player_pause(m_player);
}

void MediaPlayer::resume()
{
    play();
}

void MediaPlayer::stop()
{
    libvlc_media_player_stop(m_player);
}

int64_t MediaPlayer::getTime()
{
    if (m_player){
        return libvlc_media_player_get_length(m_player);
    }
    return 0;
}

int64_t MediaPlayer::getPlayTime()
{
    if (m_player){
        return libvlc_media_player_get_time(m_player);
    }
    return 0;
}

void MediaPlayer::setPlayTime(int64_t time)
{
    if (m_player){
        libvlc_media_player_set_time(m_player, time);
    }
}

void MediaPlayer::setVolume(int volume)
{
    if (m_player){
        libvlc_audio_set_volume(m_player, volume);
    }
}

int MediaPlayer::getVolume()
{
    if (m_player){
        return libvlc_audio_get_volume(m_player);
    }
    return 0;
}

bool MediaPlayer::setTrack(int track)
{
    if (m_player) {
        return libvlc_audio_set_track(m_player, track) == 0;
    }
    return false;
}

MediaPlayer::State MediaPlayer::getState()
{
    State res;
    libvlc_state_t state = libvlc_media_player_get_state(m_player);
    switch (state) {
    case libvlc_Ended:
    case libvlc_Stopped:
        res = Stopped;
        break;
    case libvlc_Paused:
        res = Paused;
        break;
    case libvlc_Playing:
        res = Playing;
        break;
    default:
        res = Stopped;
        break;
    }
    return res;
}
