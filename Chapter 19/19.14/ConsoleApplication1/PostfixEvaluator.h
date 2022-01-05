#pragma once
#include <array>
#include <iostream>
#include <string>
#include "Stack.h"
#include "LinkedList.h"

class PostfixEvaluator
{
public:

	static const size_t SIZE = 6;
	static const std::array<char, SIZE> operatorArray;

	PostfixEvaluator(const std::string &);
	void evaluate();

	
private:
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
	std::string postfixStr;
	Stack<int> stack;
	LinkedList<char> list;
};