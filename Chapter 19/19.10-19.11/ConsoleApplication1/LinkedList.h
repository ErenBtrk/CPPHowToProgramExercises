#pragma once
#include "Node.h"
#include <iostream>

template<typename NODETYPE>
class LinkedList
{
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

	void insertAtBack(const NODETYPE& value)
	{
		Node<NODETYPE>* newNode = getNewNode(value);
		if (root == nullptr)
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

	void insertAtFront(const NODETYPE& value)
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
			value = temp->getData();
			delete temp;
			return true;	
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
			value = temp->getData();
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
				std::cout << iter->getData() << " ";
				iter = iter->next;
			}
		}
		std::cout << "\n\n";
	}

	void clear()
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
		root = nullptr;
		tail = nullptr;
	}
private:
	Node<NODETYPE>* root = nullptr;
	Node<NODETYPE>* tail = nullptr;

	Node<NODETYPE>* getNewNode(const NODETYPE value)
	{
		return new Node<NODETYPE>(value);
	}

};