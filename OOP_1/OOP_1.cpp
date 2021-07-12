#include <iostream>
#include <cmath>
#include <cstdint>

// task 1
class Power{
private:
    float X = 2;
    float Y = 4;
public:
    Power()= default;
    void set(float x,float y){
        X = x;
        Y = y;
    }
    void calculate(){
        std::cout << pow(X,Y) << std::endl;
    }
};

// task 2
class RGBA{
private:
    std::uint8_t m_red = 0 ;
    std::uint8_t m_green = 0;
    std::uint8_t m_blue = 0;
    std::uint8_t m_alpha = 255;
public:
    RGBA() = default;
    RGBA(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha){
        m_red = red;
        m_green = green;
        m_blue = blue;
        m_alpha  =alpha;
    }
    void print(){
        std::cout << "m_red =" << (int)m_red << " m_green =" << (int)m_green << " m_blue =" << (int)m_blue << " m_alpha =" << (int)m_alpha;
    }
};

// task 3
class Stack{
private:
    int array[10];
    int length = 0;
public:
    Stack() = default;
    void reset(){
        for(int i=0;i<length;i++) array[i]=0;
        length = 0;
    }
    bool push(int x){
        if (length == 10) return false;
        array[length++] = x;
        return true;
    }
    void print(){
        std:: cout << "( ";
        for(int i=0;i<length;++i){
            std::cout << array[i] << " ";
        }
        std::cout << ") "<< std::endl;
    }
    void pop()
    {
        if (length==0) std:: cout << "WARNING!" << std::endl;
        else array[length--] = 0;
    }
};
int main() {
    // test 1
    /*Power A;
    A.calculate();
    A.set(3,3);
    A.calculate();*/
    // test 2
    /*RGBA A;
    A.print();*/
    // test 3
    /*Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();*/

    return 0;
}
