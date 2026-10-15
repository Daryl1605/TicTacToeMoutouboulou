#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Tableau[1]=ui->Case_1_1;
    Tableau[2]=ui->Case_1_2;
    Tableau[3]=ui->Case_1_3;
    Tableau[4]=ui->Case_2_1;
    Tableau[5]=ui->Case_2_2;
    Tableau[6]=ui->Case_2_3;
    Tableau[7]=ui->Case_3_1;
    Tableau[8]=ui->Case_3_2;
    Tableau[9]=ui->Case_3_3;

}

MainWindow::~MainWindow()
{

        delete ui;
}

bool MainWindow::caseVide(int n){
    if(Tableau[n]->text() !=""){
        return false;
    }else {
        return true;}
}
void MainWindow::joue(int n, QString coche) {
    Tableau[n]->setText(coche);
}
//action sur les boutons
void MainWindow::on_Case_1_1_released()

{
    joue(1,"X");

}
void MainWindow::on_Case_1_2_released()

{
    joue(2,"O");

}
void MainWindow::on_Case_1_3_released()

{
    joue(3,"X");

}
void MainWindow::on_Case_2_1_released()

{
    joue(4,"0");

}
void MainWindow::on_Case_2_2_released()

{
    joue(5,"X");

}
void MainWindow::on_Case_2_3_released()

{
    joue(6,"0");

}
void MainWindow::on_Case_3_1_released()

{
    joue(7,"X");

}
void MainWindow::on_Case_3_2_released()

{
    joue(8,"O");

}void MainWindow::on_Case_3_3_released()

{
    joue(9,"X");

}


