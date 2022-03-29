#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

bool stringTest(const string &);

int main()
{
	string string1, string2, string3, string4, string5, string6;

	cout << "Enter 6 texts: \n";
	cin >> string1;
	cin >> string2;
	cin >> string3;
	cin >> string4;
	cin >> string5;
	cin >> string6;

	cout << "\nPrint only strings that ends with \"r\" or \"ay\" : " << endl;
	if (stringTest(string1) == true)
		cout << string1 << endl;
	if (stringTest(string2) == true)
		cout << string2 << endl;
	if (stringTest(string3) == true)
		cout << string3 << endl;
	if (stringTest(string4) == true)
		cout << string4 << endl;
	if (stringTest(string5) == true)
		cout << string5 << endl;
	if (stringTest(string6) == true)
		cout << string6 << endl;

	cout << endl;
}
bool stringTest(const string &refString)
{
	if (refString[refString.length()-1] == 'r' || (refString[refString.length() - 2] =='a' && refString[refString.length() - 1] == 'y'))
		return true;
}
