#include "Date.h"

int Date::Get_Year() const {
    return Year;
}

int Date::Get_Month() const {
    return Month;
}

int Date::Get_Day() const {
    return Day;
}

ostream& operator<< (ostream &out, const Date &date)
{
    out << "Date: " << date.Day << ". " << date.Month << ". " << date.Year << "\n";
    return out;
}



Date *Compare(Date *  date1, Date * date2){
    int x1 = date1->Get_Year();
    int x2 = date2->Get_Year();
    if(x1 > x2) return date1;
    if(x2 > x1) return date2;

    x1 = date1->Get_Month();
    x2 = date2->Get_Month();
    if(x1 > x2) return date1;
    if(x2 > x1) return date2;

    x1 = date1->Get_Day();
    x2 = date2->Get_Day();
    if(x1 > x2) return date1;
    if(x2 > x1) return date2;
    return date1;
}

void Exchange(Date *  date1, Date * date2){
    Date temp = *date1;
    *date1 = *date2;
    *date2 = temp;

}