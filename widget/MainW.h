/**
 * @file       MainW.h
 * @brief      主窗口UI Function
 * @author     Xuxl<xuxl1209@foxmail.com>
 * @date       2023/06/25
 * @version    1.0
 * @copyright  Copyright 2023 Contributors as noted in the AUTHORS file.
 *             All right reserved. See COPYRIGHT for detailed Information.
 */
#ifndef MAINW_H
#define MAINW_H

#include <QMouseEvent>
#include <QPaintEvent>
#include <QPoint>
#include <QWidget>

#include <util/MediaPlayer.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainW; }
QT_END_NAMESPACE

class MainW : public QWidget
{
    Q_OBJECT

public:
    MainW(QWidget *parent = nullptr);
    ~MainW();

    /**
     * @brief initUI
     */
    void initUI();

    // QWidget interface
protected:
    /**
     * @brief mousePressEvent
     * @param event
     */
    void mousePressEvent(QMouseEvent *event);
    /**
     * @brief mouseReleaseEvent
     * @param event
     */
    void mouseReleaseEvent(QMouseEvent *event);
    /**
     * @brief mouseMoveEvent
     * @param event
     */
    void mouseMoveEvent(QMouseEvent *event);

private slots:
    /**
     * @brief on_minBtn_clicked
     */
    void on_minBtn_clicked();
    /**
     * @brief on_winBtn_clicked
     */
    void on_winBtn_clicked();
    /**
     * @brief on_closeBtn_clicked
     */
    void on_closeBtn_clicked();
    /**
     * @brief on_playBtn_clicked
     */
    void on_playBtn_clicked();

    void lengthChanged(int length);

    void timeChanged(int time);

private:
    Ui::MainW *ui;

    bool m_isPlay;

    bool m_isMax;

    bool m_isMousePress;

    QPoint m_mousePressPoint;

    MediaPlayer* m_player = nullptr;

    QString totalTimeStr;

    QString curTimeStr;
};
#endif // MAINW_H
