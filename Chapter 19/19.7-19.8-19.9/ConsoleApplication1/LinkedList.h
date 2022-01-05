#pragma once
#include <iostream>
#include "Node.h"

template<typename NODETYPE>void mergeLists(const LinkedList<NODETYPE>&, const LinkedList<NODETYPE>&, LinkedList<NODETYPE>&);
template<typename NODETYPE>void copyReverseOrder(const LinkedList<NODETYPE>&, LinkedList<NODETYPE>&);

template<typename NODETYPE>
class LinkedList
{
	friend void mergeLists<NODETYPE>(const LinkedList<NODETYPE>&, const LinkedList<NODETYPE>&, LinkedList<NODETYPE>&);

	friend void copyReverseOrder<NODETYPE>(const LinkedList<NODETYPE>&, LinkedList<NODETYPE>&);
	
public:
	~LinkedList()
	{
		if (root != nullptr)
		{
			Node<NODETYPE>* iter = root;
			Node<NODETYPE>* temp = nullptr;
			while (iter != nullptr)
			{
				temp = iter;
				iter = iter->next;
				delete temp;
			}
		}
	}

	void insertAtFront(NODETYPE value)
	{
		Node<NODETYPE>* newNode = getNewNode(value);
		if (root == nullptr)
		{
			root = newNode;
			tail = root;
		}
		else
		{
			newNode->next = root;
			root = newNode;
		}
	}

	void insertAtBack(NODETYPE value)
	{
		Node<NODETYPE>* newNode = getNewNode(value);
		if (tail == nullptr)
		{
			tail = newNode;
			root = tail;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
	}

	bool removeFromFront(NODETYPE& value)
	{
		if (root == nullptr)
		{
			return false;
		}
		else
		{
			Node<NODETYPE>* temp = root;
			if (root == tail)
			{
				root = nullptr;
				tail = nullptr;
			}
			else
			{
				root = root->next;
			}
			value = temp->data;
			delete temp;
			return true;
		}
	}

	bool removeFromBack(NODETYPE& value)
	{
		if (root == nullptr)
		{
			return false;
		}
		else
		{
			Node<NODETYPE>* temp = tail;
			if (root == tail)
			{
				root = nullptr;
				tail = nullptr;
			}
			else
			{
				Node<NODETYPE>* iter = root;
				while (iter->next->next != nullptr)
				{
					iter = iter->next;
				}
				tail = iter;
				iter->next = nullptr;
			}
			value = temp->data;
			delete temp;
			return true;
		}
	}

	void print()const
	{
		if (root == nullptr)
		{
			std::cout << "List is empty." << std::endl;
		}
		else
		{
			Node<NODETYPE>* iter = root;
			while (iter != nullptr)
			{
				std::cout << iter->data << std::endl;
				iter = iter->next;
			}
		}
		std::cout << "\n\n";
	}

	void insertSorted(NODETYPE value)
	{
		Node<NODETYPE>* newNode = getNewNode(value);

		if (root == nullptr)
		{
			root = newNode;
			tail = root;
			return;
		}
		if (root->data > value)
		{
			newNode->next = root;
			root = newNode;
			return;
		}
		Node<NODETYPE>* iter = root;
		while (iter->next != nullptr && iter->next->data < value)
		{
			iter = iter->next;
		}
		newNode->next = iter->next;
		iter->next = newNode;
	}

	NODETYPE sumElements()const
	{
		NODETYPE sum = 0;
		Node<NODETYPE>* iter = root;
		while (iter != nullptr)
		{
			sum += iter->getData();
			iter = iter->next;
		}
		return sum;
	}

	double average()const
	{
		NODETYPE sum = 0;
		int count = 0;
		Node<NODETYPE>* iter = root;
		while (iter != nullptr)
		{
			sum += iter->getData();
			iter = iter->next;
			count++;
		}
		return static_cast<double>(sum) / count;
	}

	

	
private:
	Node<NODETYPE>* root = nullptr;
	Node<NODETYPE>* tail = nullptr;

	Node<NODETYPE>* getNewNode(const NODETYPE& data)const
	{
		return new Node<NODETYPE>(data);
	}
};


template<typename NODETYPE>
void mergeLists<NODETYPE>(const LinkedList<NODETYPE>& list1, const LinkedList<NODETYPE>& list2, LinkedList<NODETYPE>& list3)
{
	Node<NODETYPE>* iter = list1.root;
	while (iter != nullptr)
	{
		list3.insertSorted(iter->getData());
		iter = iter->next;
	}
	iter = list2.root;
	while (iter != nullptr)
	{
		list3.insertSorted(iter->getData());
		iter = iter->next;
	}
}

template<typename NODETYPE>
void copyReverseOrder(const LinkedList<NODETYPE>& list1, LinkedList<NODETYPE>& list2)
{
	Node<NODETYPE>* iter = list1.root;
	while (iter != nullptr)
	{
		list2.insertAtFront(iter->getData());
		iter = iter->next;
	}
}