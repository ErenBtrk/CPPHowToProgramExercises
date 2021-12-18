#include <iostream>
#include "Point.h"
#include <string>

int main()
{
	Point point;
	std::string Usage = "Input a point in forms: (int,int) or int,int \nNo blank character is allowed\n";
	std::cout << Usage;
	if (!(std::cin >> point))
	{
		std::cout << "Wrong format! " << Usage;
	}
	std::cout << point << std::endl;

	return 0;
}