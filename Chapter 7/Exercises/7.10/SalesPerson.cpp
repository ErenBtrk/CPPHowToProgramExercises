#include <iostream>
#include "SalesPerson.h"

SalesPerson::SalesPerson():salary(0),grossSale(0){
    rangeFrequency = {0};
}

void SalesPerson::setGrossSale(){
    std::cout << "Enter weekly gross sale (-1 to quit) :" << std::endl;
    std::cin >> grossSale;
}

void SalesPerson::setSalary(){
    salary = 200 + int(grossSale * 0.09) ;

}

void SalesPerson::rangeDetails(){
    if( salary / 100 > 10 ){
        ++rangeFrequency[10];
    }
    else{
        ++rangeFrequency[  ( salary / 100 ) ];
    }

}

void SalesPerson::displayRange()const{
    for( size_t i = 2 ; i < 11 ; i++){
        std::cout << i*100 << "$ - " << (i+1)*100 - 1 << "$ range = " <<  rangeFrequency[i] << std::endl ;
    }
}

void SalesPerson::run(){

        while( grossSale != EOF ){
            setGrossSale();
            if(grossSale == EOF){
                break;
            }
            setSalary();
            rangeDetails();
        }
        displayRange();

}
