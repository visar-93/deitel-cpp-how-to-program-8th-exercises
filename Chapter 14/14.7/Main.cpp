#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <typeinfo>
#include "Array.h" // Array class template definition

using namespace std;

int main()
{
	Array< int, 5 > intArray;

	cout << "Enter " << intArray.getSize() << " integer values:\n";
	intArray.inputArray();

	cout << "\nThe values in intArray are:\n";
	intArray.outputArray();

	Array< float, 5 > floatArray;

	cout << "\nEnter " << floatArray.getSize()
		<< " floating point values:\n";
	floatArray.inputArray();

	cout << "\nThe values in the double array are:\n";
	floatArray.outputArray();

	return 0;
}
