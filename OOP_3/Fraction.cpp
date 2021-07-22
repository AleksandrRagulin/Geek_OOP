#include "Fraction.h"

void Fraction::PrintFraction() {
    divide();
    cout << num << "/" << denum;
}

void Fraction::divide() {
    if(num%denum==0){
        num/=denum;
        denum=1;
    }
    else{
        for(int i=2; i< denum/2;++i){
            if(num%i==0 && denum%i==0){
                num/=i;
                denum/=i;
            }
        }
    }
}

Fraction operator+(const Fraction &x1, const Fraction &x2){
    int L = x1.GetDenum()*x2.GetDenum();
    int H = x1.GetNum()*x2.GetDenum() + x1.GetDenum()*x2.GetNum();
    Fraction A(H,L);
    A.divide();
    return A;
}

Fraction operator-(const Fraction &x1, const Fraction &x2){
    int L = x1.GetDenum()*x2.GetDenum();
    int H = x1.GetNum()*x2.GetDenum() - x1.GetDenum()*x2.GetNum();
    Fraction A(H,L);
    A.divide();
    return A;
}

Fraction operator*(const Fraction &x1, const Fraction &x2){
    Fraction A(x1.GetNum()*x2.GetNum(),x1.GetDenum()*x2.GetDenum());
    A.divide();
    return A;
}

Fraction operator/(const Fraction &x1, const Fraction &x2){
    Fraction A(x1.GetNum()*x2.GetDenum(),x1.GetDenum()*x2.GetNum());
    A.divide();
    return A;
}

bool operator == (const Fraction &x1, const Fraction &x2){
    Fraction R = x1/x2;
    return R.GetNum() == R.GetDenum();
}

bool operator != (const Fraction &x1, const Fraction &x2){
    return !(x1==x2);
}

bool operator > (const Fraction &x1, const Fraction &x2){
    return x1.GetNum()*x2.GetDenum() > x1.GetDenum()*x2.GetNum();
}

bool operator < (const Fraction &x1, const Fraction &x2){
    return !(x1>x2 || x1==x2);
}

bool operator >= (const Fraction &x1, const Fraction &x2){
    return !(x1<x2);
}

bool operator <= (const Fraction &x1, const Fraction &x2){
    return !(x1>x2);
}