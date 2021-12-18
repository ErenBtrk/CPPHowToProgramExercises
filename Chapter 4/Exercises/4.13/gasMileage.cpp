#include <iostream>
#include "gasMileage.h"


GasMileage::GasMileage(){
    totalMiles = 0.0;
    totalGallons = 0.0;
}
void GasMileage::setMiles(){
    miles = 0.0;
    std::cout << "Please enter miles driven (-1 to quit) : " << std::endl;
    std::cin >> miles;
}

void GasMileage::setGallon(){
    gallon = 0.0;
    std::cout << "Please enter gallons used : " << std::endl;
    std::cin >> gallon;
}
void  GasMileage::setTotalMiles(){
    totalMiles += miles;
}

void GasMileage::setTotalGallons(){
    totalGallons += gallon;
}

double GasMileage::getMiles()const{
    return miles;
}

double GasMileage::getGallon()const{
    return gallon;
}

double GasMileage::getTotalGallons()const{
    return totalGallons;
}

double GasMileage::getTotalMiles()const{
    return totalMiles;
}

double GasMileage::getMilesPerGallon()const{
    return miles/gallon;
}

double GasMileage::getTotalMPG()const{
    return totalMiles/totalGallons;
}
