#pragma once
#include "LinkedList.h"

template<typename NODETYPE>
class Queue : private LinkedList<NODETYPE>
{
	friend class Store;
public:
	void printQueue()const
	{
		this->print();
	}
	
	bool isQueueEmpty()const
	{
		this->isEmpty();
	}

	bool pop(NODETYPE& value)
	{
		if (!this->isEmpty())
		{
			return this->removeFromFront(value);
		}
		else
		{
			return false;
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