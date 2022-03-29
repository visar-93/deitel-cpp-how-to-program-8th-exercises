#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string string1;
	cout << "Enter a sentence: \n";
	getline(cin, string1);
	string::const_reverse_iterator iterator1 = string1.rbegin();
	cout << "Using iterators reverse form of string above is: \n";

	// iterate through string
	while (iterator1 != string1.rend())
	{
		cout << *iterator1; // dereference iterator to get char
		++iterator1; // advande iterator to next char
	}

	cout << endl;
}
