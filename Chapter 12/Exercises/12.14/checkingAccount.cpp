#include "checkingAccount.h"
#include "account.h"
#include <iostream>

CheckingAccount::CheckingAccount(double balance,double fee)
                                                       :Account(balance){
                                                       setFeeCharged(fee);
}

void CheckingAccount::setFeeCharged(double fee){
    feeCharged = fee;
}

double CheckingAccount::getFeeCharged()const{
    return feeCharged;
}

void CheckingAccount::credit(double add){
    Account::credit(add);
    Account::debit(feeCharged);
}

void CheckingAccount::debit(double subtract){
        Account::debit(feeCharged+subtract);
}
