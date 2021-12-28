#pragma once

class Number
{
public:
	Number(int x) 
	{
		this->x = x;
	}

	bool operator==(const Number& n)
	{
		return this->x == n.x;
	}
private:
	int x;
};