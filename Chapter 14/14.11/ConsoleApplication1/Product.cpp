#include "Product.h"

Product::Product():productNo(0),toolName(""),quantity(0),cost(0)
{

}

Product::Product(int no, const std::string& name,int quantity,double cost)
{
	setNo(no);
	setToolName(name);
	setQuantity(quantity);
	setCost(cost);
}

void Product::setNo(int no)
{
	this->productNo = no;
}

void Product::setToolName(const std::string& name)
{
	name.copy(this->toolName, name.length());
}

void Product::setQuantity(int quantity)
{
	this->quantity = quantity;
}

void Product::setCost(double cost)
{
	this->cost = cost;
}

int Product::getNo()const
{
	return productNo;
}

std::string Product::getToolName()const
{
	return toolName;
}

int Product::getQuantity()const
{
	return quantity;
}

double Product::getCost()const
{
	return cost;
}