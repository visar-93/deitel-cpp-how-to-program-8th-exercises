#include "stdafx.h"
#include <iostream>

using namespace std;

int recursiveMinimum(int[], int, int);
void printArray(int array[], int, int);

int main()
{
	const int SIZE = 10;
	int arrayToPrint[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int first, last;
	cout << "Enter starting subscript: ";
	cin >> first;
	cout << "Enter last subscript: ";
	cin >> last;

	printArray(arrayToPrint, first, last);
	cout << endl;
	int minimum = recursiveMinimum(arrayToPrint, first, last);
	cout << "The smallest is: " << minimum << endl;
	cout << endl;

	return 0;
}

void printArray(int array[], int start, int end)
{
	cout << "  " << array[start];

	if (start == end)
		return;
	else
		printArray(array, start + 1, end);

}
int recursiveMinimum(int minimumArray[], int first, int last)
{
	int minimum = 10;
	for (int i = first; i <= last; ++i)
	{
		if (minimumArray[i] < minimum)
		{
			minimum = minimumArray[i];
		}
	}
	return minimum;
}
