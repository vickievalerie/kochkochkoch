#ifndef TURTLE_H
#define TURTLE_H

#include <QGraphicsScene>
#include <cmath>
#include <iostream>

class QTurtle {
  public:

    QTurtle(QGraphicsScene* scene);
    void forward(double len);
    void left(int angle);

  private:
    double x_;
    double y_;
    int angle_;
    QGraphicsScene* scene_;
};


#endif // MAINWINDOW_H
