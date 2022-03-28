#include "stdafx.h"
#include <iostream>

using namespace std;

int linearSearch(const int[], int, int);

int main()
{
	const int arraySize = 100;
	int a[arraySize];
	int searchKey;

	for (int i = 0; i < arraySize; ++i)
		a[i] = 2 * i;
	cout << "Enter integer search key: ";
	cin >> searchKey;

	int element = linearSearch(a, searchKey, arraySize);

	if (element != -1)
		cout << "Found value in element " << element << endl;
	else
		cout << "Value not found" << endl;

	return 0;
}

// Compare key to every element of array until location is
// found or until end of array is reached; return subscript of
// element if key is found or -1 if key not found
int linearSearch(const int array[], int key, int sizeOfArray)
{
	if (sizeOfArray == 0)
		return -1;
	else if (array[sizeOfArray] == key)
		return sizeOfArray;
	else
		return linearSearch(array, key, sizeOfArray - 1);
}
