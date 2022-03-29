// BinarySearch class member-function definition.
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "BinarySearch.h"
using namespace std;

// constructor initializes vector with random ints and sorts the vector
BinarySearch::BinarySearch(int vectorSize)
{
	size = (vectorSize > 0 ? vectorSize : 10); // validate vectorSize
	srand(time(0)); // seed using current time

	// fill vector with random ints in range 10-99
	for (int i = 0; i < size; ++i)
		data.push_back(10 + rand() % 90); // 10-99

	sort(data.begin(), data.end()); // sort the data
}

// peint rform a binary search on data
int BinarySearch::binarySearch(int searchElement, int startingIndex, int endingIndex) const
{
	int middle = (startingIndex + endingIndex + 1) / 2; // middle element
	int location = -1; // return value; -1 if not found
	displaySubElements(startingIndex, endingIndex);

	for (int i = 0; i < middle; ++i)
		cout << "   ";
	cout << " * " << endl; // incidate current middle

	if (searchElement == data[middle])
	{
		location = middle;
	}
	else if (searchElement < data[middle])
	{
		endingIndex = middle - 1;
	}
	else if (searchElement > data[middle])
	{
		startingIndex = middle + 1;
	}

	if (((startingIndex <= endingIndex) && (location == -1)) == false) {
		return location;
	}

	return binarySearch(searchElement, startingIndex, endingIndex);
}

// display values in vector
void BinarySearch::displayElements() const
{
	displaySubElements(0, size - 1);
}

// display certain values in vector
void BinarySearch::displaySubElements(int low, int high) const
{
	for (int i = 0; i < low; ++i) // output spaces for alignment
		cout << "   ";

	for (int i = low; i <= high; ++i)
		cout << data[i] << " ";

	cout << endl;
}

