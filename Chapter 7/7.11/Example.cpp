#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int arraySize = 10;
	int data[arraySize] = {};

	for (int a = 0; a < arraySize; a++)
	{
		cout << "Enter number : ";
		cin >> data[a];
	}

	cout << "Unsorted arrayL\n";
	//output original array

	for (int i = 0; i < arraySize; ++i)
		cout << setw(4) << data[i];

	// insertion sort
	// loop over the element of array

	for (int j = 0; j < arraySize; j++)
	{
		for (int u = 0; u < arraySize - 1; u++)
		{
			int value = data[u];

			if (data[u] > data[u + 1])
			{
				data[u] = data[u + 1];
				data[u + 1] = value;
			}
			else
				data[u] = value;
		}
	}

	cout << "\nSorted array:\n";

	for (int i = 0; i < arraySize; ++i)
		cout << setw(4) << data[i];

	cout << endl;

	return 0;
}
