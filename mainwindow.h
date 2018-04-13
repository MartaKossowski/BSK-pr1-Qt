#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "logregdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_inputFileButtonCipher_clicked();

    void on_outputFileButtonCipher_5_clicked();

    void on_inputFileButtonDecipher_clicked();

    void on_outputFileButtonDecipher_clicked();

    void on_radioButtonOFB_clicked();

    void on_radioButtonECB_clicked();

    void on_radioButtonCBC_clicked();

    void on_radioButtonCFB_clicked();

    void on_actionZako_cz_4_triggered();

    void on_actionO_aplikacji_2_triggered();

    void on_actionDodaj_uzytkownika_2_triggered();



private:
    Ui::MainWindow *ui;
    LogRegDialog * lrd; //OKNO REJESTRACJI

};

#endif // MAINWINDOW_H
