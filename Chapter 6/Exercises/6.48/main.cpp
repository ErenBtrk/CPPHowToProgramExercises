#include <iostream>
#include "crapsGame.h"
#include <time.h>

using namespace std;





int main()
{
    srand(time(NULL));
    string choice;
    CrapsGame cg1;
        do{
            cg1.run();
        }
        while( cg1.getTurnNo() != -1 && cg1.getBankBalance() != 0.0 );



}

