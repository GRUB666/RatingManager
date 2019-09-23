#ifndef AUTHORITHATIONFORM_H
#define AUTHORITHATIONFORM_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QCloseEvent>
#include <QMessageBox>

static QString AUTHORITHATION_FILE_NAME;
static QString login, password;

namespace Ui {
class AuthorithationForm;
}

class AuthorithationForm : public QDialog
{
    Q_OBJECT


private:
    bool succes;

protected:
    virtual void closeEvent(QCloseEvent *event);

public:
    explicit AuthorithationForm(QWidget *parent = nullptr);
    ~AuthorithationForm();

private slots:
    void on_ok_button_clicked();

private:
    Ui::AuthorithationForm *ui;

    bool checkIfAutorithationFileExists() { return QFile::exists(AUTHORITHATION_FILE_NAME); }
    void loadAuthorithationData();
    bool checkIfCorrect();
    void setLoginAndPass();
    void writeDataInFile(bool isErease);
};

#endif // AUTHORITHATIONFORM_H
