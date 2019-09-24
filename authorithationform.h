#ifndef AUTHORITHATIONFORM_H
#define AUTHORITHATIONFORM_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QCloseEvent>
#include <QMessageBox>

static QString AUTHORITHATION_FILE_NAME;
static QString login, password, id; //Глобальные переменные логина, пароля и пути к ним. Плюс id, чтобы два раза не искать одну и ту же запись

namespace Ui {
class AuthorithationForm;
}

class AuthorithationForm : public QDialog
{
    Q_OBJECT

private:
    bool succes; //Переменная успешности ввода пароля

protected:
    virtual void closeEvent(QCloseEvent *event); //Обработка события закрытия окна

public:
    explicit AuthorithationForm(QWidget *parent = nullptr);
    ~AuthorithationForm();

private slots:
    void on_ok_button_clicked(); //Нажатие кнопки "Войти"

private:
    Ui::AuthorithationForm *ui;

    bool checkIfAutorithationFileExists() { return QFile::exists(AUTHORITHATION_FILE_NAME); } //Проверка существования файла
    void loadAuthorithationData(); //Загрузка данных из файла пароля и логина
    bool checkIfCorrect(); //Проверка данных на корректность (не сделана связь с бд)
    void setLoginAndPass(); //Изменение переменных login и pass
    void writeDataInFile(bool isErease); //Запись пароля и логина в файл
};

#endif // AUTHORITHATIONFORM_H
