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

private:
    Ui::AddEventForm *ui;
};

#endif // ADDEVENTFORM_H
