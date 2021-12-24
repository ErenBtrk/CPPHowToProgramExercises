#pragma once
#include <iostream>

class Transaction
{
public:
	Transaction();
	Transaction(int, double);
	void setAccountNumber(int);
	void setDollarAmount(double);

	int getAccountNumber()const;
	double getDollarAmount()const;
private:
	int accountNumber;
	double dollarAmount;
};

bool compareTransaction(Transaction& t1, Transaction& t2);
