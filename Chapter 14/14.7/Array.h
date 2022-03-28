#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <cstdlib>
#include <cassert>
using namespace std;

template < class elementType, int numberOfElements >
class Array {
public:
	Array(); // default constructor
	~Array(); // destructor
	int getSize() const; // return size
	bool operator==(const Array &) const; // compare equal
	bool operator!=(const Array &) const; // compare !equal
	elementType &operator[](int); // subscript operator
	static int getArrayCount(); // Return count of
	// arrays instantiated.
	void inputArray(); // input the array elements
	void outputArray() const; // output the array elements
private:
	elementType ptr[numberOfElements]; // pointer to first element of array
	int size; // size of the array
	static int arrayCount; // # of Arrays instantiated

};

// Initialize static data member at file scope
template < class elementType, int numberOfElements >
int Array< elementType, numberOfElements >::arrayCount = 0; // no objects yet

// Default constructor for class Array
template < class elementType, int numberOfElements >
Array< elementType, numberOfElements >::Array()
{
	++arrayCount; // count one more object
	size = numberOfElements;

	for (int i = 0; i < size; ++i)
		ptr[i] = 0; // initialize array
}

// Destructor for class Array
template < class elementType, int numberOfElements >
Array< elementType, numberOfElements >::~Array() { --arrayCount; }

// Get the size of the array
template < class elementType, int numberOfElements >
int Array< elementType, numberOfElements >::getSize() const 
{
	return size;
}

// Determine if two arrays are equal and
// return true or false.
template < class elementType, int numberOfElements >
bool Array< elementType, numberOfElements >::
operator==(const Array &right) const
{
	if (size != right.size)
		return false; // arrays of different sizes

	for (int i = 0; i < size; ++i)
		if (ptr[i] != right.ptr[i])
			return false; // arrays are not equal

	return true; // arrays are equal
}

// Determine if two arrays are not equal and
// return true or false.
template < class elementType, int numberOfElements >
bool Array< elementType, numberOfElements >::
operator!=(const Array &right) const
{
	if (size != right.size)
		return true; // arrays of different sizes

	for (int i = 0; i < size; ++i)
		if (ptr[i] != right.ptr[i])
			return true; // arrays are not equal

	return false; // arrays are equal
}

// Overloaded subscript operator
template < class elementType, int numberOfElements >
elementType &Array< elementType, numberOfElements >::
operator[](int subscript)
{
	// check for subscript out of range error
	assert(0 <= subscript && subscript < size);

	return ptr[subscript]; // reference return creates lvalue
}

// Return the number of Array objects instantiated
template < class elementType, int numberOfElements >
int Array< elementType, numberOfElements >::getArrayCount()
{
	return arrayCount;
}

// Input values for entire array.
template < class elementType, int numberOfElements >
void Array< elementType, numberOfElements >::inputArray()
{
	for (int i = 0; i < size; ++i)
		cin >> ptr[i];
}

// Output the array values
template < class elementType, int numberOfElements >
void Array< elementType, numberOfElements >::outputArray() const
{
	for (int i = 0; i < size; ++i) {
		cout << ptr[i] << ' ';

		if ((i + 1) % 10 == 0)
			cout << '\n';

	}

	//if (i % 10 != 0)
		//cout << '\n';
}

#endif
