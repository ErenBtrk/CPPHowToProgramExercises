#ifndef CHECKINGACCOUNT_H_INCLUDED
#define CHECKINGACCOUNT_H_INCLUDED
#include "account.h"

class CheckingAccount : public Account{
public:
    CheckingAccount(double,double);
    void setFeeCharged(double);
    double getFeeCharged()const;
    virtual void credit(double) override;
    virtual void debit(double) override ;

private:
    double feeCharged;
};



#endif // CHECKINGACCOUNT_H_INCLUDED
