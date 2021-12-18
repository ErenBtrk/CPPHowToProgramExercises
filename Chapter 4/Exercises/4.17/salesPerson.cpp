#include <iostream>
#include "salesPerson.h"

SalesPerson::SalesPerson(){};

void SalesPerson::setUnitsSold(int units){
    unitsSold = units;
}
int SalesPerson::getUnitsSold(){
    return unitsSold;
}
void SalesPerson::displayDetails(){
    std::cout << "Units sold = " << unitsSold << std::endl;
}

void findLargest(SalesPerson &s){
    int counter = 0;
    int number = 0;
    int largest = 0;
        while( counter < 10){
            std::cout << "Please enter number of units sold : " << std::endl;
            std::cin >> number;
            s.setUnitsSold(number);
            if( s.getUnitsSold() > largest){
                largest = s.getUnitsSold();
            }
            counter++;
        }
        std::cout << "Largest number of units sold : " << largest << std::endl;


}
