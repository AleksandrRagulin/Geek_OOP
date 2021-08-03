#ifndef OOP_7_DATE_H
#define OOP_7_DATE_H
#include <iostream>
#include <memory>
using namespace std;
class Date{
private:
    int Day;
    int Month;
    int Year;
public:
    Date(int day = 1, int month = 1, int year = 2021): Day(day), Month(month), Year(year){}
    Date() = default;
    int Get_Day() const ;
    int Get_Month() const ;
    int Get_Year()const ;
    friend ostream& operator<< (ostream &out, const Date &date);

};
Date *Compare(Date *  date1, Date * date2);
void Exchange(Date *  date1, Date * date2);

#endif //OOP_7_DATE_H
