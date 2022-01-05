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
				std::cout << iter->data << " -> ";
				iter = iter->next;
			}
			std::cout << "\n\n";
		}
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
			tail = tail->next;
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

	void sortList()
	{
		if (root == nullptr)
		{
			return;
		}
		Node<NODETYPE>* newRoot = root;
		while (newRoot->next != nullptr)
		{
			Node<NODETYPE>* iter = newRoot;
			Node<NODETYPE>* min = newRoot;
			bool isThereChange = false;
			while (iter != nullptr)
			{
				if (iter->data < min->data)
				{
					min = iter;
					isThereChange = true;
				}
				iter = iter->next;
			}
			if (isThereChange)
			{
				NODETYPE temp;
				temp = newRoot->data;
				newRoot->data = min->data;
				min->data = temp;
			}
			newRoot = newRoot->next;
		}
	}

	void printListBackward()const
	{
		this->printListBackwardHelper(root);
	}

	Node<NODETYPE>* findData(const NODETYPE& value)const
	{
		return this->findDataHelper(root, value);
	}
	
	
private:
	Node<NODETYPE>* root;
	Node<NODETYPE>* tail;

	Node<NODETYPE>* getNewNode(const NODETYPE& value)const
	{
		return new Node<NODETYPE>(value);
	}

	void printListBackwardHelper(const Node<NODETYPE>* fPtr)const
	{
		if (fPtr == nullptr)
		{
			return;
		}
		printListBackwardHelper(fPtr->next);
		std::cout << fPtr->data << " -> ";
	}

	Node<NODETYPE>* findDataHelper(Node<NODETYPE>* fPtr, const NODETYPE& value)const
	{
		if (fPtr == nullptr)
		{
			return nullptr;
		}
		else if (value == fPtr->data)
		{
			return fPtr;
		}
		findDataHelper(fPtr->next, value);

	}
};	

