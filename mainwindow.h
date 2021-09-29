#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Drawing();

private slots:
void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    int number = 0;

};
#endif // MAINWINDOW_H
