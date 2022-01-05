#pragma once
#include <iostream>
#include <array>
#include "LinkedList.h"
#include "Stack.h"
#include <string>

class Postfix
{
public:
	
	Postfix(const std::string & );

	std::string toInfix();
private:

	void setInfixStr(const std::string&);

	bool isOperator(const char c)
	{
		for (int i = 0; i < operatorArray.size(); i++)
		{
			if (c == operatorArray.at(i))
			{
				return true;
			}
		}
		return false;
	}

	bool isPrecedenceHigherOrEqual(const char firstOp, const char secondOp)
	{
		return (std::find(operatorArray.cbegin(), operatorArray.cend(), firstOp) >= std::find(operatorArray.cbegin(), operatorArray.cend(), secondOp));
	}

	static const size_t SIZE = 6;
	static const std::array<char, SIZE> operatorArray;
	Stack<char> stack;
	LinkedList<char> postfixList;
	std::string infixStr;
};