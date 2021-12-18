#include <iostream>
#include "multiplication.h"
#include <time.h>
#include <stdlib.h>

using namespace std;



int main()
{
    srand(time(NULL));
    Multiplication m1;
    for(int i = 0 ; i< 10 ; i++){
        m1.run();
    }

}
