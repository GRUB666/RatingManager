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
}

AddEventForm::~AddEventForm()
{
    delete ui;
}
