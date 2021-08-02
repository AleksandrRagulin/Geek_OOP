#pragma once
#include <iostream>
#include <string>
using namespace std;
void test1();
ostream& endll(ostream& os)
{
    return os << "\n" << endl;
}

int main() {
    test1();
    cout << "AA" << endll << "AA";
    return 0;
}

void test1(){
    int a;
     cout << "Enter int: ";
     if (!(cin>>a)){
         cout << "Not integer!!!! Once more" << endl;
         cin.clear();
         cin.sync();
         test1();
     }
     else cout << "good" << endl;
}
