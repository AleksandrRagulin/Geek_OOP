#ifndef OOP_5_PAIR_H
#define OOP_5_PAIR_H
#include <string>

using namespace std;

template<class T1,class T2>
class Pair{
private:
    T1 X;
    T2 Y;
public:
    Pair(T1 x, T2 y): X(x), Y(y){}
    T1 first() const{
        return X;
    }
    T2 second() const {
        return Y;
    }
};

template<class T>
class StringValuePair: public Pair<string ,T>{
public:
    StringValuePair(string x, T y):Pair<string,T>(x,y){}
};

#endif //OOP_5_PAIR_H
