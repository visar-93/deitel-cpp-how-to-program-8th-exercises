#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double number1, number2;
	number1 = 7.3;
	char * ptr;
	char s1[100];
	char s2[100];

	//a)
	double *fPtr;
	///b)
	fPtr = &number1;
	//c)
	cout << "*fPtr = " << *fPtr << endl;
	//d)
	number2 = *fPtr;
	//e)
	cout << "number2 = *fPtr = " << number2 << endl;
	//f)
	cout << "address of number 1 is : " << &number1 << endl;
	//g)
	cout << "address stored in fPtr is :  " << fPtr << endl;
	if (fPtr == &number1)
		cout << "Address stored in fPtr is the same as the address of number1\n";
	return 0;
}
