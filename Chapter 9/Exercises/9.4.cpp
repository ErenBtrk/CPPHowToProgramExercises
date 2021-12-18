#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

class Time{
public:
    Time();
    void displayTime()const;
private:
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int second;


};

Time::Time() {
    time_t currentTime;
    currentTime= time(NULL);

    tm * tm_local = localtime(&currentTime);

    hour = tm_local->tm_hour;
    minute = tm_local->tm_min;
    second = tm_local->tm_sec;
    day = tm_local ->tm_mday;
    month = 1 + tm_local ->tm_mon;
    year = 1900 + (tm_local ->tm_year);
}

void Time::displayTime()const{
    cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0')<< minute << ":" << setw(2) << setfill('0')<< second << endl;
    cout << day << "/" << month << "/" << year << endl;
}

int main(){
    Time t;
    t.displayTime();






    return 0;
}
