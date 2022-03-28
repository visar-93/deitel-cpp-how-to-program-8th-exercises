#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const int SIZE = 10, MAX_NUMBER = 1000;

void quicksort(int * const, int, int);
void swap(int * const, int * const);

int main()
{
	int arrayToBeSorted[SIZE] = { 0 };
	int loop;

	srand(time(0));

	for (loop = 0; loop < SIZE; ++loop)
		arrayToBeSorted[loop] = rand() % MAX_NUMBER;

	cout << "Initial array values are:\n";

	for (loop = 0; loop < SIZE; ++loop)
		cout << setw(4) << arrayToBeSorted[loop];

	cout << "\n\n";

	if (SIZE == 1)
		cout << "Array is sorted: " << arrayToBeSorted[0] << '\n';
	else {
		quicksort(arrayToBeSorted, 0, SIZE - 1);
		cout << "The sorted array values are:\n";

		for (loop = 0; loop < SIZE; ++loop)
			cout << setw(4) << arrayToBeSorted[loop];

		cout << endl;

	}

	return 0;
}

void quicksort(int * const array, int first, int last)
{
	int partition(int * const, int, int);
	int currentLocation;

	if (first >= last)
		return;

	currentLocation = partition(array, first, last); // place an element
	quicksort(array, first, currentLocation - 1); // sort left side

	quicksort(array, currentLocation + 1, last); // sort right side
}

int partition(int * const array, int left, int right)
{
	int position = left;

	while (true) {
		while (array[position] <= array[right] && position != right)
			--right;

		if (position == right)
			return position;

		if (array[position] > array[right]) {
			swap(&array[position], &array[right]);
			position = right;

		}

		while (array[left] <= array[position] && left != position)
			++left;

		if (position == left)
			return position;

		if (array[left] > array[position]) {
			swap(&array[position], &array[left]);
			position = left;

		}

	}
}

void swap(int * const ptr1, int * const ptr2)
{
	int temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
