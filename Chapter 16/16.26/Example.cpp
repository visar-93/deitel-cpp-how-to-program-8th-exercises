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

void generateException();

int main()
{
	try
	{
		generateException();
	}
	catch (...)
	{
		cerr << "The \"catch all\" exception handler was invoked\n";
	}
    return 0;
}

void generateException()
{
	throw ExceptionClass();
}

