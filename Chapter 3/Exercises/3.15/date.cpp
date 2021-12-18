#include <iostream>
#include <string>
#include "date.h"

Date::Date(int m,int d,int y){
    setMonth(m);
    setDay(d);
    setYear(y);
}

void Date::setMonth(int m){
    if(m < 0 || m > 12){
        month = 1;
    }
    else{
        month = m;
    }
}

void Date::setDay(int d){
    day = d;
}
void Date::setYear(int y){
    year = y;
}

int Date::getMonth() const{
    return month;
}

int Date::getDay() const{
    return day;
}

int Date::getYear() const{
    return year;
}

void Date::displayDate() const{
    std::cout << "The date is = " << day << '/' << month << '/' << year << std::endl << std::endl;
}
