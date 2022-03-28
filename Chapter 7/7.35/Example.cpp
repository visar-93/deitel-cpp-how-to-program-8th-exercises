#include "stdafx.h"
#include <iostream>

using namespace std;

void printArray(int array[], int, int);
const int SIZE = 10;

int main()
{
	int arrayToPrint[SIZE] = { 1,2,3,4,5,6,7,8,9,10};
	int first, last;
	cout << "Enter starting subscript: ";
	cin >> first;
	cout << "Enter last subscript: ";
	cin >> last;

	printArray(arrayToPrint, first, last);

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
