#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED
#include "account.h"

class SavingsAccount : public Account{
public:
    SavingsAccount(double,double);
    void setInterestRate(double);
    double getInterestRate()const;
    double calculateInterest()const;
    void credit(double);
    void debit(double);
private:
    double interestRate;

};


#endif // SAVINGSACCOUNT_H_INCLUDED
