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

private slots:
    void on_time_box_history_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    QVector<EventClass> Events;

    void updateDataFromDB();
    void loadEvents();
    void printEvents();
    QString getNameOfEvent(EventClass &ec);
    void printStatistic();
    void changeDays(QDate& date, int value);
};

#endif // MAINWINDOW_H
