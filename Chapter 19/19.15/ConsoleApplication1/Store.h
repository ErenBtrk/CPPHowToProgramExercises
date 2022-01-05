#pragma once
#include "Customer.h"
#include "Queue.h"
#include <random>
#include <ctime>
#include <Windows.h>

class Store
{
public:
	Store();
	void startDay();

	void newService();
	
	void printQueue()const
	{
		customerQueue.printQueue();
	}
private:
	Queue<Customer> customerQueue;

};