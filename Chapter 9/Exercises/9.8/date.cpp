#include "date.h"

#include <iostream>

// date constructor (should do range checking)
Date::Date(int d, int m, int y) {
    if( d > 0 && d <= 31 ){
        day = d;
    }
    else{
        throw std::invalid_argument("Day must be 0-31");
    }
    if( m > 0 && m <= 12 ){
        month = m;
    }
    else{
        throw std::invalid_argument("Month must be 1-12");
    }
    if( y > 0 ){
        year = y;
        daysInMonth[2] = (isLeapYear(year) ? LEAP : NO_LEAP);
    }
    else{
        throw std::invalid_argument("Year must be a positive number");
    }


}


// print date in format mm/dd/yyyy
void Date::print() { std::cout << day << "/" << month << "/" << year << std::endl; }

bool Date::isLeapYear(int y){
    if( y % 400 == 0 || ( y % 4 == 0 && y % 100 != 0) ){
        return true;
    }
    else{
        return false;
    }
}

void Date::nextDay(){
    day++;
    if( day > daysInMonth[month] ){
        month++;
        day = 1;
    }
    if(month > MONTHS_IN_YEAR){
        year++;
        month = 1;
        daysInMonth[2] = ( isLeapYear(year) ? LEAP : NO_LEAP );
    }
}
