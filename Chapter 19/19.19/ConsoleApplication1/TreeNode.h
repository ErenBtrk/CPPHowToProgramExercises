#pragma once

template<typename NODETYPE>class Tree;

template<typename NODETYPE>
class TreeNode
{
	friend class Tree<NODETYPE>;
public:
	TreeNode(const NODETYPE& data):data(data),count(1) {}
	NODETYPE getData()const
	{
		return data;
	}
private:
	TreeNode<NODETYPE>* right = nullptr;
	TreeNode<NODETYPE>* left = nullptr;
	NODETYPE data;
	int count;
};