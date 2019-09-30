#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QString>
#include <QFile>
#include <QMainWindow>
#include <QtAlgorithms>
#include <QShortcut>
#include <QKeyEvent>

#include "authorithationform.h"
#include "eventclass.h"
#include "addeventform.h"
#include "documentation.h"
#include "typeclass.h"

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

protected:
    virtual void keyPressEvent(QKeyEvent* pe);

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int id;

    QSqlDatabase db;

private slots:
    void on_time_box_history_currentIndexChanged(int index);

    void on_show_all_clicked(bool checked);

    void on_education_check_clicked(bool checked);

    void on_other_check_clicked();

    void on_discipline_check_clicked();

    void on_class_label_linkActivated(const QString &link);

    void on_label_2_linkActivated(const QString &link);


    void on_addEventButton_clicked();

    void on_label_linkActivated(const QString &link);

    void on_pushButton_clicked();

    void on_eventsList_currentRowChanged(int currentRow);

private:
    Ui::MainWindow *ui;
    QVector<EventClass> Events;
    QVector<TypeClass> Types;

    void updateDataFromDB();
    void loadEvents();
    void loadTypes();
    void printEvents();
    QString getNameOfEvent(EventClass& ec);
    void printStatistic();
    void changeDays(QDate& date, int value);
    void applyFilters(QVector<EventClass> &vec);
    QDate getLastDate();
    void setClassLabel();
    void deleteEvent(int index);
};

#endif // MAINWINDOW_H
