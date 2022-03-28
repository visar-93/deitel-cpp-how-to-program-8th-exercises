#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Object
{
public:
	Object(int val) : value(val)
	{
		cout << "Object " << value << " constructor\n";
	}
	~Object()
	{
		cout << "Object " << value << " destructor\n";
	}
private:
	int value;
};

class Error
{
public:
	Error(string s) : text(s)
	{
		// empty body
	}
	void print() const
	{
		cout << "\n" << text << "\n";
	}
private:
	string text;
};

int main()
{
	try
	{
		Object a(1), b(2), c(3);
		cout << endl;
		throw Error("This is a test exceptioin");
	}
	catch (Error e)
	{
		e.print();
	}
	
    return 0;
}

