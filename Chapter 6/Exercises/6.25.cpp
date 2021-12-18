#include <iostream>
#include <math.h>

using namespace std;

int calculateSeconds(int,int,int);

int main(){
    int hours1 = 0,hours2 = 0;
    int minutes1 = 0,minutes2 = 0;
    int seconds1 = 0,seconds2 = 0;

        cout << "Please enter time (hours , minutes , seconds) : " << endl;
        cin >> hours1 >> minutes1 >> seconds1 ;

        cout << "Please enter another time (hours , minutes , seconds) : " << endl;
        cin >> hours2 >> minutes2 >> seconds2 ;

        cout << "The second difference between both times : "
                << fabs(calculateSeconds(hours1,minutes1,seconds1) - calculateSeconds(hours2,minutes2,seconds2)) << endl;





    return 0;
}

int calculateSeconds(int hours,int minutes,int seconds){
    if(hours > 12){
        hours -= 12;
    }
    return hours * 60 * 60 + minutes * 60 + seconds;
}
