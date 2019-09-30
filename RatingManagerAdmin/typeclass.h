#ifndef TYPECLASS_H
#define TYPECLASS_H

#include <QString>

class TypeClass
{
    QString name;
    int category;
    float points;
    QString alter_name;

public:
    TypeClass();

    void setName(QString name) { this->name = name; }
    void setCategory(int category ) { this->category = category; }
    void setPoints(float points) { this->points = points; }
    void setAlterName(QString alter_name) {this->alter_name = alter_name; }

    QString getName() { return name; }
    int getCategory() { return category; }
    float getPoints() { return points; }
    QString getAlterName() { return alter_name; }

};

#endif // TYPECLASS_H
