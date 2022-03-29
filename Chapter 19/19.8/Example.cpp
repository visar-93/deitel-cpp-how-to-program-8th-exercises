#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;

int recursiveLinearSearch(vector<int>, int, int);

int main()
{
	vector<int> data;

	for (int i = 0; i < 10; ++i)
		data.push_back(2 * i);

	int searchKey;
	cout << "Enter integer search key: ";
	cin >> searchKey;

	int element = recursiveLinearSearch(data, searchKey, 0);

	if (element != -1)
		cout << "Found value in element " << element << endl;
	else
		cout << "Value not found" << endl;

	return 0;
}

// Compare key to every element of array until location is
// found or until end of array is reached; return subscript of
// element if key is found or -1 if key not found
int recursiveLinearSearch(vector<int> array, int key, int index)
{
	if (array[index] == key)
		return index;
	else if (index >= array.size()-1)
		return -1;
	else
		return recursiveLinearSearch(array, key, index + 1);

	return -1;
}
