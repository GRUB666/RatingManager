#ifndef ADDEVENTFORM_H
#define ADDEVENTFORM_H

#include <QDialog>
#include "eventclass.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QVector>

#include "typeclass.h"

namespace Ui {
class AddEventForm;
}

class AddEventForm : public QDialog
{
    Q_OBJECT

private:
    bool *succes;
    QSqlDatabase* db;
    int id_class;
    QVector<TypeClass> types;

public:
    explicit AddEventForm(QSqlDatabase* db, bool* succes, int id_class, QVector<TypeClass>& types, QWidget *parent = nullptr);
    ~AddEventForm();

    float calculatePoints();
    void setLabelKText();

private slots:
    void on_k_spin_valueChanged(const QString &arg1);

    void on_type_box_currentIndexChanged(int index);

    void on_addButton_clicked();

private:
    Ui::AddEventForm *ui;

    void setTypesInBox();
};

#endif // ADDEVENTFORM_H
