#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

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

    QDate dat = QDate::currentDate();
    for(int i = 0; i < 100; i++)
    {
        changeDays(dat, 1);
        qDebug() << dat;
    }

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
    for(int i = 1; i < 29; i++)
    {
        QDate dat = QDate::currentDate();
        changeDays(dat, 1 - i);
        EventClass nw(i, i, 1, dat);
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
        QDate lastDate = QDate::currentDate();
        switch (ui->time_box_history->currentIndex())
        {
        case 0:
            lastDate = QDate(0, 0, 1);
            break;
        case 1:
            changeDays(lastDate, -7);
            break;
        default:
            lastDate = QDate(0, 0, 1);
            break;
        }

        if(var.getDate() >= lastDate)
        {
        ui->eventsList->addItem(var.getDate().toString("dd.MM.yy") + " - " + getNameOfEvent(var) + " : " + QString::number(var.getPoints()) + " бл");
        ui->eventsList->item(ui->eventsList->count() - 1)->setTextAlignment(Qt::AlignHCenter); //Отцентровка
        }
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
    case 3:
        return "Участие в окружном туре олимпиады";
        break;
    case 4:
        return "Участие в городском туре олимпиады";
        break;
    case 5:
        return "Участие во Всероссийском туре олимпиады";
        break;
    case 6:
        return "Призёрство в окружном туре олимпиады";
        break;
    case 7:
        return "Призёрство в городском туре олимпиады";
        break;
    case 8:
        return "Призёрство во Всероссийском туре олимпиады";
        break;
    case 9:
        return "Участие в окружном конкурсе";
        break;
    case 10:
        return "Участие в городском конкурсе";
        break;
    case 11:
        return "Участие во Всероссийском конкурсе";
        break;
    case 12:
        return "Призёр конкурса";
        break;
    case 13:
        return "Разница в среднем балле";
        break;
    case 14:
        return "Оформление классного уголка";
        break;
    case 15:
        return "Участие в концерте, постановке или открытом уроке";
        break;
    case 16:
        return "Посещение театра или музея";
        break;
    case 17:
        return "Помощь школьному совету и\\или педагогу";
        break;
    case 18:
        return "Организация мероприятрий";
        break;
    case 19:
        return "Участие в дне самоуправления";
        break;
    case 20:
        return "Снятие фильма\\ролика о классе";
        break;
    case 21:
        return "Победа в школьном мероприятии";
        break;
    case 22:
        return "Организация кружка по интересам в школе";
        break;
    case 23:
        return "Победа в неожиданном соревновании";
        break;
    case 24:
        return "Соблюдение формы";
        break;
    case 25:
        return "Нет замечаний от дежурного";
        break;
    case 26:
        return "Нет правонарушений";
        break;
    case 27:
        return "Посещаемость больше 90%";
        break;
    case 28:
        return "Полезное сообщение о школе";
        break;

    default:
        return "Некорректный тип!";
    }
}

//TODO: сделать вывод статистики (собирается из вектора Events)
void MainWindow::printStatistic()
{

}

void MainWindow::changeDays(QDate &date, int value)
{
    if(value > 0)
    {
        while (value > date.daysInMonth() - date.day())
        {
            value -= date.daysInMonth() - date.day() + 1;;

            if(date.month() == 12)
                date.setDate(date.year()+1, 1, 1);
            else
                date.setDate(date.year(), date.month()+1, 1);
        }

        date.setDate(date.year(), date.month(), date.day() + value);
    }

    else
    {
        while(-value >= date.day())
        {
            value += date.day();
            if(date.month() == 1)
            {
                date.setDate(date.year()-1, 12, 1);
                date.setDate(date.year(), 12, date.daysInMonth());
            }

            else
            {
                date.setDate(date.year(), date.month()-1, 1);
                date.setDate(date.year(), date.month(), date.daysInMonth());
            }
        }

        date.setDate(date.year(), date.month(), date.day() + value);
    }
}

void MainWindow::on_time_box_history_currentIndexChanged(int index)
{
    printEvents();
}
