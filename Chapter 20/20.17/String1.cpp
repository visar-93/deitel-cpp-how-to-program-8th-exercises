#include"stdafx.h"	
#include<iostream>
#include<iomanip>
#include<string>
#include<cassert>
#include "String2.h"
using namespace std;

String1::String1(const char *ptr) // conversion constructor, convert char* to string
{
	length = strlen(ptr); // compute length
	sPtr = new char[length + 1]; // allocate storage
	assert(sPtr != 0); // Termnate if memory not allocated
	strcpy(sPtr, ptr); // copy literal to object
}

String1::String1(const String1 &copy) // copy constructor
{
	length = copy.length;  // copy length
	sPtr = new char[length + 1]; // allocate storage
	assert(sPtr != 0); // ensure memory allocated
	strcpy(sPtr, copy.sPtr); // copy string
}

String1::~String1() // destructor
{
	delete[] sPtr;  // reclaim string
}

// Overloaded = operator, avoids self assignment
const String1 &String1::operator=(const String1 &right)
{
	if (&right != this) // avoid self assignment
	{
		delete[] sPtr;  // prevent memory leak
		length = right.length; // new String lenght
		sPtr = new char[length + 1]; // allocate memory
		assert(sPtr != 0); // ensure memory allocated
		strcpy(sPtr, right.sPtr); // copy string
	}
	else
		cout << "Attempted assignment of a String to itself\n";

	return *this; // enables concatenated assignment
}

// Concatenate right operand to this object and
// store in this object.
String1 &String1::operator+=(const String1 &right)
{
	char *tempPtr = sPtr; // hold to be able to delete
	length += right.length; // new String length
	sPtr = new char[length + 1]; // create new space
	assert(sPtr != 0); // terminate if memory is not allocated
	strcpy(sPtr, tempPtr); // left part to new String 
	strcat(sPtr, right.sPtr); // right part of new String
	delete[]tempPtr; // reclaim old space
	return *this; // enables concatenated calls
}

bool String1::operator!() const // is the string empty
{
	return length == 0;
}

bool String1::operator==(const String1 &right) const // is this string equal
{                                                    //  to right string
	return strcmp(sPtr, right.sPtr) == 0;
}

bool String1::operator!=(const String1 &right)const // is this string not 
{                                                   // equal to right string
	return strcmp(sPtr, right.sPtr) != 0;
}

bool String1::operator<(const String1 &right) const // is string less than
{                                                   // right string
	return strcmp(sPtr, right.sPtr) < 0;
}

bool String1::operator>(const String1 &right) const // is this string greater
{                                                   // than right string
	return strcmp(sPtr, right.sPtr) > 0;
}

bool String1::operator>=(const String1 &right) const // is this string greater
{                                                    // or equal with right string
	return strcmp(sPtr, right.sPtr) >= 0;
}

bool String1::operator<=(const String1 &right) const // is this string less
{                                                    // or equal with right string
	return strcmp(sPtr, right.sPtr) <= 0;
}

// Return a reference to a character in a String
char &String1::operator[](int subscript)
{
	// First test for subscript out of range
	assert(subscript>=0 && subscript < length);
	return sPtr[subscript]; // creates lvalue
}

// Return a substring beginning at index and
// of length subLength as a reference to a String object
String1 &String1::operator()(int index, int subLength)
{
	// ensure index is in range and substring length>=0
	assert(index >= 0 && index < length && subLength >= 0);

	String1 *subPtr = new String1; // empty String
	assert(subLength != 0);        // ensure new String is allocated

	// determine length of subString
	if ((subLength == 0) || (index + subLength > length))
		subPtr->length = length - index + 1;
	else
		subPtr->length = subLength + 1;

	// allocate memory for substring
	delete subPtr->sPtr; // delete character from object
	subPtr->sPtr = new char[subPtr->length]; 
	assert(subPtr->sPtr != 0); // ensure space allocated

	// copy substring into new String
	strncpy(subPtr->sPtr, &sPtr[index], subPtr->length);
	subPtr->sPtr[subPtr->length] = '\0'; // terminate new string

	return *subPtr;   // return new String
}

int String1::getlength() const // return string length
{
	return length;
}

// Overloaded output operator
ostream &operator<<(ostream &output, const String1 &s)
{
	output << s.sPtr;
	return output;  // enables concatenation
}

// Overloaded input operator
istream &operator>>(istream &input, String1 &s)
{
	char temp[100];  // buffer to store input

	input >> setw(100) >> temp;
	s = temp;  // use String class assignment operator
	return input; // enables concatenation
}
