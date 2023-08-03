#include "VolumeW.h"
#include "ui_VolumeW.h"

#include <QPainter>
#include <QPalette>
#include <QDebug>

VolumeW::VolumeW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VolumeW) {
    ui->setupUi(this);
    setWindowFlags(Qt::Tool | Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground, true);
}

VolumeW::~VolumeW() {
    delete ui;
}

bool VolumeW::event(QEvent *event) {
    if(event->type() == QEvent::ActivationChange) {
        if(QApplication::activeWindow() != this) {
            qDebug() << __FUNCTION__;
            setVisible(false);
        }
    }
    return QWidget::event(event);
}

bool VolumeW::eventFilter(QObject *watched, QEvent *event) {
    if(event->type() == QEvent::Resize || event->type() == QEvent::Move) {
        QWidget *mainW = dynamic_cast<QWidget*>(watched);
        if(mainW) {
            QPoint globalP = mainW->mapToGlobal(QPoint(0, 0));
            this->move(globalP.x() + 200 + (mainW->width() - 200) / 2 + 75 - (width() / 2), globalP.y() + mainW->height() - 45 - height());
            return true;
        }
    }
    return QWidget::eventFilter(watched, event);
}

void VolumeW::mousePressEvent(QMouseEvent *event) {
    setAttribute(Qt::WA_NoMouseReplay);
    QWidget::mousePressEvent(event);
}

void VolumeW::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.drawPixmap(rect(), QPixmap("./resource/image/volumeB.png"), QRect());
}

void VolumeW::on_volumeSlider_valueChanged(int value) {
    emit valueChanged(value);
}
