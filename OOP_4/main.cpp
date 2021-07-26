#pragma once
#include <iostream>
#include "ArrayInt.h"
//#include "Hand.h"
#include <vector>
#include <algorithm>

using namespace std;

void test1();
void test2();
int diffs(vector <int> Mass);

int main() {
    test1();
    test2();
    return 0;
}

void test1(){
    cout << endl << "TEST1" << endl;
    ArrayInt A(10);
    for(int i=0; i<10;++i)  A[i]=10-i;
    A.Print();
    cout << "->";
    A.pop_back();
    A.pop_front();
    A.sort();
    A.Print();
    cout << endl << "------" << endl;
}

void test2(){
    cout << endl << "TEST2" << endl;
    vector <int> arr = {5,2,3,4,4,6,1,3};
    for (int i=0; i< arr.size(); i++)   cout << arr[i];
    cout << "  --> " << diffs(arr);
    cout << endl << "------" << endl;
}
int diffs(vector <int> Mass){
    int res =1;
    int tmp = 0;
    int sz = Mass.size();
    if (sz == 0) return 0;
    if (sz == 1) return 1;
    sort(Mass.begin(), Mass.end());
    tmp = Mass[0];
    for(int i=1; i< sz; ++i){
        if (tmp < Mass[i]){
            res++;
            tmp = Mass[i];
        }
    }
    return res;
}

