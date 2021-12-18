#include <iostream>
#include "date.h"

using namespace std;

int main()
{
    Date d1(7,15,1993);
    d1.displayDate();

    Date d2(12,24,2020);
    d2.displayDate();

    Date d3(55,15,1515);
    d3.displayDate();
}
