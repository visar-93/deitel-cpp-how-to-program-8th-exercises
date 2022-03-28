#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int recursiveMinimum(vector<int> &, int, int);
void printArray(vector<int> &,int, int);

int main()
{
	vector<int> Point{ 1,2,3,4,5,6,7,8,9,10 };
	int first, last;
	cout << "Enter starting subscript: ";
	cin >> first;
	cout << "Enter last subscript: ";
	cin >> last;

	printArray(Point, first, last);
	cout << endl;
	int minimum = recursiveMinimum(Point, first, last);
	cout << "The smallest is: " << minimum << endl;
	cout << endl;

	return 0;
}

void printArray(vector<int> &array, int start, int end)
{
	cout << "  " << array[start];

	if (start == end)
		return;
	else
		printArray(array, start + 1, end);

}
int recursiveMinimum(vector<int> &array, int first, int last)
{
	int minimum = 10;
	for (size_t i = first; i <= last; ++i)
	{
		if (array[i] < minimum)
		{
			minimum = array[i];
		}
	}
	return minimum;
}
