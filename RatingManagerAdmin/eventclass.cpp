#include "eventclass.h"

EventClass::EventClass()
{

}

EventClass::EventClass(int type, float points, int k, QDate date)
{
    this->type = type;
    this->points = points;
    this->k = k;
    this->date = date;
}
