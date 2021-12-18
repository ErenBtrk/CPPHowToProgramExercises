#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include <stdexcept>

class Time {
 private:
    int hour;
    int minute;
    int second;

 public:
    Time(int = 0, int = 0, int = 0);
    ;

    void setTime(int, int, int);
    int &badSetHour(int);  // dangerous reference return

    int getHour();
};

#endif // TIME_H_INCLUDED
