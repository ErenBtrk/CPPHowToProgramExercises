#include "Building.h"
#include <iostream>

using namespace std;

//constructor for Building object
Building::Building(const double square)
{
    squareFeet = square;
}

//override getCarbonFootprint virtual function
void Building::getCarbonFootprint() const
{

    std::cout << "Building with "<< squareFeet << " square feet:" << std::endl << squareFeet * 134 << std::endl;;
}
