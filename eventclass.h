#ifndef EVENTCLASS_H
#define EVENTCLASS_H

#include <QDate>

class EventClass
{
// Класс события рейтинга
private:
    QDate date;
    int type;
    float points;
    int k;

public:
    EventClass();
    EventClass(int type, float points, int k = 1, QDate date = QDate());

    QDate getDate() { return date; }
    int getType() { return type; }
    float getPoints() { return points; }
    int getK() { return k; }

    void setDate(QDate date) { this->date = date; }
    void setType(int type) { this->type = type; }
    void setPoints(float points) { this->points = points; }
    void setK(int k) { this->k = k; }
};

#endif // EVENTCLASS_H
