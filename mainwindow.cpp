#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("Приложение загружено");

    AuthorithationForm *auth = new AuthorithationForm();
    auth->exec();

    this->showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}
