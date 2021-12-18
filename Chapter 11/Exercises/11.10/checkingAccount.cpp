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
   if(Account::debit(subtract)){
        Account::debit(feeCharged);
   }
   else{
        std::cout << "Money wasnt withdrawn." << std::endl;
   }
}
