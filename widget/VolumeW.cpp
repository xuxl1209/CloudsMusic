#include "VolumeW.h"
#include "ui_VolumeW.h"

VolumeW::VolumeW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VolumeW)
{
    ui->setupUi(this);
}

VolumeW::~VolumeW()
{
    delete ui;
}
