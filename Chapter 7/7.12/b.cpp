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
	int j, u, value, numberofswaps=0;

	for (j = 1; j < arraySize; j++)
	{
		for (u = 0; u < arraySize - j; u++)
		{
			value = data[u];
			if (data[u] > data[u + 1])
			{
				data[u] = data[u + 1];
				data[u + 1] = value;
				++numberofswaps;
				cout << "\nSwap no. " << numberofswaps << "\n"
					<< "Array changed is : \n";

				for (int i = 0; i < arraySize; ++i)
					cout << setw(4) << data[i];

				cout << endl;
			}
			else
			{
				data[u] = value;
				cout << "No swap needed\n "
					<< "Array remains the same: \n";
				for (int i = 0; i < arraySize; ++i)
					cout << setw(4) << data[i];

				cout << endl;
			}
		}
	}

	cout << "\nSorted array:\n";

	for (int i = 0; i < arraySize; ++i)
		cout << setw(4) << data[i];

	cout << "\n\nNumber of swaps in total = " << numberofswaps << endl;
	cout << endl;

	return 0;
}
