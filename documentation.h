#ifndef DOCUMENTATION_H
#define DOCUMENTATION_H

#include <QDialog>

namespace Ui {
class Documentation;
}

class Documentation : public QDialog
{
    Q_OBJECT

public:
    explicit Documentation(QWidget *parent = nullptr);
    ~Documentation();

private:
    Ui::Documentation *ui;
};

#endif // DOCUMENTATION_H
