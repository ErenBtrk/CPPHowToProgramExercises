#ifndef DATEANDTIME_H_INCLUDED
#define DATEANDTIME_H_INCLUDED
#include <iostream>

class DateAndTime{
public:
    DateAndTime(int h = 0 , int m = 0 , int s = 0 , int mo = 1 , int d = 1 , int y = 1900);
    void setTime( int, int, int ); // set hour, minute, second
    void setHour( int ); // set hour (after validation)
    void setMinute( int ); // set minute (after validation)
    void setSecond( int ); // set second (after validation)
    void setDay( int );
    void setMonth( int );
    void setYear( int );


    void tick();
    void nextDay();
    void display()const;

private:
    unsigned int hour; // 0 - 23 (24-hour clock format)
    unsigned int minute; // 0 - 59
    unsigned int second; // 0 - 59
    unsigned int month;
    unsigned int day;
    unsigned int year;
    static const size_t MONTHS_OF_YEAR = 12;
    static const size_t LEAP = 29;
    static const size_t NO_LEAP = 28;
    unsigned int  daysOfMonths[ MONTHS_OF_YEAR+1 ] = { 0,  31, NO_LEAP, 31, 30, 31, 30,
                                                                                                    31, 31, 30, 31, 30, 31};

    bool isLeapYear(unsigned int);
};

#endif // DATEANDTIME_H_INCLUDED
