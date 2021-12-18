#include <iostream>
#include <iomanip>
#include "crapsGame.h"
#include <time.h>

using namespace std;





int main()
{
    srand(time(NULL));
    string choice;
    CrapsGame cg1;
            for(int i = 0 ; i < 1000 ; i ++){
                cg1.run();
            }
            cg1.displayDetails();




}


