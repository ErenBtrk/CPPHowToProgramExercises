#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <stdexcept>



class Date {
 public:
    Date(int = 1, int = 1, int = 2000);
    Date(char []);
    Date(time_t);

    void setCountDay();
    void print()const;
    void print2()const;
    void print3()const;
    void print4()const;
    void nextDay();
    unsigned int checkDay(int)const;

 private:
     static const size_t MONTHS_IN_YEAR = 12;
     static const size_t NO_LEAP = 28;
     static const size_t LEAP = 29;
    int daysInMonth[MONTHS_IN_YEAR + 1]={0,  31, NO_LEAP, 31, 30, 31, 30,
                                                                        31, 31, 30, 31, 30, 31};
    int month;
    int day;
    int year;
    int countDay;
    bool isLeapYear(int);
    const std::string monthNames[MONTHS_IN_YEAR + 1] = {"","January","February","March",
                                                                                               "April","May","June",
                                                                                            "July","August","September",
                                                                                            "October","November","December"};
};

#endif // DATE_H_INCLUDED
