#include "stdafx.h"
#include <iostream>
using namespace std;

void eliminateDuplicate(int list[], int newlist[], const int size)
{
	for (int b = 0, i = 0; i < size; ++i)
	{
		int counter = 0;
		for (int j = i + 1; j <= size; ++j)
		{
			if (list[i] == list[j])
			{
				++counter;
			}
		}
		if (counter == 0)
			newlist[i] = list[i];
		else
			newlist[i] = 0;
	}


	for (int l = 0; l < size; ++l)
		cout << newlist[l] << " ";
}

int main()
{
	const int arraySize = 10;
	int arrayInt[arraySize], arrayNew[arraySize], num;

	for (int i = 0; i < arraySize; ++i)
		cin >> arrayInt[i];

	cout << "\nArray after elimination of duplicate elements\n"
		<< "In place of duplicate elements we put 0\n";
	eliminateDuplicate(arrayInt, arrayNew, arraySize);

	cout << endl;

	return 0;
}
