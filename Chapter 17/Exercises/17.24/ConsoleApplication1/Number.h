#pragma once
#include <iostream>

class Number
{
public:
	Number(int x)
	{
		this->x = x;
	}
	~Number()
	{
		std::cout << "Destructor called for number " << x << std::endl;
	}
private:
	int x;
};