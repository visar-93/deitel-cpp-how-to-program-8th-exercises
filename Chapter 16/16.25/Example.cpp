#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// A sample exception class
class ExceptionClass
{
public:
	ExceptionClass()
		: message("An exception was thrown")
	{
		//empty body	
	}
	void print() const
	{
		cerr << "\n" << message << "\n";
	}
private:
	string message;
};

// A class from which to build member objects
class Member
{
public:
	Member(int val)
		: value(val)
	{
		cout << "Member object " << value << " constructor called\n";

		if (value == 3)
			throw ExceptionClass();
	}
	~Member()
	{
		cout << "Member object " << value << " destructor called\n";
	}
private:
	int value;
};

// A class to encapsulate objects of class Member
class Encapsulate
{
public:
	Encapsulate()
		:m1(1), m2(2), m3(3), m4(4), m5(5)
	{
		// empty body 
	}
private:
	Member m1, m2, m3, m4, m5;
};
int main()
{
	cout << "Constructing an object of class Encapsulate\n";
	
	try
	{
		Encapsulate e;
	}
	catch (ExceptionClass except)
	{
		except.print();
	}
    return 0;
}

