#pragma once
#include <iostream>
#include "task1.h"
#include "task2.h"
#include "BlackJack.h"

void test1();
void test2();

int main() {
    test1();
    test2();
    return 0;
}

void test1(){
    std:: cout << "test1\n";
    Person * Al = new Person("Alex",22,'M',82);
    Al->PrintPerson();
    Al->Age_Change(23);
    Al->Name_Change("Reynhard");
    Al->Weight_Change(85);
    Al->PrintPerson();
    Student *Mich = new Student(1);
    Mich->Name = "Mich";
    Mich->Age = 19;
    Mich->Weight = 88;
    Mich->Sex = 'M';
    Mich->PrintStudent();
    std::cout << std::endl;
}

void test2(){
    std::cout << "test2" << std::endl;
    Apple a("red");
    Banana b;
    GrannySmith c;
    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
    std::cout << std::endl;
}