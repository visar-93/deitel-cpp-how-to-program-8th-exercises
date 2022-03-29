#ifndef TREENODE_H
#define TREENODE_H

// forward declaration of class Tree
template<typename NODETYPE> class Tree;

// TreeNode class-template definition
template<typename NODETYPE>
class TreeNode
{
	friend class Tree<NODETYPE>;
public:
	// constructor
	TreeNode(const NODETYPE &d)
		:leftPtr(0), // pointer to left subtree
		data(d), // tree node data
		rightPtr(0) // pointer to right subtree
	{
		// empty body
	}

	// return copy node's data
	NODETYPE getData()const
	{
		return data;
	}
	TreeNode *getLeftPtr()const
	{
		return leftPtr;
	}
	TreeNode *getRightPtr() const
	{
		return rightPtr;
	}
	void setLeftPtr(TreeNode *ptr)
	{
		leftPtr = ptr;
	}
	void setRightPtr(TreeNode *ptr)
	{
		rightPtr = ptr;
	}
private:
	TreeNode<NODETYPE> *leftPtr; // pointer to left subtree
	NODETYPE data;
	TreeNode<NODETYPE> *rightPtr; // pointer to right subtree
};
#endif // !TREENODE_H

