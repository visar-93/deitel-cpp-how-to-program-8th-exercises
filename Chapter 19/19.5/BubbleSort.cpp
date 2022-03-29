// Class BubbleSort member-function definition
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "BubbleSort.h"
using namespace std;

// constructor will intialize vector with random integers
BubbleSort::BubbleSort(int vectorSize)
{
	size = (vectorSize > 0 ? vectorSize : 10); // validate vector size
	srand(time(0));

	// fill vector with random int in range 10-99
	for (int i = 0; i < size; ++i)
		data.push_back(10 + rand() % 90);
}

// bubble sort 
void BubbleSort::sort()
{
	for(int i=0; i < size; ++i)
		for (int j = 0; j < size-1; ++j)
		{
			int value;
			if (data[j] > data[j + 1])
			{
				value = data[j];
				data[j] = data[j + 1];
				data[j + 1] = value;
			}
		}
}

void BubbleSort::displayElements() const
{
	for (int i = 0; i < size; ++i)
		cout << data[i] << " ";
}
