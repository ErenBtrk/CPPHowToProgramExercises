#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED

class SavingsAccount{
public:
    SavingsAccount();
    SavingsAccount(double);
    void calculateMonthlyInterest();
    static void modifyInterestRate(double);
    void display()const;
private:
    static double annualInterestRate;
    double savingsBalance;



};


#endif // SAVINGSACCOUNT_H_INCLUDED
