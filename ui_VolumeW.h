/********************************************************************************
** Form generated from reading UI file 'VolumeW.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLUMEW_H
#define UI_VOLUMEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VolumeW
{
public:
    QVBoxLayout *verticalLayout;
    QSlider *volumeSlider;
    QPushButton *volumeBtn;

    void setupUi(QWidget *VolumeW)
    {
        if (VolumeW->objectName().isEmpty())
            VolumeW->setObjectName(QString::fromUtf8("VolumeW"));
        VolumeW->resize(61, 176);
        verticalLayout = new QVBoxLayout(VolumeW);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 15);
        volumeSlider = new QSlider(VolumeW);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(volumeSlider->sizePolicy().hasHeightForWidth());
        volumeSlider->setSizePolicy(sizePolicy);
        volumeSlider->setMaximum(100);
        volumeSlider->setValue(100);
        volumeSlider->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(volumeSlider);

        volumeBtn = new QPushButton(VolumeW);
        volumeBtn->setObjectName(QString::fromUtf8("volumeBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(volumeBtn->sizePolicy().hasHeightForWidth());
        volumeBtn->setSizePolicy(sizePolicy1);
        volumeBtn->setMinimumSize(QSize(30, 30));

        verticalLayout->addWidget(volumeBtn);


        retranslateUi(VolumeW);

        QMetaObject::connectSlotsByName(VolumeW);
    } // setupUi

    void retranslateUi(QWidget *VolumeW)
    {
        VolumeW->setWindowTitle(QCoreApplication::translate("VolumeW", "Form", nullptr));
        volumeBtn->setText(QCoreApplication::translate("VolumeW", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VolumeW: public Ui_VolumeW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLUMEW_H
