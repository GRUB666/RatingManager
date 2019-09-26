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

enum MostRatedSection
{
    Education = 1,
    Other,
    Discipline,
    Equal
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_time_box_history_currentIndexChanged(int index);

    void on_show_all_clicked(bool checked);

    void on_education_check_clicked(bool checked);

    void on_other_check_clicked();

    void on_discipline_check_clicked();

    void on_class_label_linkActivated(const QString &link);

    void on_label_2_linkActivated(const QString &link);


private:
    Ui::MainWindow *ui;
    QVector<EventClass> Events;

    void updateDataFromDB();
    void loadEvents();
    void printEvents();
    QString getNameOfEvent(EventClass &ec);
    void printStatistic();
    void changeDays(QDate& date, int value);
    void applyFilters(QVector<EventClass> &vec);
    QDate getLastDate();
};

#endif // MAINWINDOW_H
