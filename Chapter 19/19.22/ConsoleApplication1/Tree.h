#pragma once
#include "TreeNode.h"

template<typename NODETYPE>
class Tree
{
public:
	void insertNode(const NODETYPE& value)
	{
		this->insertNodeHelper(&root,value);
	}

	void inOrderTraversal()const
	{
		inorderTraversalHelper(root);
	}

	void preOrderTraversal()const
	{
		preorderTraversalHelper(root);
	}

	void postOrderTraversal()const
	{
		postorderTraversalHelper(root);
	}

	bool binaryTreeSearch(const NODETYPE& value)const
	{
		return this->binaryTreeSearchHelper(root,value);
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
			if (value < (*ptr)->data)
			{
				insertNodeHelper(&((*ptr)->left), value);
			}
			else if (value > (*ptr)->data)
			{
				insertNodeHelper(&((*ptr)->right), value);
			}
			else
			{
				std::cout << "Duplicate." << std::endl;
			}
		}
	}

	void inorderTraversalHelper(TreeNode<NODETYPE>* ptr)const
	{
		if (ptr == nullptr)
		{
			return;
		}
		else
		{
			inorderTraversalHelper(ptr->left);
			std::cout << ptr->data << " ";
			inorderTraversalHelper(ptr->right);
		}
	}

	void preorderTraversalHelper(TreeNode<NODETYPE>* ptr)const
	{
		if (ptr == nullptr)
		{
			return;
		}
		else
		{
			std::cout << ptr->data << " ";
			inorderTraversalHelper(ptr->left);
			inorderTraversalHelper(ptr->right);
		}
	}

	void postorderTraversalHelper(TreeNode<NODETYPE>* ptr)const
	{
		if (ptr == nullptr)
		{
			return;
		}
		else
		{
			inorderTraversalHelper(ptr->right);
			std::cout << ptr->data << " ";
			inorderTraversalHelper(ptr->left);	
		}
	}

	bool binaryTreeSearchHelper(TreeNode<NODETYPE>* ptr, const NODETYPE& search)const
	{
		if (ptr == nullptr)
		{
			return false;
		}
		if (ptr->data == search)
		{
			return true;
		}
		if (binaryTreeSearchHelper(ptr->left,search) == true)
		{
			return true;
		}
		else if (binaryTreeSearchHelper(ptr->right,search) == true)
		{
			return true;
		}
		return false;
	}
};