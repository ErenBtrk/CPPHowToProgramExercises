#pragma once

template<typename NODETYPE>class LinkedList;



template<typename NODETYPE>
class Node
{
	friend class LinkedList<NODETYPE>;
public:
	explicit Node(const NODETYPE& data):data(data),next(nullptr){}

	NODETYPE getData()const { return data; }
private:
	Node<NODETYPE>* next;
	NODETYPE data;
};