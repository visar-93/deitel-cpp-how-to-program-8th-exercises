#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char vowels[10] = { 'a','A', 'e','E', 'i','I','o','O','u','U' };
	string sentence = "";
	int count = 0, counta = 0, counte = 0, counti = 0, counto = 0, countu = 0;

	cout << "Enter a sentence: \n";
	getline(cin, sentence);

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < sentence.size(); ++j)
		{
			if (sentence[j] == vowels[i])
			{
				switch (vowels[i])
				{
				case 'A':
				case 'a':
					++counta;
					break;

				case 'E':
				case 'e':
					++counte;
					break;

				case 'I':
				case 'i':
					++counti;
					break;

				case 'O':
				case 'o':
					++counto;
					break;

				case 'U':
				case 'u':
					++countu;
					break;
				}
				++count;
			}
		}
	}

	cout << "\nWe have " << count << " vowels, seperately as below:"
		<< "\na or A: " << counta
		<< "\ne or E: " << counte
		<< "\ni or I: " << counti
		<< "\no or O: " << counto
		<< "\nu or U: " << countu
		<< endl << endl;

	return 0;
}


