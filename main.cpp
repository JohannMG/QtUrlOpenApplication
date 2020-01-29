#include "mainwindow.h"
#include "url-open-application.h"

#include <QApplication>
#include <QString>

int main(int argc, char *argv[])
{
    UrlOpenApplication a(argc, argv);
    MainWindow w;
    UrlOpenApplication::connect(&a, &UrlOpenApplication::eventToLog,
                                &w, &MainWindow::LogToWindow);
    w.show();
    return a.exec();
}
