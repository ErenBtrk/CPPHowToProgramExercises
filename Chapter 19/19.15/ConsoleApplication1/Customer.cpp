#include "Customer.h"



unsigned int Customer::numberOfCustomers{ 0 };

Customer::Customer():arrivalMinute(0),serviceMinute(0)
{
	++numberOfCustomers;
}

void Customer::setArrivalMinute(int time)
{
	arrivalMinute = time;
}

int Customer::getArrivalMinute()const
{
	return arrivalMinute;
}

void Customer::setServiceMinute(int time)
{
	serviceMinute = time;
}

int Customer::getServiceMinute()const
{
	return serviceMinute;
}

std::ostream& operator<<(std::ostream& output, const Customer& customer)
{
	output << customer.customerNo;
	return output;
}

unsigned int Customer::getNumberOfCustomers()
{
	return numberOfCustomers;
}

int Customer::getCustomerNo()const
{
	return customerNo;
}