#include <iostream>
#include "gasMileage.h"

using namespace std;

int main()
{
    GasMileage g1;

    while( g1.getMiles() != EOF ){
        g1.setMiles();
            if(g1.getMiles() == EOF){
                break;
            }
        g1.setGallon();
        g1.setTotalMiles();
        g1.setTotalGallons();

        cout << "MPG this trip : " << g1.getMilesPerGallon() << endl;
        cout << "Total miles : " << g1.getTotalMiles() << endl;
        cout << "Total gallons : " << g1.getTotalGallons() << endl;
        cout << "Total MPG : " << g1.getTotalMPG() << endl;
     }
}
