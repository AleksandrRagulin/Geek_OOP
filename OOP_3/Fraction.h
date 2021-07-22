#include <string>
#include <iostream>
using namespace std;

class Fraction{
    int num;
    int denum;
public:
    Fraction(int a, int b){
        if (b==0)   cout << "Unreal create! Denum is null";
        else {
            num = a;
            denum = b;
        }
    }
    void divide();
    void PrintFraction();
    int GetNum() const {return num;}
    int GetDenum() const {return denum;}
    Fraction operator - () const {return Fraction(-num,denum);}

    friend bool operator==(const Fraction &x1, const Fraction &x2);
    friend bool operator!=(const Fraction &x1, const Fraction &x2);
    friend bool operator>(const Fraction &x1, const Fraction &x2);
    friend bool operator<(const Fraction &x1, const Fraction &x2);
    friend bool operator>=(const Fraction &x1, const Fraction &x2);
    friend bool operator<=(const Fraction &x1, const Fraction &x2);
};

Fraction operator+(const Fraction &x1, const Fraction &x2);
Fraction operator-(const Fraction &x1, const Fraction &x2);
Fraction operator*(const Fraction &x1, const Fraction &x2);
Fraction operator/(const Fraction &x1, const Fraction &x2);
