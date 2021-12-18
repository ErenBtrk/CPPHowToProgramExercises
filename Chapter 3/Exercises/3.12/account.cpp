#include <iostream>
#include <string>
#include "account.h"


Account::Account(int balance){
    setBalance(balance);
}
void Account::setBalance(int balance){
    if(balance >= 0){
        accountBalance = balance;
    }
    else{
        accountBalance = 0;
        std::cout << "The initial balance was invalid." << std::endl;
    }
}

void Account::credit(int addAmount){
    accountBalance += addAmount;
}

void Account::debit(int withdrawAmount){
    if(withdrawAmount>accountBalance){
        std::cout << "Debit amount exceeded account balance." << std::endl;
    }
    else{
        accountBalance -= withdrawAmount;
    }
}

int Account::getBalance(){
    return accountBalance;
}
