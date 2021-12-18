#include "dateAndTime.h"
#include <stdexcept>
#include <iomanip>

DateAndTime::DateAndTime(int h,int m,int s,int mo,int d,int y){
    if( h >= 0 && h <= 24 ){
        setHour(h);
    }
    else{
        throw std::invalid_argument("Hour must be 0-24");
    }
    if( m >= 0 && m <=59){
        setMinute(m);
    }
    else{
        throw std::invalid_argument("Minute must be 0-59");
    }
    if( s >= 0 && s <= 59 ){
        setSecond(s);
    }
    else{
        throw std::invalid_argument("Second must be 0-59");
    }
    if( y > 0 ){

        setYear(y);
    }
    else{
        throw std::invalid_argument("Year must be a positive number");
    }
    if( mo > 0 && mo <= 12 ){
        setMonth(mo);
    }
    else{
        throw std::invalid_argument("Months must be 1-12");
    }
    daysOfMonths[2] = (isLeapYear(year) ? LEAP : NO_LEAP);
    if( d > 0 && d <= daysOfMonths[month] ){
        setDay(d);
    }
    else{
        throw std::invalid_argument("Days must be 0-31");
    }

}

void DateAndTime::setHour(int hour){
    this->hour = hour;
}

void DateAndTime::setMinute(int minute){
    this->minute = minute;
}

void DateAndTime::setSecond(int second){
    this->second = second;
}

void DateAndTime::setMonth(int month){
    this->month = month;
}

void DateAndTime::setDay(int day){
    this->day = day;
}

void DateAndTime::setYear(int year){
    this->year = year;
}


void DateAndTime::tick(){
    second++;
    if(second > 59){
        minute++;
        second = 0;
    }
    if(minute > 59){
        hour++;
        minute = 0;
    }
    if( hour >= 24 ){
        day++;
        hour = 0;
    }
    if( day > daysOfMonths[month] ){
        month++;
        day = 1;
    }
    if( month > MONTHS_OF_YEAR ){
        year++;
        month = 1;
        daysOfMonths[2] = (isLeapYear(year) ? LEAP : NO_LEAP);
    }

}

bool DateAndTime::isLeapYear(unsigned int y){
    if( y % 400 == 0 || ( y % 4 == 0 && y % 100 != 0) ){
        return true;
    }
    else{
        return false;
    }
}

void DateAndTime::display()const{
    std::cout << std::setfill( '0' ) << std::setw( 2 ) << hour << ":"
 << std::setw( 2 ) << minute << ":" << std::setw( 2 ) << second << "        ";
 std::cout << day << "/" << month << "/" << year << std::endl;
}

