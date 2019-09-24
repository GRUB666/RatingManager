#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("Приложение загружено");

    AuthorithationForm *auth = new AuthorithationForm(); //Открытие окна авторизации
    auth->exec();
    delete auth;

    this->showMaximized();

    updateDataFromDB(); //Первичная загрузка данных из бд
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateDataFromDB()
{
    loadEvents();
    printEvents();
    printStatistic();
}

//TODO: сделать загрузку событий из бд в вектор Events
void MainWindow::loadEvents()
{
    for(int i = 1; i < 7; i++)
    {
        QDate dat = QDate::currentDate();
        dat.setDate(dat.year(), dat.month(), dat.day() + i);
        EventClass nw(i, i + 10, 1, dat);
        Events.push_front(nw);
    }
}

//Выводит все события в список истории
void MainWindow::printEvents()
{
    //Сортировка событий по дате
    std::sort(Events.begin(), Events.end(), [](EventClass &p1, EventClass &p2)
    {
        return p1.getDate() > p2.getDate();
    });

    ui->eventsList->clear();

    for (auto &var : Events)
    {
        //Добавление в список события
        ui->eventsList->addItem(var.getDate().toString("dd.MM.yy") + " - " + getNameOfEvent(var) + " - " + QString::number(var.getPoints()) + "бл");
        ui->eventsList->item(ui->eventsList->count() - 1)->setTextAlignment(Qt::AlignHCenter); //Отцентровка
    }
}

//TODO: нужно расписать все типы событий
QString MainWindow::getNameOfEvent(EventClass &ec)
{
    switch (ec.getType())
    {
    case 1:
        return "Ученик закончил чертверть без троек";
        break;
    case 2:
        return "Участие в школьном туре олимпиады";
        break;

    default:
        return "Некорректный тип!";
    }
}

//TODO: сделать вывод статистики (собирается из вектора Events)
void MainWindow::printStatistic()
{

}
