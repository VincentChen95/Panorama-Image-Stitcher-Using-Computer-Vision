#include <QtWidgets/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    qputenv("QT_AUTO_SCREEN_SCALE_FACTOR", "1");
    qputenv("QT_SCALE_FACTOR", "1.5"); // whatever suits you

    QApplication a(argc, argv);
    QFont f = a.font();
    f.setPointSize(7); // whatever font size suits you
    a.setFont(f);


    MainWindow w;
    w.show();

    return a.exec();
}
