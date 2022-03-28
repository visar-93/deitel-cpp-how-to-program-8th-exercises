// DoubleSubscriptedArray class definition with overloaded operators.
#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H

#include "stdafx.h"
#include <iostream>
using namespace std;

class DoubleSubscriptedArray
{
	friend ostream &operator<<(ostream &, const DoubleSubscriptedArray &);
	friend istream &operator>>(istream &, DoubleSubscriptedArray &);
public:
	DoubleSubscriptedArray(int = 3, int = 3 ); // default constructor
	DoubleSubscriptedArray(const DoubleSubscriptedArray &); // copy constructor
	~DoubleSubscriptedArray(); // destructor
	int getRowSize() const; // return number of rows
	int getColumnSize() const; // return number of columns

	const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &); // assignment operator
	bool operator==(const DoubleSubscriptedArray &) const; // equality operator

										  // inequality operator; returns opposite of == operator
	bool operator!=(const DoubleSubscriptedArray &right) const
	{
		return !(*this == right); // invokes DoubleSubscriptedArray::operator==
	}

	// subscript operator for non-const objects returns modifiable lvalue
	int &operator() (int, int);

	// subscript operator for const objects returns rvalue
	int operator() (int, int) const;
private:
	int rowSize; // number if rows in array
	int columnSize; // number of columns in array
	int *ptr; // pointer to first element of pointer-based array
};

#endif // !DOUBLESUBSCRIPTEDARRAY_H
