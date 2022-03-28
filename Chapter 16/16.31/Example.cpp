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
	throw TestException("TestException");
}
void g()
{
	f();
}

void h()
{
	g();

}
int main()
{
	try
	{
		h();
	}
	catch (TestException &t)
	{
		cerr << "In main: Caught ";
		t.print();
	}
	return 0;
}
