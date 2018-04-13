#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBarCipher->setValue(0);
    ui->progressBarDecipher->setValue(0);
    ui->progressBarCipher->setVisible(false);
    ui->progressBarDecipher->setVisible(false);
    ui->subblockLength->setValidator(new QIntValidator(this));
    ui->subblockLength->setReadOnly(true);

    for (int i=0; i< 10; i++){
        ui->listWidgetUsers->addItem("example user " + QString::number(i));
    }
    ui->listWidgetUsers->setSelectionMode(QAbstractItemView::MultiSelection);

    for (int i=0; i< 10; i++){
        ui->listWidgetUsers2->addItem("example user " + QString::number(i));
    }
    //ui->listWidgetUsers2->setSelectionMode(QAbstractItemView::MultiSelection);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_inputFileButtonCipher_clicked()
{
    QString inputFile = QFileDialog::getOpenFileName(
                this,
                tr("Wybierz plik do zaszyfrowania"),
                "C://",
                ""
                );

    if (inputFile.count())
        ui->inputFileNameCipher->setText(inputFile);
}

void MainWindow::on_outputFileButtonCipher_5_clicked()
{
    QString inputFile = QFileDialog::getSaveFileName(
                this,
                tr("Wybierz nazwę zaszyfrowanego pliku"),
                "C://",
                ""
                );
    if (inputFile.count())
        ui->outputFileNameCipher->setText(inputFile);
}

void MainWindow::on_inputFileButtonDecipher_clicked()
{
    QString inputFile = QFileDialog::getOpenFileName(
                this,
                tr("Wybierz plik do deszyfracji"),
                "C://",
                ""
                );
    if (inputFile.count())
        ui->inputFileNameDecipher->setText(inputFile);
}

void MainWindow::on_outputFileButtonDecipher_clicked()
{
    QString inputFile = QFileDialog::getSaveFileName(
                this,
                tr("Wybierz nową nazwę rozszyfrowywanego pliku"),
                "C://",
                ""
                );
    if (inputFile.count())
        ui->outputFileNameDecipher->setText(inputFile);
}

void MainWindow::on_actionDodaj_uzytkownika_2_triggered()
{
    lrd = new LogRegDialog(this);
    lrd->show();

}

void MainWindow::on_radioButtonOFB_clicked()
{
    ui->subblockLength->setReadOnly(false);
}

void MainWindow::on_radioButtonECB_clicked()
{
    ui->subblockLength->setReadOnly(true);
}

void MainWindow::on_radioButtonCBC_clicked()
{
    ui->subblockLength->setReadOnly(true);
}

void MainWindow::on_radioButtonCFB_clicked()
{
    ui->subblockLength->setReadOnly(false);
}

void MainWindow::on_actionZako_cz_4_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionO_aplikacji_2_triggered()
{
    QMessageBox::information(this, tr("O aplikacji..."), "Autorzy: Marta Kossowski, Paweł Andrzejewski\n\nBSK 2018");
}
