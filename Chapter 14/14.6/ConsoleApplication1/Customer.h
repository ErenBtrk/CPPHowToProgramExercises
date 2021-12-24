#pragma once
#include <iostream>

class Customer
{
public:
	Customer();
	Customer(int,const std::string&, const std::string&, const std::string&,double);
	void setAccountNumber(int);
	void setName(const std::string&);
	void setAdress(const std::string&);
	void setPhoneNo(const std::string&);
	void setBalance(const double);

	int getAccountNumber()const;
	std::string getName()const;
	std::string getAdress()const;
	std::string getPhoneNo()const;
	double getBalance()const;
private:
	int accountNumber;
	std::string name;
	std::string adress;
	std::string phoneNo;
	double balance;
};

bool compareCustomer(Customer& c11, Customer& c2);