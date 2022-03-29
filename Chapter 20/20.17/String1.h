#ifndef STRING1_H
#define STRING1_H

#include "stdafx.h"
#include <iostream>
using namespace std;

class String1
{
	friend ostream &operator<<(ostream &,const String1 &);
	friend istream &operator>>(istream &, String1 &);
public:
	String1(const char * = ""); // conversion constructor
	String1(const String1 &); // copy constructor
	~String1(); // destructor
	const String1 &operator=(const String1 &); // assignment
	String1 &operator+=(const String1 &); // concatenation
	bool operator!() const; // is Strin1 empty
	bool operator==(const String1 &)const; // test s1==s2
	bool operator!=(const String1 &)const; // test s1!=s2
	bool operator<(const String1 &)const; // test s1<s2
	bool operator>(const String1 &)const; // test s1>s2
	bool operator>=(const String1 &)const; // test s1>=s2
	bool operator<=(const String1 &)const; // test s1<=s2
	char &operator[](int); // return char reference
	String1 &operator() (int, int); // return a substring
	int getlength() const; // return string length
private:
	char *sPtr;  // pointer to start of string
	int length;  // string length
};
#endif // !String1_H

