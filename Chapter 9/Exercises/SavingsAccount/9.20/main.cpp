#include <iostream>
#include "savingsAccount.h"

int main()
{
    std::cout << "Hello World!\n";
	SavingsAccount saver1(2000.0);
	SavingsAccount saver2(3000.0);

	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();
	saver1.print();
	saver2.print();

	SavingsAccount::modifyInterestRate(0.04);
	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();
	saver1.print();
	saver2.print();



	return 0;
}
