/**
 * @file       WidgetManager.h
 * @brief      窗口管理封装 Function
 * @author     Xuxl<xuxl1209@foxmail.com>
 * @date       2023/07/27
 * @version    1.0
 * @copyright  Copyright 2023 Contributors as noted in the AUTHORS file.
 *             All right reserved. See COPYRIGHT for detailed Information.
 */
#ifndef WIDGETMANAGER_H
#define WIDGETMANAGER_H

#include <QDebug>
#include <QObject>
#include <memory>

#include "../util/Singleton.h"

class WidgetManager : public QObject
{
    Q_OBJECT
public:

    explicit WidgetManager(QObject *parent = nullptr);
};

typedef Singleton<WidgetManager> WidgetMgr;

#endif // WIDGETMANAGER_H
