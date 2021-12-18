#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <iostream>
#include <string>




class Account{
private:
    unsigned int accountNumber;
    std::string firstName;
    std::string lastName;
    double balance;
public:
    Account(unsigned int,const std::string &,const std::string &,double);
    unsigned int getAccountNumber()const;
    std::string getFirstName()const;
    std::string getLastName()const;
    double getBalance()const;
    void showDetails()const;

};


#endif // ACCOUNT_H_INCLUDED
