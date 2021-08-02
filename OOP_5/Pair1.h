#ifndef OOP_5_PAIR1_H
#define OOP_5_PAIR1_H

template<class T>
class Pair1{
private:
    T X;
    T Y;
public:
    Pair1(T x, T y): X(x), Y(y){}
    T first() const{
        return X;
    }
    T second() const {
        return Y;
    }
};


#endif //OOP_5_PAIR1_H
