#include <iostream>

using namespace std;

class Time{
public:
    Time();
    Time(int h  , int m  , int s  ); // cant overload constructor  -- Time(int h = 0 , int m = 0,int s = 0) --

private:
    int hour;
    int minute;
    int second;

};

Time::Time(){}

Time::Time(int h,int m,int s){
    hour = h;
    minute = m;
    second = s;
}


int main(){
    Time t1;
    Time t2(10,5,24);







    return 0;
}
