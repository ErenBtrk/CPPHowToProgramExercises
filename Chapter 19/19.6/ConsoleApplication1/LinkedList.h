#include <iostream>


template <typename NODETYPE>class LinkedList;



template <typename NODETYPE>void concatenate(const LinkedList<NODETYPE>&, const LinkedList<NODETYPE>&, LinkedList<NODETYPE>&);


template<typename NODETYPE>
class Node
{
	friend class LinkedList<NODETYPE>;

	friend void concatenate<NODETYPE>(const LinkedList<NODETYPE>& list1, const LinkedList<NODETYPE>& list2, LinkedList<NODETYPE>& list3);
public:
	explicit Node(const NODETYPE& data) :next(nullptr), charData(data) {}

	NODETYPE getData()const { return charData; }



private:
	Node<NODETYPE>* next;
	NODETYPE charData;
};

template<typename NODETYPE>
class LinkedList
{
	friend void concatenate<NODETYPE>(const LinkedList<NODETYPE>& list1, const LinkedList<NODETYPE>& list2, LinkedList<NODETYPE>& list3);

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
	void insertAtFront(const NODETYPE& value)
	{
		if (root == nullptr)
		{
			root = getNewNode(value);
			tail = root;
		}
		else
		{
			Node<NODETYPE>* newRoot = getNewNode(value);
			newRoot->next = root;
			root = newRoot;
		}
	}

	void insertAtBack(const NODETYPE& value)
	{
		if (root == nullptr)
		{
			root = getNewNode(value);
			tail = root;
		}
		else
		{
			Node<NODETYPE>* newTail = getNewNode(value);
			tail->next = newTail;
			tail = newTail;
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
			if (root->next == nullptr)
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

	bool removeFromBack(NODETYPE& value)
	{
		if (root == nullptr)
		{
			return false;
		}
		else
		{
			Node<NODETYPE>* temp = tail;
			if (root->next == nullptr)
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
				std::cout << iter->getData();
				iter = iter->next;
			}
		}
		std::cout << "\n\n";
	}




private:
	Node<NODETYPE>* root;
	Node<NODETYPE>* tail;

	Node<NODETYPE>* getNewNode(const NODETYPE& value)
	{
		return new Node<NODETYPE>(value);
	}
};

template <typename NODETYPE>
void concatenate<NODETYPE>(const LinkedList<NODETYPE>& list1, const LinkedList<NODETYPE>& list2, LinkedList<NODETYPE>& list3)
{

	Node<NODETYPE>* iter = list1.root;

	while (iter != nullptr)
	{
		list3.insertAtBack(iter->getData());
		iter = iter->next;
	}

	iter = list2.root;

	while (iter != nullptr)
	{
		list3.insertAtBack(iter->getData());
		iter = iter->next;
	}
}
