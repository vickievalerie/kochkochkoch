#include <QGraphicsScene>
#include <cmath>
#include "turtle.h"

QTurtle::QTurtle(QGraphicsScene* scene) {
    scene_ = scene;
    x_ = 0;
    y_ = 0;
    angle_ = 0;
}

void QTurtle::forward(double len) {
    double a = angle_* M_PI / 180.0;
    double new_x = x_ + len*cos(a);
    double new_y = y_ + len*sin(a);

    scene_->addLine(x_,y_, new_x, new_y);
    x_ = new_x;
    y_ = new_y;
}

void QTurtle::left(int angle) {
    angle_ -= angle;
}



