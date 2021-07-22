#include <string>
#include <iostream>
using namespace std;
class Car{
protected:
    string company;
    string model;
public:
    Car(string com, string mod) : company(com), model(mod) {
        cout << "Car::company: " << company << ". Car::model: " << model << endl;
    }

    Car() { cout << "Car::company: " << company << ". Car::model: " << model << endl; };

    string GetCompany() const {return company;}
    string GetModel() const {return model;}
};

class PassengerCar : virtual public Car{
public:
    PassengerCar(string com,string mod) {
        company = com;
        model = mod;
        cout << "PassengerCar::company: " << company << ". PassengerCar::model: " << model << endl;
    }
    PassengerCar() {cout << "PassengerCar::company: " << company << ". PassengerCar::model: " << model << endl;}
};

class Bus : virtual public Car{
public:
    Bus(string com,string mod) {
        company = com;
        model = mod;
        cout << "Bus::company: " << company << ". Bus::model: " << model << endl;
    }
    Bus() {cout << "Bus::company: " << company << ". Bus::model: " << model << endl;}
};

class Minivan : public PassengerCar, public Bus{
public:
    Minivan(string com,string mod){
        company = com;
        model = mod;
        cout << "Minivan::company: " << company << ". Minivan::model: " << model << endl;
    }
    Minivan(){
        cout << "Minivan::company: " << company << ". Minivan::model: " << model << endl;
    }
};