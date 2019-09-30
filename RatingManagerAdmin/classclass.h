#ifndef CLASSCLASS_H
#define CLASSCLASS_H

#include <QString>


class ClassClass
{
private:
    QString number, letter;
    int id;

public:
    ClassClass();

    void setNumber(QString number) { this->number = number; }
    void setLetter(QString letter) { this->letter = letter; }
    void setId(int id) { this->id = id; }

    QString getNumber() { return number; }
    QString getLetter() { return letter; }
    int getId() { return id; }
};

#endif // CLASSCLASS_H
