#include "stdafx.h"
#include <iostream>
using namespace std;

// function template printArray definition
template<typename T>
void printArray(const T* const array, int count)
{
	for (int i = 0; i < count; ++i)
		cout << array[i] << " ";
	cout << endl;
}

void printArray(char const *array, int count)
{
	for (int i = 0; i < count; ++i)
	{
		cout << "\t" << array[i] << " ";
	}
	cout << endl;
}
int main()
{
	const int aCount = 5; // size of array a
	const int bCount = 7; // size of array b
	const int cCount = 6; // size of array c

	int a[aCount] = { 1,2,3,4,5 };
	double b[bCount] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7 };
	char c[cCount] = "HELLO"; // 6th position for null  ( /0)

	cout << "Array a contains:" << endl;

	// call integer function-template specialization
	printArray(a, aCount);

	cout << "Array b contains:" << endl;

	// call double function-template specialization
	printArray(b, bCount);

	cout << "Array c contains:" << endl;

	// call char function-template specialization
	printArray(c, cCount);

	cout << "\n\nArray c printed in non-template function:\n";
	printArray(c, cCount);

	return 0;
}
