#pragma once

template<typename NODETYPE>class LinkedList;


template<typename NODETYPE>
class Node
{
	friend class LinkedList<NODETYPE>;

public:
	Node(const NODETYPE& value) :next(nullptr), data(value){}

	NODETYPE getData()const { return data; }
private:
	Node<NODETYPE>* next;
	NODETYPE data;
};