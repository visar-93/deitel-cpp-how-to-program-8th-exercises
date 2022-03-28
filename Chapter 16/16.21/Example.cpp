#include "stdafx.h"
#include <iostream>
using namespace std;

class TestException
{
public:
	TestException(char *mPtr) : message(mPtr) {}
	void print() const { cout << message << '\n';}
private:
	char *message;
};

int main()
{
	try
	{
		throw TestException("This is a test");
	}
	catch (TestException &t)
	{
		t.print();
		throw TestException("This is another test");
	}
    return 0;
}


