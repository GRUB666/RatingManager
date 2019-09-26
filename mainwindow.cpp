#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("Приложение загружено. Вход успешно выполнен");

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
    Events.clear();

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

    QVector<EventClass> ToPrintVector = Events;
    applyFilters(ToPrintVector);

    ui->eventsList->clear();
    for (auto &var : ToPrintVector)
    {
        //Добавление в список события
        ui->eventsList->addItem(var.getDate().toString("dd.MM.yy") + " - " + getNameOfEvent(var) + " : " + QString::number(var.getPoints()) + " бл");
        ui->eventsList->item(ui->eventsList->count() - 1)->setTextAlignment(Qt::AlignHCenter); //Отцентровка
    }
}

//TODO: нужно расписать все типы событий
QString MainWindow::getNameOfEvent(EventClass &ec)
{
    switch (ec.getType())
    {
    case 1:
        return "Ученик закончил четверть без троек";
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
    //Сортировка событий по дате
    std::sort(Events.begin(), Events.end(), [](EventClass &p1, EventClass &p2)
    {
        return p1.getDate() > p2.getDate();
    });

    QDate lastDate = getLastDate();
    QVector<EventClass> ToCalculateVector;

    for(auto &var : Events)
    {
        if(var.getDate() >= lastDate)
        {
            ToCalculateVector.push_back(var);
        }

        else
        {
            break;
        }
    }

    //Расчёт и инициализация всех переменных
    {
    int summ_rating = 0;
    for(auto &var : ToCalculateVector)
    {
        summ_rating += var.getPoints();
    }

    int education_rating = 0;
    for(auto &var : ToCalculateVector)
    {
        if(var.getType() < 12) { education_rating += var.getPoints(); }
    }

    int other_rating = 0;
    for(auto &var : ToCalculateVector)
    {
        if(var.getType() >= 12 && var.getType() < 22) { other_rating += var.getPoints(); }
    }

    int discipline_rating = 0;
    for(auto &var : ToCalculateVector)
    {
        if(var.getType() >= 22) { discipline_rating += var.getPoints(); }
    }



    int count_of_winners = 0;
    for(auto &var : ToCalculateVector)
    {
        if(var.getType() == 6 || var.getType() == 7 || var.getType() == 8)
            count_of_winners += var.getK();
    }

    int count_of_competitors = 0;
    for(auto &var : ToCalculateVector)
    {
        if(var.getType() == 2 || var.getType() == 3 || var.getType() == 4 || var.getType() == 5)
            count_of_competitors += var.getK();
    }

    int count_of_feswinners = 0;
    for(auto &var : ToCalculateVector)
    {
        if(var.getType() == 12)
            count_of_feswinners += var.getK();
    }

    int count_of_fescompetitors = 0;
    for(auto &var : ToCalculateVector)
    {
        if(var.getType() == 9 || var.getType() == 10 || var.getType() == 11)
            count_of_fescompetitors += var.getK();
    }

    int theater_count = 0;
    for(auto &var : ToCalculateVector)
    {
        if(var.getType() == 15)
            theater_count += var.getK();
    }

    int museum_trips_count = 0;
    for(auto &var : ToCalculateVector)
    {
        if(var.getType() == 16)
            museum_trips_count += var.getK();
    }

    int count_of_wins_in_school_comp = 0;
    for(auto &var : ToCalculateVector)
    {
        if(var.getType() == 21)
            count_of_wins_in_school_comp += var.getK();
    }

    int pupil_in_form = 0;
    int count = 0;
    for(auto &var : ToCalculateVector)
    {
        if(var.getType() == 24)
        {
            count++;
            pupil_in_form += var.getK();
        }
    }

    if(count != 0)
         pupil_in_form /= count;
    else
        pupil_in_form = -1;

    int nomisses_count = 0;
    for(auto &var : ToCalculateVector)
    {
        if(var.getType() == 27)
            nomisses_count += var.getPoints();
    }

    int messages_about_school = 0;
    for(auto &var : ToCalculateVector)
    {
        if(var.getType() == 27)
            messages_about_school += var.getK();
    }

    ui->summ_rating->setText("Суммарный рейтинг: " + QString::number(summ_rating));
    ui->educate_rating->setText("Баллы за учебную деятельность: " + QString::number(education_rating));
    ui->other_rating->setText("Баллы за внеурочную деятельность: " + QString::number(other_rating));
    ui->discipline_rating->setText("Баллы за дисциплину: " + QString::number(discipline_rating));

    ui->winners_count->setText("Количество призёров олимпиад: " + QString::number(count_of_winners));
    ui->competitors_count->setText("Количество участников олимпиад: " + QString::number(count_of_competitors));
    ui->festives_winners->setText("Количество призёров конкурсов: " + QString::number(count_of_feswinners));
    ui->festives_competitors->setText("Количество участников конкурсов: " + QString::number(count_of_fescompetitors));

    //
    ui->theater_count->setText("Количество участий в постановках: " + QString::number(theater_count));
    ui->museum_trips->setText("Количество походов в музеи и.т.п: " + QString::number(museum_trips_count));
    ui->wins_competitions->setText("Количество побед в школьных конкурсах: " + QString::number(count_of_wins_in_school_comp));

    if(pupil_in_form >= 0)
        ui->form_count->setText("Среднее количество учеников в форме: " + QString::number(pupil_in_form));
    else
        ui->form_count->setText("Среднее количество учеников в форме: нет данных");

    ui->misses_points->setText("Баллы за отсутствие пропусков: " + QString::number(nomisses_count));
    ui->reports_count->setText("Количество полезных сообщений о школе: " + QString::number(messages_about_school));
    }
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

//vec должен быть заранее отсортирован по дате
void MainWindow::applyFilters(QVector<EventClass> &vec)
{
    QDate lastDate = getLastDate();

    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i].getDate() >= lastDate)
        {
            if(vec[i].getType() < 12)
            {
                if(!ui->education_check->isChecked())
                {
                    vec.erase(vec.begin() + i);
                    i--;
                }
            }

            else if(vec[i].getType() < 22)
            {
                if(!ui->other_check->isChecked())
                {
                    vec.erase(vec.begin() + i);
                    i--;
                }
            }

            else
            {
                if(!ui->discipline_check->isChecked())
                {
                    vec.erase(vec.begin() + i);
                    i--;
                }
            }
        }

        else
        {
            vec.erase(vec.begin() + i, vec.end());
            break;
        }
    }

}

QDate MainWindow::getLastDate()
{
    QDate lastDate = QDate::currentDate();
    switch (ui->time_box_history->currentIndex())
    {
    case 1:
        changeDays(lastDate, -6);
        return lastDate;
        break;
    case 2:
        changeDays(lastDate, -30);
        return lastDate;
        break;
    case 3:
        changeDays(lastDate, -90);
        return lastDate;
        break;
    default:
        lastDate = QDate(0, 0, 1);
        return lastDate;
        break;
    }
}

void MainWindow::on_time_box_history_currentIndexChanged(int index)
{
    printEvents();
    printStatistic();
    switch (index)
    {
    case 0:
        ui->groupBox->setTitle("Статистика за всё время");
        break;
    case 1:
        ui->groupBox->setTitle("Статистика за неделю");
        break;
    case 2:
        ui->groupBox->setTitle("Статистика за месяц");
        break;
    case 3:
        ui->groupBox->setTitle("Статистика за 3 месяца");
        break;
    }
}

void MainWindow::on_show_all_clicked(bool checked)
{
   if(checked)
   {
       ui->education_check->setChecked(true);
       ui->other_check->setChecked(true);
       ui->discipline_check->setChecked(true);
   }

   else
   {
       ui->show_all->blockSignals(true);
       ui->show_all->setChecked(true);
       ui->show_all->blockSignals(false);
   }

   printEvents();
}

void MainWindow::on_education_check_clicked(bool checked)
{
    if(ui->education_check->isChecked() && ui->other_check->isChecked() && ui->discipline_check->isChecked())
        ui->show_all->setChecked(true);
    else
        ui->show_all->setChecked(false);

    printEvents();
}

void MainWindow::on_other_check_clicked()
{
    if(ui->education_check->isChecked() && ui->other_check->isChecked() && ui->discipline_check->isChecked())
        ui->show_all->setChecked(true);
    else
        ui->show_all->setChecked(false);

    printEvents();
}

void MainWindow::on_discipline_check_clicked()
{
    if(ui->education_check->isChecked() && ui->other_check->isChecked() && ui->discipline_check->isChecked())
        ui->show_all->setChecked(true);
    else
        ui->show_all->setChecked(false);

    printEvents();
}

void MainWindow::on_class_label_linkActivated(const QString &link)
{
    this->setVisible(false);

    AuthorithationForm *auth = new AuthorithationForm(); //Открытие окна авторизации
    auth->exec();
    delete auth;

    this->setVisible(true);
    ui->statusBar->showMessage("Вход успешно выполнен");

    updateDataFromDB();
}

void MainWindow::on_label_2_linkActivated(const QString &link)
{
    updateDataFromDB();
    ui->statusBar->showMessage("Данные обновлены");
}
