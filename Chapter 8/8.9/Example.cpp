#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	long value1, value2;
	value1 = 200000;
	long *longPtr;
	longPtr = &value1;
	cout << "Value of the object pointed by longPtr is: " << *longPtr << endl;
	value2 = *longPtr;
	cout << "Value of value2 is: " << value2 << endl;
	cout << "Address of value1 is: " << &value1 << endl;
	cout << "Address stored in longPtr is: " << longPtr << endl;
	if (longPtr == &value1)
		cout << "The printed value is the same as value1's address.\n";

	return 0;
}
