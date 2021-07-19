#include <iostream>
#include "task1.h"
void Person::Name_Change(const char * NewName){
    Name = NewName;
}
void Person::Age_Change(int NewAge){
    Age = NewAge;
}
void Person::Weight_Change(int NewWeight){
    Weight = NewWeight;
}
void Person::PrintPerson() {
    std::cout << "Name: " << Name << std::endl;
    std::cout << "Age: " << Age << std::endl;
    std::cout << "Sex: " << Sex << std::endl;
    std::cout << "Weight: " << Weight << std::endl;
}


void Student::PrintStudent() {
    std::cout << "Name: " << Name << std::endl;
    std::cout << "Age: " << Age << std::endl;
    std::cout << "Sex: " << Sex << std::endl;
    std::cout << "Weight: " << Weight << std::endl;
    std::cout << "Grade: " << Grade << std::endl;

}
void Student::Grade_Change(int NewGrade) {
    Grade = NewGrade;
}

void Student::Grade_Inc() {
    Grade++;
}