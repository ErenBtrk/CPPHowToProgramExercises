#pragma once
#include "LinkedList.h"

template<typename NODETYPE>class Tree;

template<typename NODETYPE>
class Queue : private LinkedList<NODETYPE>
{
public:
	void printQueue()const
	{
		this->print();
	}
	
	bool isQueueEmpty()const
	{
		return this->isEmpty();
	}

	bool pop(NODETYPE& value)
	{
		if (!this->isEmpty())
		{
			return this->removeFromFront(value);
		}
	}

	void push(const NODETYPE& value)
	{
		this->insertAtBack(value);
	}

	NODETYPE top()const
	{
		return this->getRootElement();
	}

	int getQueueSize()const
	{
		return this->getListSize();
	}
	
};