#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string encrypt(const string &);
string decrypt(const string &);

int main()
{
	string string1("Avengers are made in Marvel Studios");
	string string2;
	string string3;

	string2 = encrypt(string1);
	string3 = decrypt(string2);
	cout << "string1 is: \n" << string1 << endl << endl;
	cout << "string2 - encrypted form of string1: \n" << string2 << endl << endl;
	cout << "string3 - decrypted form of string2: \n" << string3 << endl << endl;

	if (string1 == string3)
		cout << "string1 == string3, encrypting and decrypting is successfully performed.\n\n";

	return 0;
}

string encrypt(const string &refString)
{
	string newString = "";

	for (int i = 0; i < refString.length(); ++i)
	{
		char olD = refString[i];
		char neW;
		if (int(olD) >= 97 && int(olD) <= 122)
		{
			int sum = int(olD) + 13;
			if (sum > 122)
			{
				sum = sum - 122 + 96;
			}
			neW = sum - 32;
		}
		else if (int(olD) >= 65 && int(olD) <= 90)
		{
			int sum = int(olD) + 13;
			if (sum > 90)
			{
				sum = sum - 90 + 64;
			}
			neW = sum + 32;
		}
		else if (olD = ' ')
		{
			neW = ' ';
		}
		newString += neW;
	}

	return newString;
}
string decrypt(const string &refString)
{
	string newString = "";

	for (int i = 0; i < refString.length(); ++i)
	{
		char olD = refString[i];
		char neW;
		if (int(olD) >= 97 && int(olD) <= 122)
		{
			int sum = int(olD) - 13;
			if (sum < 97)
			{
				sum = sum + 122 - 96;
			}
			neW = sum - 32;
		}
		else if (int(olD) >= 65 && int(olD) <= 90)
		{
			int sum = int(olD) - 13;
			if (sum < 65)
			{
				sum = sum + 90 - 64;
			}
			neW = sum + 32;
		}
		else if (olD = ' ')
		{
			neW = ' ';
		}
		newString += neW;
	}
	return newString;
}
