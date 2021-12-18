#include <iostream>
#include <iomanip>
#include "Salary.h"

Salary::Salary():payCode(0),payAmount(0.0){}

void Salary::setPayCode(){
    int flag = 0;
    std::cout << "Please enter worker's paycode (-1 to quit) : " << std::endl;
    std::cin >> payCode ;
    switch(payCode){
        case 1: case 2: case 3: case 4:
            flag = 1;
            break;
        case -1:
            flag = 1;
            break;
        default:
            flag = 0;
            break;
    }
    if(flag == 0){
        while (payCode != 1 && payCode != 2 && payCode != 3 && payCode != 4){
            std::cout << "Please enter worker's paycode again( 1-2-3-4 ) : " << std::endl;
            std::cin >> payCode ;
        }
    }

}

void Salary::setPayType(){
    switch(payCode){
        case 1:
            payType = "Manager";
            break;
        case 2:
            payType = "Hourly Worker";
            break;
        case 3:
            payType = "Commission Worker" ;
            break;
        case 4:
            payType = "Piece Worker" ;
            break;
    }
}

void Salary::setPayAmount(){
    int hours = 0;
    double hourlyWage = 0.0;
    double sales = 0.0 ;
    int itemsProduced = 0;
    switch(payCode){
        case 1:
            payAmount = 5000.0;
        break;
        case 2:
            std::cout << "Please enter hours worked : " << std::endl;
            std::cin >> hours ;
            std::cout << "Please enter hourly wage : " << std::endl;
            std::cin >> hourlyWage;
            if(hours <= 40){
                payAmount = 40 * hourlyWage;
            }
            else{
                payAmount = 40 * hourlyWage + (hours - 40) * hourlyWage * 1.5;
            }
        break;
        case 3:
            std::cout << "Please enter gross weekly sales : " << std::endl;
            std::cin >> sales;
            payAmount = 250.0 + sales * 5.7 / 100 ;
        break;
        case 4:
            std::cout << "Please enter the amount of items produced : " << std::endl;
            std::cin >> itemsProduced ;
            payAmount = 3.0 * itemsProduced ;
        break;

    }
}

int Salary::getPayCode()const{
    return payCode;
}

std::string Salary::getPayType()const{
    return payType;
}

int Salary::getPayAmount()const{
    return payAmount;
}

void Salary::displayDetails()const{
    std::cout << std::setw(10) << "Pay Code" << std::setw(20) << "Pay Type" <<
                  std::setw(13) << "Pay Amount" << std::endl;
    std::cout << std::setw(10) << payCode << std::setw(20) << payType <<
                  std::setw(13) << payAmount << "$" << std::endl;

}

void Salary::run(){
    while ( getPayCode() != EOF ){
        setPayCode();
        if(getPayCode() == EOF){
            std::cout << "Exited successfully ... " << std::endl;
            break;
        }
        setPayType();
        setPayAmount();
        displayDetails();
    }
}
