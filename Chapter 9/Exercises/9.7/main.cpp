#include <iostream>
#include "time.h"
#include <windows.h>
using namespace std;

int main()
{
    int i = 0;
    Time t(23,59,58);
    while( i < 1000 ){
        t.printStandard();
        t.printUniversal();
        t.tick();
        i++;
        Sleep(10);

    }
}
