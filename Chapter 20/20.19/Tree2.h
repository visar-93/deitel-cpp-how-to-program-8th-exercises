#ifndef TREE2_H
#define TREE2_H

#include "stdafx.h"
#include <iostream>
#include "TreeNode.h"
#include "Tree.h"
using namespace std;

template<typename NODETYPE>
class Tree2 :public Tree<NODETYPE>
{
public:
	int getDepth() const;
private:
	void determineDepth(TreeNode <NODETYPE> *, int *, int *)const;
};
template<typename NODETYPE>
int Tree2<NODETYPE>::getDepth()const
{
	int totalDepth = 0, currentDepth = 00;
	determineDepth(this->rootPtr, &totalDepth, &currentDepth);

	return totalDepth;
}

template<typename NODETYPE>
void Tree2<NODETYPE>::determineDepth(TreeNode<NODETYPE> *ptr, int *totalPtr, int *currentPtr)const
{
	if (ptr != 0)
	{
		++(*currentPtr);
	
		if (*currentPtr > *totalPtr)
			*totalPtr = *currentPtr;

		determineDepth(ptr->getLeftPtr(), totalPtr, currentPtr);
		determineDepth(ptr->getRightPtr(), totalPtr, currentPtr);
		--(*currentPtr);
	}
}

#endif // !TREE2_H

