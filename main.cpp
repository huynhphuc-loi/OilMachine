#include "HomePage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HomePage w;
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.setMinimumSize(1024, 600);
    w.setMaximumSize(1024, 600);
    w.showFullScreen();
    w.show();
    return QApplication::exec();
}
