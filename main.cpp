#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    //w.pixclear();
<<<<<<< HEAD
    //w.pixset(1,1);
=======
    w.pixset(1,30);
>>>>>>> 1a16a31 (61*61)

    return a.exec();
}
