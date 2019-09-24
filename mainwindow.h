#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QString>
#include <QFile>
#include <QMainWindow>
#include <QtAlgorithms>

#include "authorithationform.h"
#include "eventclass.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QVector<EventClass> Events;

    void updateDataFromDB();
    void loadEvents();
    void printEvents();
    QString getNameOfEvent(EventClass &ec);
    void printStatistic();
};

#endif // MAINWINDOW_H
