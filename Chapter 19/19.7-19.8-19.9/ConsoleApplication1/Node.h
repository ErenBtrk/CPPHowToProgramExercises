#pragma once


template<typename NODETYPE>class LinkedList;

template<typename NODETYPE>void mergeLists(const LinkedList<NODETYPE>&, const LinkedList<NODETYPE>&, LinkedList<NODETYPE>&);
template<typename NODETYPE>void copyReverseOrder(const LinkedList<NODETYPE>&, LinkedList<NODETYPE>&);


template<typename NODETYPE>
class Node
{
	friend class LinkedList<NODETYPE>;

	friend void mergeLists<NODETYPE>(const LinkedList<NODETYPE>&, const LinkedList<NODETYPE>&, LinkedList<NODETYPE>&);

	friend void copyReverseOrder<NODETYPE>(const LinkedList<NODETYPE>&, LinkedList<NODETYPE>&);

public:
	explicit Node(const NODETYPE& data):data(data),next(nullptr){}
	
	NODETYPE getData()const { return data; }
	
private:
	Node<NODETYPE>* next;
	NODETYPE data;

};