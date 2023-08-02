#include "VolumeW.h"
#include "ui_VolumeW.h"

VolumeW::VolumeW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VolumeW) {
    ui->setupUi(this);
    setWindowFlags(Qt::Popup);
}

VolumeW::~VolumeW() {
    delete ui;
}

void VolumeW::mousePressEvent(QMouseEvent *event) {
    setAttribute(Qt::WA_NoMouseReplay);
    QWidget::mousePressEvent(event);
}

void VolumeW::on_volumeSlider_valueChanged(int value) {
    emit valueChanged(value);
}
