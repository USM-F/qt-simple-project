#include "facultywindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FacultyWindow w;
    w.show();

    return a.exec();
}
