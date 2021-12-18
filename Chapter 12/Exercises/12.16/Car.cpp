#include "Car.h"
#include <iostream>

using namespace std;

//constructor for a Car object
Car::Car(const double carGallons)
{
    gallonsOfGas = carGallons;
}

//override CarbonFootprint’s virtual function
void Car::getCarbonFootprint() const
{
    double myCarbonFootprint = gallonsOfGas * 20;
    std::cout << "Car that has used " << gallonsOfGas << " gallons of gas" << std::endl << myCarbonFootprint << std::endl;
}
