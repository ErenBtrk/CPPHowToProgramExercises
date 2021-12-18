#include <iostream>
#include <string>
#include "account.h"



Account::Account(unsigned int accNum,const std::string &fName,const std::string &lName,double bal)
                             :accountNumber(accNum) , firstName(fName) , lastName(lName) , balance(bal){ }

unsigned int Account::getAccountNumber()const{
    return accountNumber;
}

std::string Account::getFirstName()const{
    return firstName;
}

std::string Account::getLastName()const{
    return lastName;
}

double Account::getBalance()const{
    return balance;
}

void Account::showDetails()const{
    std::cout << accountNumber << " " << firstName << " " << lastName << " " << balance << std::endl;
}
