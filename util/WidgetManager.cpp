#include "WidgetManager.h"

WidgetManager::WidgetManager(QObject *parent)
    : QObject{parent}
{

}

void WidgetManager::setMainWidget(QWidget *widget) {
    if(widget) {
        m_mainW = widget;
    }
}

bool WidgetManager::move(QWidget *widget, int x, int y) {
    if(m_mainW) {
        QPoint globalP = m_mainW->mapToGlobal(QPoint(0, 0));
        widget->move(globalP.x() + x, globalP.y() + y);
        return true;
    }
    return false;
}
