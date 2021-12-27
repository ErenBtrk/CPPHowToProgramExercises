#pragma once
#include <iostream>
#include "Class2.h"

class Class1
{
public:
	Class1()
	{
		try
		{
			throw 10;
		}
		catch (...)
		{
			std::cout << "Caught an exception." << std::endl;
		}
		std::cout << "Class 1 constructor." << std::endl;
	}
	~Class1()
	{
		std::cout << "Class 1 destructor." << std::endl;
	}
private:
	Class2 c2;
};