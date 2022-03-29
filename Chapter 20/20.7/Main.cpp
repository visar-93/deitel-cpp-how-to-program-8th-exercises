#include "stdafx.h"
#include <iostream>
#include <string>
#include "List.h"
using namespace std;

template <typename T>
List<T> &merge(List<T> &first, List<T> &second)
{
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
}

int main()
{
	List<int> list1, list2;

	int i;

	for (int i = 1; i <= 9; i += 2)
		list1.insertAtBack(i);

	list1.print();

	for (int i = 2; i <= 10; i += 2)
		list2.insertAtBack(i);
	list2.print();

	List<int> &listRef = merge(list1, list2);
	cout << "The merged list is:\n";
	listRef.print();

	delete &listRef;

	return 0;
}
