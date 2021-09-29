#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "turtle.h"
#include "koch.h"

#include <QInputDialog>
#include <QGraphicsScene>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    Drawing();
}

void MainWindow::Drawing() {
    scene->clear();
    auto turtle = new QTurtle(scene);
    turtle->left(-60);
    for (int i = 0; i < 3; ++i) {
        koch(turtle,number,400);
        turtle->left(-120);
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked() {
    /*bool ok;
    int number = QInputDialog::getInt(this, tr("QInputDialog::getInt()"),
                                   tr("чиселка:"),
                                   0, 0, 1000000000, 1, &ok);
    if (!ok) return;*/
    number++;
    Drawing();


}

