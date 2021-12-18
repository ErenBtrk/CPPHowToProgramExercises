#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

class Account{
private:
    int accountNo;
    double balanceBeginning;
    double charges;
    double credits;
    double creditLimit;
    double newBalance;
public:
    Account(int,double,double,double,double);
    void setAccountNo(int);
    void setBalance(double);
    void setCharges(double);
    void setCredits(double);
    void setCreditLimit(double);
    void setNewBalance();
    void checkLimit()const;


};


#endif // ACCOUNT_H_INCLUDED
