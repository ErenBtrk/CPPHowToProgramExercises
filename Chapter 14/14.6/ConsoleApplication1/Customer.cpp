#include "Customer.h"

Customer::Customer():accountNumber(0), name(""), adress(""), phoneNo(""), balance(0.0)
{

}

Customer::Customer(int number,const std::string& name , const std::string& adress, const std::string& phoneNo,double bal)
{
	setAccountNumber(number);
	setName(name);
	setAdress(adress);
	setPhoneNo(phoneNo);
	setBalance(bal);
}

void Customer::setAccountNumber(int number)
{
	this->accountNumber = number;
}

void Customer::setName(const std::string& name)
{
	this->name = name;
}

void Customer::setAdress(const std::string& adress)
{
	this->adress = adress;
}

void Customer::setPhoneNo(const std::string& phoneNo)
{
	this->phoneNo = phoneNo;
}

void Customer::setBalance(double balance)
{
	this->balance = balance;
}

std::string Customer::getName()const
{
	return name;
}

std::string Customer::getAdress()const
{
	return adress;
}

std::string Customer::getPhoneNo()const
{
	return phoneNo;
}

double Customer::getBalance()const
{
	return balance;
}

int Customer::getAccountNumber()const
{
	return accountNumber;
}

bool compareCustomer(Customer& c1, Customer& c2)
{
	if (c1.getAccountNumber() < c2.getAccountNumber())
	{
		return true;
	}
	else
	{
		return false;
	}
}