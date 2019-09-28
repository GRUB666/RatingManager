#ifndef ADDEVENTFORM_H
#define ADDEVENTFORM_H

#include <QDialog>
#include "eventclass.h"

namespace Ui {
class AddEventForm;
}

class AddEventForm : public QDialog
{
    Q_OBJECT

private:
    bool *succes;
    EventClass* event;

public:
    explicit AddEventForm(EventClass* event, bool* succes, QWidget *parent = nullptr);
    ~AddEventForm();

    float calculatePoints();
    void setLabelKText();

private slots:
    void on_k_spin_valueChanged(const QString &arg1);

    void on_type_box_currentIndexChanged(int index);

    void on_addButton_clicked();

private:
    Ui::AddEventForm *ui;
};

#endif // ADDEVENTFORM_H
