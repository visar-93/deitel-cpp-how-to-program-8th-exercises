#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string convertAndBackward(const string &);

int main()
{
	string string1("Hello");
	string string2;
	string2 = convertAndBackward(string1);

	cout << string1 << endl << string2 << endl;

	return 0;
}
string convertAndBackward(const string &refString)
{
	string newString = "";

	for (int i = refString.length()-1; i >= 0; --i)
	{
		char olD = refString[i];
		char neW;
		if (int(olD) >= 97 && int(olD) <= 122)
		{
			int sum = int(olD) - 32;
			neW = sum;
		}
		else if (int(olD) >= 65 && int(olD) <= 90)
		{
			int sum = int(olD) + 32;
			neW = sum;
		}
		newString += neW;
	}

	return newString;
}
