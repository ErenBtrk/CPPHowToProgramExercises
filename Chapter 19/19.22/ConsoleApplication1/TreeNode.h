#pragma once

template<typename NODETYPE>class Tree;

template<typename NODETYPE>
class TreeNode
{
	friend class Tree<NODETYPE>;
public:
	TreeNode(const NODETYPE& value):right(nullptr),left(nullptr),data(value) {}
	NODETYPE getData()const { return data; }
private:
	TreeNode<NODETYPE>* right;
	TreeNode<NODETYPE>* left;
	NODETYPE data;
};