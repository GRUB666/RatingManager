#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRecord>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->showMaximized();
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("rating");
    db.setUserName("root");
    db.setPassword("whiterabbit3_root");

    if(!db.open())
    {
        QMessageBox::warning(this, "Ошибка подключения к базе данных","Ошибка: " + db.lastError().text());
        exit(0);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadClassData()
{
    Classes.clear();

    QSqlQuery query = QSqlQuery(db);
    QString qs = "SELECT * FROM class;";

    if(!query.exec(qs))
    {
        QMessageBox::warning(this, "Ошибка подключения", "Код ошибки: " + query.lastError().text());
        exit(0);
    }

    ClassClass tmp;
    QSqlRecord rec = query.record();

    while(query.next())
    {
        tmp.setId(query.value(rec.indexOf("id")).toInt());
        tmp.setNumber(query.value(rec.indexOf("number")).toString());
        tmp.setLetter(query.value(rec.indexOf("category")).toString());

        Classes.push_back(tmp);
    }
}

void MainWindow::loadTypes()
{
    Types.clear();

    QSqlQuery query = QSqlQuery(db);
    QString qs = "SELECT * FROM type;";

    if(!query.exec(qs))
    {
        QMessageBox::warning(this, "Ошибка подключения", "Код ошибки: " + query.lastError().text());
        exit(0);
    }

    TypeClass tmp;
    QSqlRecord rec = query.record();

    while(query.next())
    {
        tmp.setName(query.value(rec.indexOf("name")).toString());
        tmp.setPoints(query.value(rec.indexOf("points")).toFloat());
        tmp.setCategory(query.value(rec.indexOf("category")).toInt());
        tmp.setAlterName(query.value(rec.indexOf("alter_name")).toString());

        Types.push_back(tmp);
    }
}


void MainWindow::loadEvents()
{
    Events.clear();

    QSqlQuery query = QSqlQuery(db);
    QString qs = "SELECT * FROM event WHERE id_class = " + QString::number(Classes[ui->classList->currentRow() - 1].getId()) + ";";

    if(!query.exec(qs))
    {
        QMessageBox::warning(this, "Ошибка подключения", "Код ошибки: " + query.lastError().text());
        exit(0);
    }

    EventClass tmp;
    QSqlRecord rec = query.record();

    while(query.next())
    {
        tmp.setType(query.value(rec.indexOf("type")).toInt());
        tmp.setPoints(query.value(rec.indexOf("points")).toFloat());
        tmp.setK(query.value(rec.indexOf("k")).toInt());
        tmp.setDate(query.value(rec.indexOf("date")).toDate());
        tmp.setId(query.value(rec.indexOf("id")).toInt());

        Events.push_back(tmp);
    }
}
