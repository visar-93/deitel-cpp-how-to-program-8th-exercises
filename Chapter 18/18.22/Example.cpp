#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void iteration(const string &refString, string::const_reverse_iterator &it);

int main()
{
	string string1;
	cout << "Enter a sentence: \n";
	getline(cin, string1);
	string::const_reverse_iterator iterator1 = string1.rbegin();
	cout << "Using iterators reverse form of string above is: \n";
	iteration(string1, iterator1);
	// iterate through string
	
	cout << endl;
}

void iteration(const string &refString, string::const_reverse_iterator &it)
{
	if (it != refString.rend())
	{
		cout << *it; // dereference iterator to get char
		it++;
		iteration(refString, it); // advande iterator to next char
	}
}
