#pragma once
#include <iostream>

class Product
{
public:
	Product();
	Product(int,const std::string&, int, double);

	void setNo(int);
	void setToolName(const std::string&);
	void setQuantity(int);
	void setCost(double);

	int getNo()const;
	std::string getToolName()const;
	int getQuantity()const;
	double getCost()const;
private:
	int productNo;
	char toolName[20];
	int quantity;
	double cost;
};