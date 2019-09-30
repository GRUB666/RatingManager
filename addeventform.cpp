#include "addeventform.h"
#include "ui_addeventform.h"
#include <QMessageBox>

AddEventForm::AddEventForm(QSqlDatabase* db, bool* succes, int id_class, QVector<TypeClass>& types, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEventForm)
{
    ui->setupUi(this);
    this->succes = succes;
    this->db = db;
    this->id_class = id_class;

   for(auto &var : types)
   {
       if(var.getCategory() != 3)
           this->types.push_back(var);
   }

    ui->calendarWidget->setMaximumDate(QDate::currentDate());
    ui->calendarWidget->setMinimumDate(QDate(2014, 1, 1));
    ui->dateEdit->setMaximumDate(QDate::currentDate());
    ui->dateEdit->setMinimumDate(QDate(2014, 1, 1));

    ui->calendarWidget->setSelectedDate(QDate::currentDate());
    ui->dateEdit->setDate(QDate::currentDate());
    setTypesInBox();

    ui->points_count->setText("Будет получено баллов: " + QString::number(calculatePoints()));
}

AddEventForm::~AddEventForm()
{
    delete ui;
}

float AddEventForm::calculatePoints()
{
    qDebug() << ui->type_box->currentIndex();
    return ui->k_spin->value() * types[ui->type_box->currentIndex()].getPoints();
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
    //*event = EventClass(ui->type_box->currentIndex() + 1, calculatePoints(), ui->k_spin->value(), ui->calendarWidget->selectedDate());

    QSqlQuery query = QSqlQuery(*db);

    query.prepare("INSERT INTO event (id_class, type, points, k, date) VALUES(:id_class, :type, :points, :k, :date);");

    query.bindValue(":id_class", id_class);
    query.bindValue(":type", ui->type_box->currentIndex()+1);
    query.bindValue(":points", calculatePoints());
    query.bindValue(":k", ui->k_spin->value());
    query.bindValue(":date", ui->calendarWidget->selectedDate());

    if(!query.exec())
    {
        QMessageBox::warning(this, "Ошибка добавления!", "При добавлении произошла ошибка");
    }

    else
    {
        close();
    }


}

void AddEventForm::setTypesInBox()
{
    for(auto &var : types)
    {
        ui->type_box->addItem(var.getName());
    }

    qDebug() << ui->type_box->currentIndex();
    ui->type_box->setCurrentIndex(0);
    qDebug() << ui->type_box->currentIndex();
}
