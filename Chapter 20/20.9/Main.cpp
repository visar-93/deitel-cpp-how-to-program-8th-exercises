#include "stdafx.h"
#include <iostream>
#include <string>
#include "List.h"
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

template<typename T>
void reverseList(List<T> &first, List<T> &second)
{
	List <T> temp(second); // create a copy of second
	T value;               // variable to store removed item from first list

	while (!temp.isEmpty())
	{
		temp.removeFromBack(value);
		first.insertAtBack(value);
	}
}

int main()
{
	List<int> list1, list2 ;
	
	srand(time(0));

	for (int i = 0; i < 10; ++i)
	{
		list1.insertAtBack(1 + rand() % 99);
	}
	list1.print();
    reverseList(list2, list1);
	cout << "Reverse list is: \n";
	list2.print();
	
	return 0;
}

