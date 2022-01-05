#pragma once

#include <iostream>




class Customer
{
	friend std::ostream& operator<<(std::ostream&, const Customer&);
public:
	

	Customer();
	void setArrivalMinute(int);
	int getArrivalMinute()const;

	void setServiceMinute(int);
	int getServiceMinute()const;

	static unsigned int getNumberOfCustomers();
	int getCustomerNo()const;

	Customer& operator=(const Customer& right)
	{
		this->arrivalMinute = right.arrivalMinute;
		this->serviceMinute = right.serviceMinute;
		this->customerNo = right.customerNo;
		return *this;
	}
	
private:
	static unsigned int numberOfCustomers;
	int customerNo = numberOfCustomers;
	int arrivalMinute;
	int serviceMinute;
};