#include <iostream>
#include "date.h"
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    /*
    Date d(10,2,1988);
    int i = 0;
    while ( i < 1000 ){
        d.print4();
        d.nextDay();
        i++;
        Sleep(20);
    }
    */
    char str[] ="June 21 1988";
    Date d2(str);
    d2.print();

    Date d3(15,07,1993);
    d3.print();

    Date d4( time(0) );
    d4.print();

    cout << time(nullptr) / 31556926 << endl;
    time_t timer;
    cout << time(&timer) / 31556926 << endl;




    return 0;
}
