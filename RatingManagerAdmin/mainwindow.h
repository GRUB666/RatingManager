#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

#include "eventclass.h"
#include "typeclass.h"
#include "classclass.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QSqlDatabase db;

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QVector<EventClass> Events;
    QVector<ClassClass> Classes;
    QVector<TypeClass> Types;

private:
    Ui::MainWindow *ui;

    void loadClassData();
    void loadEvents();
    void loadTypes();
};

#endif // MAINWINDOW_H
