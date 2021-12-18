#include <iostream>
#include "date.h"
#include <windows.h>

using namespace std;

int main()
{
    Date d(1,1,1988);
    int i = 0;
    while ( i < 100 ){
        d.print();
        d.nextDay();
        i++;
        Sleep(20);
    }
}
