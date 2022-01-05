#pragma once
#include "List.h"
#include <vector>
#include <string>

template<typename NODETYPE>
class IndexedList 
{
public:
	IndexedList(size_t size)
	{
		setListSize(size);
		setList();
	}

	void setListSize(size_t size)
	{
		this->listSize = size;
	}

	void setList()
	{
		for (size_t i = 0; i < listSize; i++)
		{
			listVector.push_back(new List<NODETYPE>);
		}
		iter = listVector[0];
	}

	void print()
	{
		for (size_t i = 0; i < listSize; i++)
		{
			listVector.at(i)->print();
		}
	}

	void insertInIndexedList(const NODETYPE& value)
	{
		size_t index = getIndex(value);
		listVector.at(index)->insertAtBack(value);
	}

	bool searchIndexedList(const NODETYPE& value)
	{
		size_t index = getIndex(value);
		return listVector.at(index)->search(value);
	}

	bool deleteFromIndexedList(const NODETYPE& value)
	{
		size_t index = getIndex(value);
		return listVector.at(index)->removeElement(value);
	}

	

private:
	std::vector<List<NODETYPE>*> listVector;
	List<NODETYPE>* iter;

	size_t listSize;

	ListNode<NODETYPE>* getNewNode(const NODETYPE& value)
	{
		return new ListNode<NODETYPE>(value);
	}

	virtual size_t getIndex(const NODETYPE& value) = 0;
};