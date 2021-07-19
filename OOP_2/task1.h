
class Person{
public:
    const char * Name;
    int Age;
    char Sex;
    int Weight;
    int Students{};
    Person(const char * name, int age, char sex, int weight): Name(name),Age(age),Sex(sex),Weight(weight){};
    Person(){};
    void Name_Change(const char * NewName);
    void Age_Change(int NewAge);
    void Weight_Change(int NewWeight);
    void PrintPerson();
};

class Student: public Person{
public:
    Student(int grade):Grade(grade){};
    int Grade;
    Student(){};
    void Grade_Change(int NewGrade);
    void Grade_Inc();
    void PrintStudent();
};