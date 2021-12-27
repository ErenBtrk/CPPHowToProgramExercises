#pragma once
#include <iostream>

class Class2
{
public:
	Class2()
	{
		std::cout << "Class 2 constructor." << std::endl;
	}
	~Class2()
	{
		std::cout << "Class 2 destructor." << std::endl;
	}
};