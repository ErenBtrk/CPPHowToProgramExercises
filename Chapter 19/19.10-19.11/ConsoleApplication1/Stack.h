#pragma once
#include "LinkedList.h"
#include <iostream>

template<typename NODETYPE>
class Stack : private LinkedList<NODETYPE>
{
public:
	
	void push(const NODETYPE& data)
	{
		this->insertAtBack(data);
	}

	bool pop(NODETYPE& data)
	{
		return this->removeFromBack(data);
	}
	
	void printStack()const
	{
		this->print();
	}

	void printReverse(const std::string& str)
	{
		for (int i = str.size()-1; i >= 0; i--)
		{
			this->push(str[i]);
		}
		printStack();
		
	}

	bool isPalindrome(const std::string& str)
	{
		for (int i = str.size() - 1; i >= 0; i--)
		{
			this->push(str[i]);
		}
		for (int i = str.size() - 1; i >= 0; i--)
		{
			char data;
			this->pop(data);
			if (data != str[i])
			{
				return false;
			}
		}
		return true;
	}
	void clearStack()
	{
		this->clear();
	}


};