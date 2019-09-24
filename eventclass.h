#ifndef EVENTCLASS_H
#define EVENTCLASS_H

#include <QDate>

class EventClass
{
// Класс события рейтинга
private:
    QDate date;
    int type;
    int points;
    int k;

public:
    EventClass();
    EventClass(int type, int points, int k = 1, QDate date = QDate());

    QDate getDate() { return date; }
    int getType() { return type; }
    int getPoints() { return points; }
    int getK() { return k; }

    void setDate(QDate date) { this->date = date; }
    void setType(int type) { this->type = type; }
    void setPoints(int points) { this->points = points; }
    void setK(int k) { this->k = k; }
};

#endif // EVENTCLASS_H
