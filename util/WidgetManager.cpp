#include "WidgetManager.h"

WidgetManager::WidgetManager(QObject *parent)
    : QObject(parent) {

}

void WidgetManager::setMainWidget(QWidget *widget) {
    if(widget) {
        m_mainW = widget;
    }
}

bool WidgetManager::move(QWidget *widget, int x, int y, bool isGlobal) {
    if(m_mainW) {
        QPoint globalP = m_mainW->mapToGlobal(QPoint(0, 0));
        if(isGlobal) {
            widget->move(globalP.x() + x, globalP.y() + y);
        } else {
            widget->move(x, y);
        }
        return true;
    }
    return false;
}
