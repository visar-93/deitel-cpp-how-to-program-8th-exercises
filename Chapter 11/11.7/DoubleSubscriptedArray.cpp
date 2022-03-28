// DoubleSubscriptedArray class member - and friend-function definitions.
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "DoubleSubscriptedArray.h"
using namespace std;

// default construcctor for class DoubleSubscriptedArray 
DoubleSubscriptedArray::DoubleSubscriptedArray(int arrayRowSize, int arrayColumnSize)
{
	// validate arrayRowSize
	if (arrayRowSize > 0)
		rowSize = arrayRowSize;
	else
		rowSize = 3;
	// validate arrayColumnSize
	if (arrayColumnSize > 0)
		columnSize = arrayColumnSize;
	else
		columnSize = 3;

	ptr = new int[rowSize * columnSize]; //create space for pointer-based array

	for (int i = 0; i < (rowSize * columnSize); i++)
		ptr[i] = 0; // set pointer-based array element
}

// copy constructor for class DoubleSubscriptedArray;
// must receive a reference to prevent infinite recursion
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &arrayToCopy)
	:rowSize(arrayToCopy.rowSize), columnSize(arrayToCopy.columnSize)
{
	ptr = new int[rowSize*columnSize];

	for (int i = 0; i < (rowSize*columnSize); i++)
		ptr[i] = arrayToCopy.ptr[i]; // copy into object
}

// destructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
	delete[]ptr; // release pointer-based array space
}

// return number of rows of DoubleSubscriptedArray
int DoubleSubscriptedArray::getRowSize() const
{
	return rowSize;
}

// return number of columns of DoubleSubscriptedArray
int DoubleSubscriptedArray::getColumnSize() const
{
	return columnSize;
}
// overloaded assignment operator;
// const return aboids: (a1=a2) = a3
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
	if (&right != this) // avoid left assignment
	{
		// for Arrays of different sizes, deallocate original
		// left-side array, then allocate new left-size array
		if (rowSize*columnSize != right.rowSize * right.columnSize)
		{
			delete[]ptr; // release space
			rowSize = right.rowSize; // resize this object
			columnSize = right.columnSize;
			ptr = new int[rowSize * columnSize]; // create space for array copy
		} //  end inner if

		for (int i = 0; i < (rowSize * columnSize); i++)
			ptr[i] = right.ptr[i]; // copy array into objects
	} // end outer if

	return *this;
} // end function operator=

  // determine if to Arrays are equal and
  // return true, otherwise return false
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const
{
	if (rowSize * columnSize != right.rowSize * right.columnSize)
		return false; // arrays of different number of elements

	for (int i = 0; i < (rowSize * columnSize); i++)
		if (ptr[i] != right.ptr[i])
			return false; // array contents are not equal

	return true; // Arrays are equal
}

// overloaded subtrict operator for non-const Arrays;
// reference return creates a modifiable lvalue
int &DoubleSubscriptedArray::operator()(int rowSubscript, int columnSubscript)
{
	// check for subscript out-of-range error
	if ((rowSubscript < 0 || rowSubscript >= rowSize) ||
		(columnSubscript < 0 || columnSubscript >= columnSize))
		throw out_of_range("Subscript out of range");

	return ptr[(rowSubscript*columnSize) + columnSubscript]; // reference return
}

// overloaded substricpt operator for const Arrays
// const reference return creates an rvalue
int DoubleSubscriptedArray::operator()(int rowSubscript, int columnSubscript)const
{
	// chech for subscript out-of-range error
	if ((rowSubscript < 0 || rowSubscript >= rowSize) ||
		(columnSubscript < 0 || columnSubscript >= columnSize))
		throw out_of_range("Subscript out of range");

	return ptr[(rowSubscript*columnSize) + columnSubscript]; // returns copy of this element
}

// overloaded input operator for class DoubleSubscriptedArray;
// inputs values for entire DoubleSubscriptedArray
istream &operator>>(istream &input, DoubleSubscriptedArray &a)
{
	for (int i = 0; i < a.rowSize * a.columnSize; i++)
		input >> a.ptr[i];

	return input; // enables cin >> x >> y;
}

// overloaded output operator for class DoubleSubscriptedArray
ostream &operator<<(ostream &output, const DoubleSubscriptedArray &a)
{
	// output private ptr-based array
	for (int i = 0; i < a.rowSize; i++)
	{
		for (int j = 0; j < a.columnSize; j++)
			output << setw(4)<<a.ptr[(i*a.columnSize) + j] << ' ';

		output << endl;
	}

	return output;
}
