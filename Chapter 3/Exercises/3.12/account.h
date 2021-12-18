#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <iostream>

class Account{
private:
    int accountBalance;
public:
    explicit Account(int);
    void setBalance(int);
    void credit(int);
    void debit(int);
    int getBalance();

};










#endif // ACCOUNT_H_INCLUDED
