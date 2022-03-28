#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

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
	int j, u, value, numberOfComp = 0;

	for (j = 1; j < arraySize; j++)
	{
		cout << "\n\nAfter pass " << j - 1 << ":";

		for (u = 0; u < arraySize - j; u++)
		{
			++numberOfComp;
	
			if (data[u] > data[u + 1])
			{
				value = data[u];
				data[u] = data[u + 1];
				data[u + 1] = value;
			}
			cout << setw(3) << data[u];
		}
		cout << setw(3) << data[u] << endl;
	}

	cout << "\nSorted array:\n";

	for (int i = 0; i < arraySize; ++i)
		cout << setw(4) << data[i];

	cout << "\NNumber of comparisons = " << numberOfComp << endl;
	cout << endl;

	return 0;
}
