#include <iostream>
#include "account.h"

Account::Account(int acNo,double balBeg,double itemChar,double cre,double limit){
    setAccountNo(acNo);
    setBalance(balBeg);
    setCharges(itemChar);
    setCredits(cre);
    setCreditLimit(limit);
}

void Account::setAccountNo(int acNo){
    accountNo = acNo;
}

void Account::setBalance(double bal){
    balanceBeginning = bal;
}

void Account::setCharges(double itemChar){
    charges = itemChar;
}

void Account::setCredits(double cre){
    credits = cre;
}

void Account::setCreditLimit(double limit){
    creditLimit = limit;
}

void Account::setNewBalance(){
    newBalance = balanceBeginning + charges - credits;
}

void Account::checkLimit()const{
    if(newBalance > creditLimit){
        std::cout << "New balance is : " << newBalance << std::endl;
        std::cout << "Credit limit exceeded." << std::endl;
        std::cout << "Account No : " << accountNo << std::endl;
        std::cout << "Credit limit : " << creditLimit << std::endl;
        std::cout << "Balance : " << newBalance << std::endl;
    }
    else{
        std::cout << "New balance is : " << newBalance << std::endl;
    }
}

