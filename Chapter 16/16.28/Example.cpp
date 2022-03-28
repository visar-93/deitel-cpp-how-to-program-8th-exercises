#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class InvalidIDNumberError
{
public:
	InvalidIDNumberError(string error)
		: errorMessage(error)
	{
		// empty body
	}
	void print() const
	{
		cerr << errorMessage;
	}
private:
	string errorMessage;
};

class TestInvalidIDNumberError
{
public:
	TestInvalidIDNumberError(int id)
		: idNumber(id)
	{
		cout << "Constructor for object " << idNumber << "\n";

		if (idNumber < 0)
			throw InvalidIDNumberError("ERROR: Negative ID number");
	}
private:
	int idNumber;
};
int main()
{
	try
	{
		TestInvalidIDNumberError valid(10), invalid(-1);
	}
	catch (InvalidIDNumberError &error)
	{
		error.print();
		cout << endl;
	}
	return 0;
}

