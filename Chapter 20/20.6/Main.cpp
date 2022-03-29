#include "stdafx.h"
#include <iostream>
#include <string>
#include "List.h"
using namespace std;

// display program instruction to user
void instructions()
{
	cout << "Enter one of the following:\n"
		<< "  1 to insert at beginning of list\n"
		<< "  2 to insert at end of list\n"
		<< "  3 to delete from beginning of list\n"
		<< "  4 to delete from end of list\n"
		<< "  5 to end list processing\n";
}

// function to test a List
template<typename T>
void testList(List<T> &listObject, const string &typeName)
{
	cout << "Testing a List of " << typeName << " values\n";
	instructions(); // display instructions

	int choice; // store user choice
	T value; // store input value

	do // perform user-selected actions
	{
		cout << "? ";
		cin >> choice;

		switch (choice)
		{
		case 1: // insert at beginning
			cout << "Enter " << typeName << ": ";
			cin >> value;
			listObject.insertAtFront(value);
			listObject.print();
			break;
		case 2: // insert at end
			cout << "Enter " << typeName << ": ";
			cin >> value;
			listObject.insertAtBack(value);
			listObject.print();
			break;
		case 3: // remove from beginning
			if (listObject.removeFromFront(value))
				cout << value << " removed from list\n";

			listObject.print();
			break;
		case 4: // remove from end
			if (listObject.removeFromBack(value))
				cout << value << " removed from list\n";

			listObject.print();
			break;
		}
	} while (choice < 5);

	cout << "End list test\n\n";
}

template <class T>
void concatenate(List<T> &first, List<T> &second)
{
	T value; // cariable to store removed item from temp

	while (!second.isEmpty())
	{
		second.removeFromFront(value);
		first.insertAtBack(value); // insert at end of first list
	}
}

int main()
{
	List<char> list1, list2;

	// test List1 of char values
	testList(list1, "characters");

	// test List2 of char values
	testList(list2, "characters");

	concatenate(list1, list2);
	cout << "The new list1 after concatenation is:\n";
	list1.print();

	return 0;
}



	// If both lists are empty, return an empty result
	if (first.isEmpty() && second.isEmpty())
	{
		List<T> *ptr = new List<T>; // dynamically allocated
		return *ptr;
	}

	// If first list is empty, return result containing second list
	if (first.isEmpty())
	{
		List<T> *ptr = new List<T>(second);
		return *ptr;
	}

	// If second list is empty, return result containing first list
	if (second.isEmpty())
	{
		List<T> *ptr = new List<T>(first);
		return *ptr;
	}

	// create a copy of first and second list
	List<T> tempFirst(first), tempsecond(second);
	List<T> *ptr = new List<T>; // duynamically allocated result object

	T value1, value2;

	tempFirst.removeFromFront(value1);
	tempsecond.removeFromFront(value2);

	while (!tempFirst.isEmpty() && !tempsecond.isEmpty())
	{
		if (value1 <= value2)
		{
			ptr->insertAtBack(value1);
			tempFirst.removeFromFront(value1);
		}
		else
		{
			ptr->insertAtBack(value2);
			tempsecond.removeFromFront(value2);
		}
	}

	// Insert the values currently in value1 and value2
	if (value1 < value2)
	{
		ptr->insertAtBack(value1);
		ptr->insertAtBack(value2);
	}
	else
	{
		ptr->insertAtBack(value2);
		ptr->insertAtBack(value1);
	}
	// Complete the insertion of the list that is not empty.
	// Note: Only one of the following 2 while structures will execute
	// because one of the lists must be empty to exit the preceding while.
	if (!tempFirst.isEmpty()) // Items left in tempFirst? Insert in result
	{
		do {
			tempFirst.removeFromFront(value1);
			ptr->insertAtBack(value2);
		} while (!tempFirst.isEmpty());
	}
	else
	{
		do {
			tempsecond.removeFromFront(value2);
			ptr->insertAtBack(value2);
		} while (!tempsecond.isEmpty());
	}

	return *ptr;

