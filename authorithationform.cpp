#include "authorithationform.h"
#include "ui_authorithationform.h"
#include <QDebug>

void AuthorithationForm::closeEvent(QCloseEvent *event)
{
    if(!succes)
        exit(0);
}

AuthorithationForm::AuthorithationForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AuthorithationForm)
{
    ui->setupUi(this);

    succes = false;

    AUTHORITHATION_FILE_NAME = QCoreApplication::applicationDirPath() + "/Data.dat";

    loadAuthorithationData();
}

AuthorithationForm::~AuthorithationForm()
{
    delete ui;
}

void AuthorithationForm::loadAuthorithationData()
{
    if(checkIfAutorithationFileExists())
    {
        QFile file(AUTHORITHATION_FILE_NAME);
        QTextStream reader(&file);
        qDebug() << file.fileName();

        if(file.open(QIODevice::ReadOnly))
        {
            reader >> login;
            reader >> password;

            ui->login_text->setText(login);
            ui->pass_text->setText(password);
            ui->checkBox->setChecked(true);

            file.close();
        }
    }
}

bool AuthorithationForm::checkIfCorrect()
{
    bool isCorrect = true;

    return isCorrect;
}

void AuthorithationForm::setLoginAndPass()
{
    login = ui->login_text->text();
    password = ui->pass_text->text();
}

void AuthorithationForm::writeDataInFile(bool isErease)
{
    QFile file(AUTHORITHATION_FILE_NAME);
    QTextStream writer(&file);

    if(isErease)
    {
        if(file.open(QIODevice::WriteOnly))
        {
            writer << login << endl;
            writer << password << endl;

            file.close();
        }
    }

    else
    {
        if (file.open(QIODevice::WriteOnly | QIODevice::Truncate))
          file.close();
    }
}

void AuthorithationForm::on_ok_button_clicked()
{
    setLoginAndPass();

    if(checkIfCorrect())
    {
        writeDataInFile(ui->checkBox->isChecked());

        succes = true;

        close();
    }

    else
    {
        QMessageBox msgb;
        msgb.setWindowTitle("Внимание!");
        msgb.setText("Неверный логин и(или) пароль");
        msgb.setInformativeText("Убедитесь, что все данные верны");
        msgb.setStandardButtons(QMessageBox::Ok);
        msgb.setIcon(QMessageBox::Icon(QMessageBox::Icon::Warning));
        msgb.setWindowIcon(windowIcon());

        msgb.exec();
    }
}