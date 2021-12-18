#include <iostream>
#include "savingsAccount.h"

using namespace std;

int main()
{
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);

    SavingsAccount::modifyInterestRate(0.03);

    saver1.calculateMonthlyInterest();
    saver1.display();
    saver2.calculateMonthlyInterest();
    saver2.display();

    SavingsAccount::modifyInterestRate(0.04);

    saver1.calculateMonthlyInterest();
    saver1.display();
    saver2.calculateMonthlyInterest();
    saver2.display();

    return 0;
}
