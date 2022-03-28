#include "stdafx.h"
#include <iostream>
using namespace std;

// function template printArray definition
template<  class T>
int printArray(T const * const array, int size, int lowSubscript, int highSubscript)
{
	int count = 0;

	if (size < 0 || lowSubscript < 0 || highSubscript >= size)
		return 0;

	for (int i = lowSubscript; i <= highSubscript; ++i)
	{
		++count;
		cout << array[i] << ' ';
	}
	cout << '\n';
	return count; // number of elements output
}

int main()
{
	const int aCount = 5; // size of array a
	const int bCount = 7; // size of array b
	const int cCount = 6; // size of array c

	int a[aCount] = { 1,2,3,4,5 };
	double b[bCount] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7 };
	char c[cCount] = "HELLO"; // 6th position for null  ( /0)
	int elements;

	cout << "\nArray a contains:" << endl;
	elements = printArray(a, aCount, 0, aCount - 1);
	cout << elements << " emenets were output\n";

	cout << "Array a from 1 to 3 is:\n";
	elements = printArray(a, aCount, 1, 3);
	cout << elements << " elements were output\n";

	cout << "Array a output with invalid subscrips:\n";
	elements = printArray(a, aCount, -1,10);
	cout << elements << " elements were output\n\n";

	cout << "Array b contains:" << endl;
	elements = printArray(b, bCount, 0 , bCount-1);
	cout << elements << " elements were output\n";

	cout << "Array a from 1 to 3 is: \n";
	elements = printArray(b, bCount, 1, 3);
	cout << elements << " elements were output\n";

	cout << "Array a output with invalid subscripts:\n";
	elements = printArray(b, bCount, -1, 10);
	cout << elements << " elements were output\n\n";

	cout << "Array c contains:" << endl;
	elements = printArray(c, cCount, 0, cCount - 1);
	cout << elements << " elements were output\n";

	cout << "Array c from 1 to 3 is: \n";
	elements = printArray(c, cCount, 1, 3);
	cout << elements << " elements were output\n";

	cout << "Array c output invalid subscripts:\n";
	elements = printArray(c, cCount, -1, 10);
	cout << elements << " elements were output\n\n";

	return 0;
}

