#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class TestException1
{
public:
	TestException1(string m)
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

class TestException2
{
public:
	TestException2(string m)
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
	throw TestException1("TestException1");
}
void g()
{
	try
	{
		f();
	}
	catch (TestException2 &t2)
	{
		cerr << "In g: Caought ";
		t2.print();
	}
}
int main()
{
	try
	{
		g();
	}
	catch (TestException1 &t1)
	{
		cerr << "In main: Caught ";
		t1.print();
	}
	return 0;
}
