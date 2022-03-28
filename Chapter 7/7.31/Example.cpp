#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

void selectionSort(int[],const int);

int main()
{
	const int arraySize = 10;
	int data[arraySize] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	cout << "Unsorted arrayL\n";
	//output original array

	for (int i = 0; i < arraySize; ++i)
		cout << setw(4) << data[i];

	// insertion sort
	// loop over the element of array

	cout << "\nSorted array:\n";

	selectionSort(data, arraySize);

	for (int i = 0; i < arraySize; ++i)
	{
		cout << setw(4) << data[i];
	}
	
	cout << endl;

	return 0;
}
void selectionSort(int sort[], const int size)
{
	int value;

	for (int i = 1; i < size-1; i++)
	{
		if (sort[i+1] < sort[i])
		{
			value = sort[i];
			sort[i] = sort[i+1];
			sort[i + 1] = value;
		}
	selectionSort(sort, size - 1);
	}
}
