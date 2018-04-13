#ifndef LOGREGDIALOG_H
#define LOGREGDIALOG_H

#include <QDialog>

namespace Ui {
class LogRegDialog;
}

class LogRegDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LogRegDialog(QWidget *parent = 0);
    ~LogRegDialog();

private slots:

    void on_pushButtonRegister_clicked();

private:
    Ui::LogRegDialog *ui;
};

#endif // LOGREGDIALOG_H
