#include "logregdialog.h"
#include "ui_logregdialog.h"


LogRegDialog::LogRegDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogRegDialog)
{
    ui->setupUi(this);
}

LogRegDialog::~LogRegDialog()
{
    delete ui;
}

void LogRegDialog::on_pushButtonRegister_clicked()
{
    //OBSŁUGA REJESTRACJI?
    this->destroy();
}
