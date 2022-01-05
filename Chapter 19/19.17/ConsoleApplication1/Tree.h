#pragma once
#include "TreeNode.h"

template<typename NODETYPE>
class Tree
{
public:
	void insertData(const NODETYPE& value)
	{
		this->insertNodeHelper(&root, value);
	}

	void preOrderTraversal()const
	{
		this->preOrderHelper(root);
	}

	void inOrderTraversal()const
	{
		this->inOrderHelper(root);
	}

	void postOrderTraversal()const
	{
		this->postOrderHelper(root);
	}
	
private:
	TreeNode<NODETYPE>* root = nullptr;

	TreeNode<NODETYPE>* getNewNode(const NODETYPE& value)const
	{
		return new TreeNode<NODETYPE>(value);
	}

	void insertNodeHelper(TreeNode<NODETYPE>** ptr, const NODETYPE& value)
	{
		if (*ptr == nullptr)
		{
			*ptr = getNewNode(value);
		}
		else
		{
			if (value > (*ptr)->data)
			{
				insertNodeHelper(&((*ptr)->right), value);
			}
			else if (value < (*ptr)->data)
			{
				insertNodeHelper(&((*ptr)->left), value);
			}
			else
			{
				(*ptr)->count = (*ptr)->count + 1;
			}

		}
	}

	void preOrderHelper(TreeNode<NODETYPE>* ptr)const
	{
		if (ptr != nullptr)
		{
			for (int i = 0; i < ptr->count; i++)
			{
				std::cout << ptr->data << " ";
			}
			preOrderHelper(ptr->left);
			preOrderHelper(ptr->right);
		}
	}

	void inOrderHelper(TreeNode<NODETYPE>* ptr)const
	{
		if (ptr != nullptr)
		{
			inOrderHelper(ptr->left);
			for (int i = 0; i < ptr->count; i++)
			{
				std::cout << ptr->data << " ";
			}
			inOrderHelper(ptr->right);
		}
	}

	void postOrderHelper(TreeNode<NODETYPE>* ptr)const
	{
		if (ptr != nullptr)
		{
			inOrderHelper(ptr->right);
			for (int i = 0; i < ptr->count; i++)
			{
				std::cout << ptr->data << " ";
			}
			inOrderHelper(ptr->left);
		}
	}
};