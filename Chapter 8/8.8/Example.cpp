#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int Size = 5; //a)
	unsigned int value[Size] = { 2,4,6,8,10 };
	unsigned int *vPtr; // b)

	for (int i = 0; i < Size; ++i) // c)
		cout << value[i] << "  ";
	cout << endl;

	vPtr = &value[0]; //d)
	vPtr = value;

	for (int j = 0; j < Size; ++j) //e
		cout << *(vPtr + j) << "  ";
	cout << endl;

	for (int k = 0; k < Size; ++k) // f)
		cout << *(value + k) << "  ";
	cout << endl;

	for (int l = 0; l < Size; ++l) // g)
		cout << vPtr[l] << "  ";

	cout << value[4] << endl;
	cout << *(value + 4) << endl;
	cout << vPtr[4] << endl;
	cout << *(vPtr + 4) << endl;

	vPtr += 3;
	cout << "Address: " << vPtr << "    Value: " <<*vPtr << endl;
	for (int i = 0; i < Size; ++i)
		if (value[i] == *vPtr)
			cout << "The location is in element value[" << i << "]\n";

	vPtr = &value[4];
	vPtr -= 4;
	for (int i = 0; i < Size; ++i)
		if (value[i] == *vPtr)
			cout << "The address referenced by vPtr-=4 is " << vPtr
			<<" and the value stored in that location is: " << *vPtr;
	cout << endl;

	return 0;
}
