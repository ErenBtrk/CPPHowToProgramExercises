#include "Transaction.h"


Transaction::Transaction() :accountNumber(0), dollarAmount(0.0)
{

}


Transaction::Transaction(int number,double amount)
{
	setAccountNumber(number);
	setDollarAmount(amount);
}

void Transaction::setAccountNumber(int number)
{
	this->accountNumber = number;
}


void Transaction::setDollarAmount(double amount)
{
	this->dollarAmount = amount;
}


double Transaction::getDollarAmount()const
{
	return dollarAmount;
}

int Transaction::getAccountNumber()const
{
	return accountNumber;
}

bool compareTransaction(Transaction& t1, Transaction& t2)
{
	if (t1.getAccountNumber() < t2.getAccountNumber())
	{
		return true;
	}
	else
	{
		return false;
	}
}
