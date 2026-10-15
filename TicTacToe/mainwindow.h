#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QPushButton>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Case_1_1_released();
    void on_Case_1_2_released();
    void on_Case_1_3_released();
    void on_Case_2_1_released();
    void on_Case_2_2_released();
    void on_Case_2_3_released();
    void on_Case_3_1_released();
    void on_Case_3_2_released();
    void on_Case_3_3_released();

private:
    Ui::MainWindow *ui;
    QPushButton *Tableau[9];
    void joue(int n, QString coche);
    bool caseVide (int n);

};
#endif // MAINWINDOW_H
