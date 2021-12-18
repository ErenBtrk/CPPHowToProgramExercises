#include "savingsAccount.h"
#include <iostream>

double SavingsAccount::annualInterestRate = 0.0;

SavingsAccount::SavingsAccount():savingsBalance(0.0){}

SavingsAccount::SavingsAccount(double sb){
    savingsBalance = sb;
}

void SavingsAccount::calculateMonthlyInterest(){
    savingsBalance += ( savingsBalance * annualInterestRate ) / 12;
}

void SavingsAccount::modifyInterestRate(double air){
    annualInterestRate = air;
}

void SavingsAccount::display()const{
    std::cout << "Savings balance = " << savingsBalance << std::endl;
}
