#pragma once
#include <iostream>
#include <string>
#include "Pair1.h"
#include "Pair.h"
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
    Pair1<int> p1(6, 9);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair1<double> p2(3.4, 7.8);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
}

void test2(){
    Pair<int, double> p1(6, 7.8);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
    const Pair<double, int> p2(3.4, 5);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
}

void test3(){
    StringValuePair<int> svp("Amazing", 7);
    cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
}