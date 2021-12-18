#pragma once

class Time {
 private:
    int hour;    // 0-23 (24-hour format)
    int minute;  // 0-59
    int second;  // 0-59

 public:
    Time();

    void setTime(int, int, int);  // set hour minute second
    void printUniversal();        // print time in universal time format
    void printStandard();         // print time in standard time format
};
