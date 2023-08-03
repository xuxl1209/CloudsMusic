#include <QApplication>
#include "widget/MainW.h"
#include "util/WidgetManager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainW *w = new MainW;
    w->show();
    WidgetMgr::getInstance()->setMainWidget(w);
    return a.exec();
}
