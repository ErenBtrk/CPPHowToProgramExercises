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

bool Account::debit(double subtract){
    if( subtract <= accountBalance ){
        accountBalance -= subtract ;
        return true;
    }
    else{
        throw std::invalid_argument("Debit amount exceeded account balance.");
        return false;
    }
}
