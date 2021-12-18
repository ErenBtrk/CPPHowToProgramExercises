#include <iostream>
#include <string>
#include "dateAndTime.h"

using namespace std;

int main()
{
    int counter = 0;
    DateAndTime dt(0,0,0,2,20,2000);
    while( true ){
        dt.display();
        dt.tick();
        counter++;
        if(counter == 86400){
            system("pause");
        }
    }
}
