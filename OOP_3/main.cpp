#pragma once
#include <iostream>
#include "Figure.h"
#include "Car.h"
#include "Fraction.h"
#include "Card.h"
using namespace std;

void test1();
void test2();
void test3();

int main() {
    test1();
    test2();
    test3();
    return 0;
}

void test1(){
    cout << "TEST1" << endl;
    Circle A(5);
    cout << "Circle with rad=5: " << A.area() << endl;
    Parallelogram B(1,2,1);
    cout << "Parallelogram with x=1,y=2,angle=1: " << B.area() << endl;
    Rectangle C(1,4);
    cout << "Rectangle with x=1,y=4: " << C.area() << endl;
    Square D(4);
    cout << "Square with x=4: " << D.area() << endl;
    Rhombus E(4,1);
    cout << "Rhombus with x=4, angle = 1: " << E.area() << endl;
    cout << endl << "-------" << endl << endl;
}

void test2(){
    cout << "TEST2" << endl;
    cout << "1)PassengerCar: " << endl;
    PassengerCar A("Lada", "Vesta");
    cout << "2)Bus: "<< endl;
    Bus B("Audi", "Q6");
    cout << "3)Minivan: " << endl;
    Minivan C ("Chevrolet", "Lanos");
    cout << "4)Car: " << endl;
    Car D ("Renault", "Logan");
    cout << endl << "-------" << endl << endl;
}

void test3(){
    cout << "TEST3" << endl;
    cout << "Math operators: " << endl;
    Fraction A(2,3);
    Fraction B(6,7);
    Fraction C = -A * A + B / A - A;
    cout << " - ";A.PrintFraction();cout << " * ";A.PrintFraction();cout<<" + ";B.PrintFraction();
    cout<<" / ";A.PrintFraction();cout << " - "; A.PrintFraction(); cout << " = ";
    C.PrintFraction();
    cout << endl << "xxxxxxx" << endl;

    cout << "Compare operators: " << endl;
    Fraction D(4,6);
    cout << "A = "; A.PrintFraction(); cout << ".   D = "; D.PrintFraction();
    cout << ".  B="; B.PrintFraction();cout << endl;
    cout << "A==D?: ";
    if(A==D) cout << "YES" << endl;
    else cout << "NO" << endl;
    cout << "A!=B?: ";
    if(A!=B) cout << "YES" << endl;
    else cout << "NO" << endl;
    cout << "A>B?: ";
    if(A>B) cout << "YES" << endl;
    else cout << "NO" << endl;
    cout << "D<B?: ";
    if(D<B) cout << "YES" << endl;
    else cout << "NO" << endl;
    cout << "A>=D?: ";
    if(A>=D) cout << "YES" << endl;
    else cout << "NO" << endl;
    cout << "B<=D?: ";
    if(B<=D) cout << "YES" << endl;
    else cout << "NO" << endl;
    cout << endl << "-------" << endl << endl;
}
