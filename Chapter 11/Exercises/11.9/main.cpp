// 11.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "overNightPackage.h"
#include "twoDayPackage.h"

int main()
{


	double weight(100);
	double costPerOunce(100);
	double flatFee(99);
	double feePerOunce(100);
	Person sender("G", "Honey Road No.1", "HG", "HB", "242424");
	Person recipient("C", "Scientist Roat No.1", "WH", "HB", "666666");
	Package pack(sender, recipient, weight, costPerOunce);
	TwoDayPackage twoDayPack(sender, recipient, weight, costPerOunce, flatFee);
	OverNightPackage overnightPackage(sender, recipient, weight, costPerOunce, feePerOunce);

	std::cout << "Package cost: " << pack.calculateCost() << std::endl;
	std::cout << "TwoDayPackage cost: " << twoDayPack.calculateCost() << std::endl;
	std::cout << "OvernightPackage cost: " << overnightPackage.calculateCost() << std::endl;

	return 0;
}
