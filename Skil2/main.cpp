#include <QCoreApplication>
#include "ui/ui.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    UI ui;
    ui.mainMenu();

    return a.exec();
}

