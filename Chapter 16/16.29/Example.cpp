#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class TestException
{
public:
	TestException(string m)
		: message(m)
	{
		// empty body
	}
	void print() const
	{
		cout << message << endl;
	}
private:
	string message;
};

void f()
{
	throw TestException("Test exception thrown");
}
void g()
{
	try
	{
		f();
	}
	catch (...)
	{
		cerr << "Exception caught in function g(). Rethrowing...\n";
		throw;
	}
}
int main()
{
	try
	{
		g();
	}
	catch (...)
	{
		cerr << "Exception caught in function main()\n";
	}
	return 0;
}
