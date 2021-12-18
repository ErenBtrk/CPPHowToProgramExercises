#include "date.h"

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdexcept>

// date constructor (should do range checking)
Date::Date(int d, int m, int y):countDay(0) {

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
    setCountDay();

}

Date::Date(char str[]){
    std::string temp = str;
    const char* delp = nullptr;


    if( temp.find(' ') != std::string::npos && count(temp.begin(),temp.end(),' ') == 1 ){

        delp = strtok(str," ");
        int total = 0;
        total = atoi(delp);
        delp = strtok(nullptr," ");
        year = atoi(delp);

        int monthCounter = 1;
            while ( total > daysInMonth[monthCounter] ){
                total -= daysInMonth[monthCounter];
                monthCounter++;

            }
            month = monthCounter;
            day = total ;

    }

    if( ( temp.find('/') != std::string::npos && count(temp.begin(),temp.end(),'/') == 2 ) ||
        ( temp.find('.') != std::string::npos && count(temp.begin(),temp.end(),'.') == 2 ) ||
        ( temp.find(' ') != std::string::npos && count(temp.begin(),temp.end(),' ') == 2 )){
        delp = strtok(str," /.");
        bool flag = false;
        for( size_t i = 1 ; i < MONTHS_IN_YEAR ; i++ ){
            if( delp == monthNames[i] ){
                flag = true;
                month = i;
                break;
            }
        }
        if( !flag ){
            day = atoi(delp);
            delp = strtok(nullptr," /.");
            month = atoi(delp);
            delp = strtok(nullptr," /.");
            year = atoi(delp);
        }
        else{
            delp = strtok(nullptr," /.");
            day = atoi(delp);
            delp = strtok(nullptr," /.");
            year = atoi(delp);
        }
    }
}

Date::Date(time_t time ):month(0),day(0),year(0){
    struct tm strTm;
    errno_t en = ::localtime_s(&strTm,&time);
    if( en == EINVAL ){
        throw("Invalid ctime input");
    }
    day = strTm.tm_mday;
    month = strTm.tm_mon+1;
    year = strTm.tm_year+1900;

    if (month > 0 && month <= static_cast <int>(MONTHS_IN_YEAR) ) // validate the month
		month = month;
	else
		throw std::invalid_argument("month must be 1-12");

	day = checkDay(day); // validate the day

	// output Date object to show when its constructor is called
	std::cout << "Date object constructor for date ";
	print();
	std::cout << std::endl;

}
void Date::setCountDay(){
    for( size_t i = 1 ; i < static_cast <size_t> (month) ; i++){
        countDay += daysInMonth[i];
    }
    countDay += day;
}


// print date in format mm/dd/yyyy
void Date::print()const { std::cout << day << "/" << month << "/" << year << std::endl; }
void Date::print2()const { std::cout << std::setw(3) << std::setfill('0') << countDay << "/" << year << std::endl; }
void Date::print3()const { std:: cout << std::setw(2) << std::setfill('0') << month << "/" <<
                                         std::setw(2) << std::setfill('0') << day << "/" << year << std::endl; }
void Date::print4()const { std::cout << monthNames[month] << " " << day << "," << year << std::endl; }

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
    countDay++;
    if( isLeapYear(year) ){
        if( countDay > 366){
            countDay = 1;
        }
    }
    else{
        if( countDay > 365){
            countDay = 1;
        }
    }
    if( day > daysInMonth[month] ){
        month++;
        day = 1;
    }
    if(month > static_cast < int > (MONTHS_IN_YEAR) ) {
        year++;
        month = 1;
        daysInMonth[2] = ( isLeapYear(year) ? LEAP : NO_LEAP );
    }
}

unsigned int Date::checkDay( int testDay ) const
{
   // determine whether testDay is valid for specified month
   if ( testDay > 0 && testDay <= daysInMonth[month] )
      return testDay;

   // February 29 check for leap year
   if ( month == 2 && testDay == 29 && ( year % 400 == 0 ||
      ( year % 4 == 0 && year % 100 != 0 ) ) )
      return testDay;

   throw std::invalid_argument( "Invalid day for current month and year" );
}
