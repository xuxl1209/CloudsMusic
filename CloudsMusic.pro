QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG(debug, debug|release) {
    DESTDIR = $$PWD/CloudsMusic/Debug
} else {
    DESTDIR = $$PWD/bin
}

RC_FILE += CloudsMusic.rc

SOURCES += \
    main.cpp \
    util/MediaPlayer.cpp \
    util/WidgetManager.cpp \
    widget/MainW.cpp \
    widget/VolumeW.cpp

HEADERS += \
    util/MediaPlayer.h \
    util/Singleton.h \
    util/UTF8Code.h \
    util/WidgetManager.h \
    widget/MainW.h \
    widget/VolumeW.h

FORMS += \
    widget/MainW.ui \
    widget/VolumeW.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/lib/ -lVLCQtCore -lVLCQtQml -lVLCQtWidgets

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include
