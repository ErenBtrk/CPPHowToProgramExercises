#pragma once
#include "Node.h"


template<typename NODETYPE>
class LinkedList
{
public:
	~LinkedList()
	{
		if (root != nullptr)
		{
			Node<NODETYPE>* temp = nullptr;
			Node<NODETYPE>* iter = root;
			while (iter != nullptr)
			{
				temp = iter;
				iter = iter->next;
				delete temp;
			}
		}
	}

	void print()const
	{
		if (root == nullptr)
		{
			std::cout << "The list is empty." << std::endl;
		}
		else
		{
			Node<NODETYPE>* iter = root;
			while (iter != nullptr)
			{
				std::cout << iter->data << " ";
				iter = iter->next;
			}
		}
		std::cout << "\n\n";
	}

	void insertAtBack(const NODETYPE& value)
	{
		Node<NODETYPE>* newNode = getNewNode(value);
		if (root == nullptr)
		{
			root = newNode;
			tail = root;
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
				tail->next = nullptr;
			}
			value = temp->data;
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
			value = temp->data;
			delete temp;
			return true;
		}
	}

	bool isEmpty()const
	{
		return root == nullptr;
	}

	NODETYPE getRootElement()const
	{
		if (root != nullptr)
		{
			return root->data;
		}
	}

	int getListSize()const
	{
		if (root == nullptr)
		{
			return 0;
		}
		else
		{
			int counter = 0;
			Node<NODETYPE>* iter = root;
			while (iter != nullptr)
			{
				counter++;
				iter = iter->next;
			}
			return counter;
		}
	}
private:
	Node<NODETYPE>* root = nullptr;
	Node<NODETYPE>* tail = nullptr;

	Node<NODETYPE>* getNewNode(const NODETYPE& value)
	{
		return new Node<NODETYPE>(value);
	}
};