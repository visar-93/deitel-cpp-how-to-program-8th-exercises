#ifndef STACK_H
#define STACK_H

#include "List.h"

template<typename STACKTYPE	>
class Stack : private List <STACKTYPE>
{
public:
	// push calls the List function insertAtFront
	void push(const STACKTYPE &data)
	{
		this->insertAtFront(data);
	}

	// pop calls the List function removeFromFront
	bool pop(STACKTYPE &data)
	{
		return this->removeFromFront(data);
	}

	// isStackEmpty calls the List function isEmpty
	bool isStackEmpty() const
	{
		return this->isEmpty();
	}

	// printStack calls the List function print
	void printStack() const
	{
		return this->print();
	}
};

#endif // !STACK_H
