#ifndef KOCH_H
#define KOCH_H

#include <QGraphicsScene>
#include <cmath>
#include <iostream>
#include "turtle.h"

void koch(QTurtle* turtle, int n, double len) {
    if(n == 0) {
        turtle->forward(len);
        return;
    }
    koch(turtle, n-1, len/3);
    turtle->left(60);
    koch(turtle, n-1, len/3);
    turtle->left(-120);
    koch(turtle, n-1, len/3);
    turtle->left(60);
    koch(turtle, n-1, len/3);
}



#endif // MAINWINDOW_H
