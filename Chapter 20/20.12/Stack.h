#ifndef STACKH
#define STACK_H

#include "List.h"

template<typename STACKTYPE	>
class Stack
{
public:
	// no constructor; List constructor does initialization

	// push calls the List function insertAtFront
	void push(const STACKTYPE &data)
	{
		stackList.insertAtFront(data);
	}

	// pop calls the List function removeFromFront
	bool pop(STACKTYPE &data)
	{
		return stackList.removeFromFront(data);
	}

	// isStackEmpty calls the List function isEmpty
	bool isStackEmpty() const
	{
		return stackList.isEmpty();
	}

	// printStack calls the List function print
	void printStack() const
	{
		stackList.print();
	}

	STACKTYPE stackTop() 
	{
		if (!isStackEmpty())
			return stackList.returnTop();
		else
			return static_cast< STACKTYPE>(0);
	}
private:
	List<STACKTYPE> stackList; // composed List object
};

#endif // !STACK_H

