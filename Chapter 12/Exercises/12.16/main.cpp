#include "CarbonFootprint.h"
#include "Bicycle.h"
#include "Building.h"
#include "Car.h"
#include <vector>

using namespace std;

int main() {
    vector < CarbonFootprint* > cf(3);
    cf[0] = new Building(2500);
    cf[1] = new Car(10);
    cf[2] = new Bicycle();

    for( CarbonFootprint * cfPtr : cf ){
        cfPtr->getCarbonFootprint();
    }


    // release elements of list
    for (size_t i = 0; i < cf.size(); ++i) {
        delete cf[i];
    }
}
