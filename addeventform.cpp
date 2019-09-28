#include "addeventform.h"
#include "ui_addeventform.h"

AddEventForm::AddEventForm(EventClass* event, bool* succes, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEventForm)
{
    ui->setupUi(this);
    this->event = event;
    this->succes = succes;

    ui->calendarWidget->setMaximumDate(QDate::currentDate());
    ui->calendarWidget->setMinimumDate(QDate(2014, 1, 1));
    ui->dateEdit->setMaximumDate(QDate::currentDate());
    ui->dateEdit->setMinimumDate(QDate(2014, 1, 1));

    ui->calendarWidget->setSelectedDate(QDate::currentDate());
    ui->dateEdit->setDate(QDate::currentDate());

    ui->points_count->setText("Будет получено баллов: " + QString::number(calculatePoints()));
}

AddEventForm::~AddEventForm()
{
    delete ui;
}

float AddEventForm::calculatePoints()
{
    float points = ui->k_spin->value();
    float rate_size = 1;

    switch(ui->type_box->currentIndex() + 1)
    {
    case 3:
        rate_size = 2;
        break;
    case 4:
        rate_size = 3;
        break;
    case 5:
        rate_size = 4;
        break;
    case 6:
        rate_size = 5;
        break;
    case 7:
        rate_size = 10;
        break;
    case 8:
        rate_size = 15;
        break;
    case 9:
        rate_size = 5;
        break;
    case 10:
        rate_size = 10;
        break;
    case 11:
        rate_size = 15;
        break;
    case 12:
        rate_size = 15;
        break;
    case 13:
        rate_size = 3;
        break;
    case 14:
        rate_size = 5;
        break;
    case 15:
        rate_size = 0.25;
        break;
    case 16:
        rate_size = 3;
        break;
    case 17:
        rate_size = 0.25;
        break;
    case 18:
        rate_size = 2;
        break;
    case 19:
        rate_size = 1;
        break;
    case 20:
        rate_size = 5;
        break;
    case 21:
        rate_size = 5;
        break;
    case 22:
        rate_size = 5;
        break;
    case 23:
        rate_size = 1;
        break;
    }

    points *= rate_size;

    return points;
}

void AddEventForm::on_k_spin_valueChanged(const QString &arg1)
{
    ui->points_count->setText("Будет получено баллов: " + QString::number(calculatePoints()));
}

void AddEventForm::on_type_box_currentIndexChanged(int index)
{
    ui->points_count->setText("Будет получено баллов: " + QString::number(calculatePoints()));
    setLabelKText();
}

void AddEventForm::setLabelKText()
{
    int ind = ui->type_box->currentIndex() + 1;

    switch (ind)
    {
    case 1:
        ui->k_value_text->setText("Количество учеников");
        break;
    case 2:
        ui->k_value_text->setText("Количество участников");
        break;
    case 3:
        ui->k_value_text->setText("Количество участников");
        break;
    case 4:
        ui->k_value_text->setText("Количество участников");
        break;
    case 5:
        ui->k_value_text->setText("Количество участников");
        break;
    case 6:
        ui->k_value_text->setText("Количество призёров");
        break;
    case 7:
        ui->k_value_text->setText("Количество призёров");
        break;
    case 8:
        ui->k_value_text->setText("Количество призёров");
        break;
    case 9:
        ui->k_value_text->setText("Количество участников");
        break;
    case 10:
        ui->k_value_text->setText("Количество участников");
        break;
    case 11:
        ui->k_value_text->setText("Количество участников");
        break;
    case 12:
        ui->k_value_text->setText("Количество призёров");
        break;
    case 13:
        ui->k_value_text->setText("Количество учеников");
        break;
    case 14:
        ui->k_value_text->setText("Нет коэфициента");
        break;
    case 15:
        ui->k_value_text->setText("Количество участников концертов");
        break;
    case 16:
        ui->k_value_text->setText("Количество посещений");
        break;
    case 17:
        ui->k_value_text->setText("Количество помощи");
        break;
    case 18:
        ui->k_value_text->setText("Количество мероприятий");
        break;
    case 19:
        ui->k_value_text->setText("Количество участников");
        break;
    case 20:
        ui->k_value_text->setText("Количество роликов");
        break;
    case 21:
        ui->k_value_text->setText("Количество побед");
        break;
    case 22:
        ui->k_value_text->setText("Количество кружков");
        break;
    case 23:
        ui->k_value_text->setText("Количество побед");
        break;
    }

    ui->k_value_text->setText(ui->k_value_text->text() + ": ");
}

void AddEventForm::on_addButton_clicked()
{
    *succes = true;
    *event = EventClass(ui->type_box->currentIndex() + 1, calculatePoints(), ui->k_spin->value(), ui->calendarWidget->selectedDate());
    close();
}
