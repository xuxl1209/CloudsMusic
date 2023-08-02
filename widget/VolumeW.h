/**
 * @file       VolumeW.h
 * @brief      音量窗口 Function
 * @author     Xuxl<xuxl1209@foxmail.com>
 * @date       2023/07/27
 * @version    1.0
 * @copyright  Copyright 2023 Contributors as noted in the AUTHORS file.
 *             All right reserved. See COPYRIGHT for detailed Information.
 */
#ifndef VOLUMEW_H
#define VOLUMEW_H

#include <QMouseEvent>
#include <QWidget>

namespace Ui {
class VolumeW;
}

class VolumeW : public QWidget
{
    Q_OBJECT

public:
    explicit VolumeW(QWidget *parent = nullptr);
    ~VolumeW();

    void mousePressEvent(QMouseEvent *event);

signals:
    void valueChanged(int value);

private slots:
    void on_volumeSlider_valueChanged(int value);

private:
    Ui::VolumeW *ui;
};

#endif // VOLUMEW_H
