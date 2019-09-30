#include "documentation.h"
#include "ui_documentation.h"

Documentation::Documentation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Documentation)
{
    ui->setupUi(this);
}

Documentation::~Documentation()
{
    delete ui;
}
