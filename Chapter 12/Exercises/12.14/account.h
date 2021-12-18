#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

class Account{
public:
    Account(double);
    void setAccountBalance(double);
    virtual void credit(double);
    virtual void debit(double);

    double getAccountBalance()const;
private:
    double accountBalance;

};


#endif // ACCOUNT_H_INCLUDED
