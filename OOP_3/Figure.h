#include <cmath>
class Figure{
public:
    virtual double area() =0 ;
};

class Parallelogram : public Figure{
protected:
    double X=0,Y=0,Angle=0;
public:
    Parallelogram() = default;
    Parallelogram(double x,double y,double angle) : X(x),Y(y), Angle(angle) {}
    double area();
    double GetX () const {return X;}
    double GetY () const {return Y;}
    double GetA () const {return Angle;}
};

class Circle : public Figure{
    double Rad;
public:
    Circle(double r) : Rad(r){}
    double area();
};

class Rectangle : public Parallelogram{
public:
    double area();
    Rectangle(double x,double y);
};

class Square : public Parallelogram{
public:
    double area();
    Square(double x){
        X=x;
    }
};

class Rhombus : public Parallelogram{
public:
    double area();
    Rhombus(double x, double an){
        X=x;
        Angle = an;
    }
};