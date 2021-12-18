#include "date.h"

#include <iostream>

// date constructor (should do range checking)
Date::Date(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}


// print date in format mm/dd/yyyy
void Date::print() { std::cout << month << "/" << day << "/" << year; }
