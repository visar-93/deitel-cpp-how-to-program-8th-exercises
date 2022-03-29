#ifndef LIST_H
#define LIST_H
#include "stdafx.h"
#include <iostream>
#include "ListNode.h" // ListNode class definition
using namespace std;

template<typename NODETYPE>
class List
{
public:
	List(); // constructor
	List(const List<NODETYPE> &);
	~List(); // destructor
	void insertAtFront(const NODETYPE &);
	void insertAtBack(const NODETYPE &);
	bool removeFromFront(NODETYPE &);
	bool removeFromBack(NODETYPE &);
	bool isEmpty() const;
	void print() const;
private:
	ListNode<NODETYPE> *firstPtr; // pointer to first node
	ListNode<NODETYPE> *lastPtr; // pointer to last node

								 // utility function to allocate new node
	ListNode<NODETYPE> *getNewNode(const NODETYPE &);
}; // end class List

   // default constructor
template<typename NODETYPE>
List<NODETYPE> ::List()
	:firstPtr(0), lastPtr(0)
{
	// empty body
}

template<typename NODETYPE>
List<NODETYPE>::List(const List<NODETYPE> &copy)
{
	firstPtr = lastPtr = 0;
	ListNode<NODETYPE> *currentPtr = copy.firstPtr;

	while (currentPtr != 0)
	{
		insertAtBack(currentPtr->data);
		currentPtr = currentPtr->nextPtr;
	}
}
// destructor
template<typename NODETYPE>
List<NODETYPE>::~List()
{
	if (!isEmpty()) // List is not empty
	{
		cout << "Destroying nodes...\n";

		ListNode<NODETYPE> *currentPtr = firstPtr;
		ListNode<NODETYPE> *tempPtr;

		while (currentPtr != 0) // delete remaining nodes
		{
			tempPtr = currentPtr;
			cout << tempPtr->data << '\n';
			currentPtr = currentPtr->nextPtr;
			delete tempPtr;
		}
	}

	cout << "All nodes destroyed\n\n";
}

// insert node at front of list
template <typename NODETYPE>
void List<NODETYPE>::insertAtFront(const NODETYPE &value)
{
	ListNode<NODETYPE> *newPtr = getNewNode(value); // new node

	if (isEmpty()) // list is empty
		firstPtr = lastPtr = newPtr; // new list has only one node
	else // List is not empty
	{
		newPtr->nextPtr = firstPtr; // print new node to previous 1st node
		firstPtr = newPtr; // aim firstPtr at new node
	}
}

// insert node at back of list
template <typename NODETYPE>
void List<NODETYPE>::insertAtBack(const NODETYPE &value)
{
	ListNode<NODETYPE> *newPtr = getNewNode(value); // new node

	if (isEmpty()) // List is empty
		firstPtr = lastPtr = newPtr; // new list has only one node
	else // List is not empty
	{
		lastPtr->nextPtr = newPtr; // update previous last node
		lastPtr = newPtr; // new last node
	}
}

// delete node from front of list
template<typename NODETYPE>
bool List<NODETYPE>::removeFromFront(NODETYPE &value)
{
	if (isEmpty()) // List is empty
		return false; // delete unsuccesful
	else
	{
		ListNode<NODETYPE> *tempPtr = firstPtr; // hold tempPtr to delete

		if (firstPtr == lastPtr)
			firstPtr = lastPtr = 0; // no nodes remain after removal
		else
			firstPtr = firstPtr->nextPtr; // point to previous 2nd nude

		value = tempPtr->data; // return data being removed
		delete tempPtr; //  reclaim previous front node
		return true;
	}
}

// delete node from back of list
template<typename NODETYPE>
bool List <NODETYPE>::removeFromBack(NODETYPE &value)
{
	if (isEmpty()) // List is empty
		return false; // delete unsuccesful
	else
	{
		ListNode<NODETYPE>*tempPtr = lastPtr; // hold tempPtr to delete

		if (firstPtr == lastPtr) // List has one element
			firstPtr = lastPtr = 0; // no nodes remain after removal
		else
		{
			ListNode<NODETYPE> *currentPtr = firstPtr;

			// locate second-to-last element
			while (currentPtr->nextPtr != lastPtr)
				currentPtr = currentPtr->nextPtr; // move to next node

			lastPtr = currentPtr; // remove last node
			currentPtr->nextPtr = 0; // this is now the last node
		}

		value = tempPtr->data; // return value from old last node
		delete tempPtr; // reclaim former last node
		return true;
	}
}

// is List empty
template<typename NODETYPE>
bool List<NODETYPE>::isEmpty() const
{
	return firstPtr == 0;
}

// return pointer to newly allocated node
template<typename NODETYPE>
ListNode<NODETYPE> *List<NODETYPE>::getNewNode(
	const NODETYPE &value)
{
	return new ListNode<NODETYPE>(value);
}

// display content of List
template<typename NODETYPE>
void List<NODETYPE>::print() const
{
	if (isEmpty()) // List is empty
	{
		cout << "The list is empty\n\n";
		return;
	}

	ListNode<NODETYPE> *currentPtr = firstPtr;

	cout << "The lsit is: ";

	while (currentPtr != 0) // get element data
	{
		cout << currentPtr->data << ' ';
		currentPtr = currentPtr->nextPtr;
	}

	cout << "\n\n";
}

#endif // !LIST_H
