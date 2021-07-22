#include "Figure.h"

Rectangle::Rectangle(double x, double y) {
    X=x;
    Y=y;
}
double Parallelogram::area() {
    return X*Y*sin(Angle);
}

double Circle::area() {
    return Rad * Rad * 3.14;
}

double Rectangle::area() {
    return X*Y;
}

double Square::area() {
    return X*X;
}

double Rhombus::area() {
    return X*X*sin(Angle);
}
