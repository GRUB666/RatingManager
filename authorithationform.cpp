#include "authorithationform.h"
#include "ui_authorithationform.h"
#include <QDebug>


void AuthorithationForm::closeEvent(QCloseEvent *)
{
    //Закрывать приложение, если пароль не введён успешно
    if(!succes)
        exit(0);
}

AuthorithationForm::AuthorithationForm(int* id, QSqlDatabase* db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AuthorithationForm)
{
    ui->setupUi(this);

    this->id = id;
    this->db = db;

    *db = QSqlDatabase::addDatabase("QMYSQL");
    db->setHostName("127.0.0.1");
    db->setDatabaseName("rating");
    db->setUserName("root");
    db->setPassword("whiterabbit3_root");

    if(!db->open())
    {
        QMessageBox::warning(this, "Ошибка подключения к базе данных","Ошибка: " + db->lastError().text());
        exit(0);
    }

    else
    {

    }

    succes = false;

    AUTHORITHATION_FILE_NAME = QCoreApplication::applicationDirPath() + "/Data.dat";
    //Путь до файла с паролем

    loadAuthorithationData();
    //Загрузка данных из файла
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

        if(file.open(QIODevice::ReadOnly))
        {
            reader >> login;
            reader >> password;

            ui->login_text->setText(login);
            ui->pass_text->setText(password);
            ui->checkBox->setChecked(login != "" && password != ""); //Установка true, если пароль был уже сохранён

            file.close();
        }
    }
}

bool AuthorithationForm::checkIfCorrect()
{
    QString qs = "SELECT * FROM class WHERE password = '" + ui->pass_text->text() + "' AND login = \'" + ui->login_text->text() + "';";

    QSqlQuery query = QSqlQuery(*db);
    if(!query.exec(qs))
    {
        QMessageBox::warning(this, "Ошибка запроса", "Код: " + query.lastError().text());
        return false;
    }

    QSqlRecord rec = query.record();

    if(query.next())
        *id = query.value(rec.indexOf("id")).toInt();

    return query.size() != 0;
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

    //Запись логина и пароля, если чекбокс = true, их удаление в ином случае
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
