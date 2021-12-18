#include "account.h"
#include <stdexcept>

Account::Account(double balance){
    setAccountBalance(balance);
}

void Account::setAccountBalance(double balance){
    if( balance >= 0.0 ){
        accountBalance = balance;
    }
    else{
        accountBalance = 0.0;
        throw std::invalid_argument("The initial balance was invalid.");
    }
}

double Account::getAccountBalance()const{
    return accountBalance;
}

void Account::credit(double add){
    accountBalance += add ;
}

void Account::debit(double subtract){
    if( subtract <= accountBalance ){
        accountBalance -= subtract ;
    }
    else{
        throw std::invalid_argument("Debit amount is higher than account balance.");
    }
}
