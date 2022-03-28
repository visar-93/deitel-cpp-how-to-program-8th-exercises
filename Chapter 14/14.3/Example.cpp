#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
void selectionSort( T* const array, int size)
{
	int smallest; // index of smallest element
				  // loop over size-1 elements
	for (int i = 0; i < size - 1; ++i)
	{
		smallest = i;

		// first index of remaining array
		for (int index = i + 1; index < size; ++index)

			if (array[index] < array[smallest])
				smallest = index;

		swap(array[i], array[smallest]);
	}
}
template <typename T>
void swap(T*const element1Ptr, T*const element2Ptr)
{
	T hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}


int main()
{
	const int intSize = 6;
	const int doubleSize = 8;

	int intArray[intSize] = {};
	double doubleArray[doubleSize]{};

	cout << "Input array intArray: \n";
	for (int i = 0; i < intSize; ++i)
		cin >> intArray[i];

	cout << "Input array doubleArray: \n";
	for (int j = 0; j < doubleSize; ++j)
		cin >> doubleArray[j];

	cout << "\nArray intArray: \n";
	for (int k = 0; k < intSize; ++k)
		cout << intArray[k] << ' ';

	cout << "\n\nArray doubleArray: \n";
	for (int l = 0; l < doubleSize; ++l)
		cout << doubleArray[l] << ' ';

	cout << endl;

	selectionSort(intArray, intSize);

	cout << "\nArray intArray after sorting: \n";
	for (int m = 0; m < intSize; ++m)
		cout << intArray[m] << ' ';

	selectionSort(doubleArray, doubleSize);
	cout << "\n\nArray doubleArray after sorting: \n";
	for (int n = 0; n < doubleSize; ++n)
		cout << doubleArray[n] << ' ';

	cout << endl;
    return 0;
}

