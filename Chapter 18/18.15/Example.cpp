#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string encrypt(const string &);

int main()
{
	string string1("Avengers are made in Marves Studios");
	string string2;
	string string3;

	string2 = encrypt(string1);
	string3.assign(string2);
	cout << "string1 is: \n" << string1 << endl << endl;
	cout << "string2 - encrypted form of string1: \n" << string2 << endl << endl;
	
	char encryptedLetter;
	char decryptedLetter;

	for (int i = 0; i < string1.length(); ++i)
	{
		if (string2[i] == ' ')
		{
			string3.replace(i, 1, " ");			
		}
		else
		{
			cout << "Enter letter from encrypted string: ";
			cin >> encryptedLetter;
			cout << "Enter letter you think it's decrypted: ";
			cin >> decryptedLetter;

			if (encryptedLetter = string2[i] && decryptedLetter == string1[i])
			{
				cout << "You're correct!\n";
				//string4 += decryptedLetter;
				string3.replace(i, 1, string(1, decryptedLetter));
			}
			else
			{
				while (encryptedLetter != string2[i] || decryptedLetter != string1[i])
				{
					cout << "You're wrong!\n"
						<< "Enter again the letter from encrypted string: ";
					cin >> encryptedLetter;
					cout << "Enter again the letter you think it's decrypted: ";
					cin >> decryptedLetter;
					if (encryptedLetter = string2[i] && decryptedLetter == string1[i])
					{
						cout << "You're correct!\n";
						string3.replace(i, 1, string(1, decryptedLetter));
						break;
					}
				}
			}
		}
		cout << endl << string3 << endl;
	}

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

