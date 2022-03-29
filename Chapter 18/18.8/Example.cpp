#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string string1("Testing iterators");
	string::const_reverse_iterator iterator1 = string1.rbegin();

	cout << "string1 = " << string1
		<< "\n(Using iterator iterator1) string1 is: ";

	// iterate through string
	while (iterator1 != string1.rend())
	{
		cout << *iterator1; // dereference iterator to get char
		++iterator1; // advande iterator to next char
	}

	cout << endl;
}
