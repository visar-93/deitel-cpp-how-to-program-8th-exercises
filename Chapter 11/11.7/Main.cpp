#include "stdafx.h"
#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
	DoubleSubscriptedArray integers1(2,4); // 2 x 4-element DoubleSubscriptedArray
	DoubleSubscriptedArray integers2; // 3 x 3-element DoubleSubscriptedArray by default

					 // print integers1 size and contents
	cout << "Size of Array integers1 is "
		<< integers1.getRowSize() << " x " << integers1.getColumnSize()
		<< "\nArray after initialization:\n" << integers1;

	// print integers2 size and contents
	cout << "\nSize of Array integers2 is "
		<< integers2.getRowSize() << " x " << integers2.getColumnSize()
		<< "\nArray after initialization:\n" << integers2;

	// input and print integers1 and integers2
	cout << "\nEnter " << ((integers1.getRowSize() * integers1.getColumnSize()) +
		(integers2.getRowSize() * integers2.getColumnSize())) << " integers:" << endl;
	cin >> integers1 >> integers2;

	cout << "\nAfter input, the Arrays contain:\n"
		<< "integers1:\n" << integers1
		<< "\nintegers2:\n" << integers2;

	// use overloaded inequality (!=) operator
	cout << "\nEvaluating: integers1 != integers2" << endl;

	if (integers1 != integers2)
		cout << "integers1 and integers2 are not equal" << endl;

	// create DoubleSubscriptedArray integers3 using integers1 as an
	// initializer; print size and contents
	DoubleSubscriptedArray integers3(integers1); // invokes copy constructor

	cout << "\nSize of Array integers3 is "
		<< integers3.getRowSize() << " x " << integers3.getColumnSize()
		<< "\nArray after initialization:\n" << integers3;

	// use overloaded assignment (=) operator
	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2; // note target DoubleSubscriptedArray (integers1) is smaller
						   // than source DoubleSubscriptedArray (integers2)
	cout << "integers1:\n" << integers1
		<< "\nintegers2:\n" << integers2;

	// use overloaded equality (==) operator
	cout << "\nEvaluating: integers1 == integers2" << endl;

	if (integers1 == integers2)
		cout << "integers1 and integers2 are equal" << endl;

	// use overloaded subscript operator to create rvalue
	cout << "\nintegers1(1,2) is " << integers1(1,2);

	// use overlodaded subscript operator to create lvalue
	cout << "\n\nAssigning 1000 to integers1(1,2)" << endl;
	integers1(1, 2) = 1000;
	cout << "integers1:\n" << integers1;

	// attempt to use out-of-range subscript
	try
	{
		cout << "\nAttempt to assign 1000 to integers1(1,2)" << endl;
		integers1(1, 2) = 1000; // ERROR: subscript out of range
	}
	catch (out_of_range &ex)
	{
		cout << "An exception occurred: " << ex.what() << endl;
	}
	return 0;
}

