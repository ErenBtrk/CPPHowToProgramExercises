#include <iostream>
#include "salesPerson.h"

SalesPerson::SalesPerson(){}

void SalesPerson::setGrossSales(){
    std::cout << "Please enter sales in dollars ( or -1 to quit ) : " << std::endl;
    std::cin >> grossSales;
}

double SalesPerson::getGrossSales()const{
    return grossSales;
}

void SalesPerson::displayEarnings()const{
    std::cout << "Salary is : $" << 200.00 + (getGrossSales() * 0.09) << std::endl;
}

void SalesPerson::run(){
    while( getGrossSales() != EOF ){
        setGrossSales();
        if(getGrossSales() == EOF){
            break;
        }
        displayEarnings();
    }
}
