#ifndef URLOPENAPPLICATION_H
#define URLOPENAPPLICATION_H

#pragma once

#include <QApplication>
#include <QMessageBox>
#include <QFile>
#include <QFileOpenEvent>
#include <QKeyEvent>
#include <QHoverEvent>
#include <QDebug>



class UrlOpenApplication : public QApplication
{
    Q_OBJECT

public:
    UrlOpenApplication(int &argc, char **argv);

    bool event(QEvent * event) override
        {
            if (event->type() == QEvent::FileOpen)
            {
                QMessageBox box;
                box.setText(static_cast<QFileOpenEvent *>(event)->url().toEncoded());
                box.exec();
            }
            return QApplication::event(event);
        }

signals:
    void eventToLog(QString text);

};

#endif // URLOPENAPPLICATION_H
