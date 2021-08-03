#pragma once
#include <iostream>
#include "Date.h"
#include <memory>
using namespace std;

void test1();
void test2();

int main() {
    test1();
    test2();
    return 0;
}

void test1(){
    cout << "TEST1" << endl;
    cout << "today" << endl;
    auto today = make_unique<Date>(3,8,2021);
    cout << "Get_Day:" << today->Get_Day() << ".Get_Month:" << today->Get_Month() << ".Get_Year:" << today->Get_Year();
    cout << endl << "<<*today\n";
    cout <<*today << endl;
    auto date = move(today);
    if (date == nullptr) cout << "Date is nullptr\n";
    else cout << "Date isn't nullptr\n";
    if (today == nullptr) cout << "Today is nullptr\n";
    else cout << "Today isn't nullptr\n";
    cout << "-----------------------------\n";
}

void test2(){
    cout << "TEST2" << endl;
    auto date1 = make_unique<Date>(3,8,2021);
    auto date2 = make_unique<Date>(2,7,2020);
    cout << "Compare.\nDate1: "<< *date1 << "Date2: " << *date2 <<"\nresult: ";
    cout << *Compare(date1.get(),date2.get());

    cout << "Exchange.\nDate1: "<< *date1 << "Date2: " << *date2 <<"\nExchanhing...: ";
    cout << "\nResult.\n";
    Exchange(date1.get(),date2.get());
    cout << "Date1: "<< *date1 << "Date2: " << *date2;
    cout << "\n-----------------------------\n";
}