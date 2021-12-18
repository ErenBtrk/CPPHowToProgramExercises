#include "savingsAccount.h"

SavingsAccount::SavingsAccount(double balance,double iRate)
                                                  :Account(balance){
                                                  setInterestRate(iRate);
}

void SavingsAccount::setInterestRate(double iRate){
    interestRate = iRate;
}

double SavingsAccount::getInterestRate()const{
    return interestRate;
}

double SavingsAccount::calculateInterest()const{
    return interestRate * Account::getAccountBalance();
}

void SavingsAccount::credit(double add){
    Account::credit(add);
}

void SavingsAccount::debit(double subtract){
    Account::debit(subtract);
}
