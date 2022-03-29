#include "stdafx.h"
#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack<char> charStack; // create Stack of ints
	char c,b, string1[80], string2[80];
	char tempf, tempb;
	int i = 0;

	cout << "Enter a sentence:" << endl;

	while ((c = static_cast<char>(cin.get())) != '\n')
	{
		if (isalpha(c))
		{
			string1[i++] = c;
			charStack.push(c);
		}
	}

	string1[i] = '\0';

	i = 0;

	while (!charStack.isStackEmpty())
	{
		charStack.pop(c);
		string2[i++] = c;
	}
	string2[i] = '\0';

	cout << endl << endl;

	if (strcmp(string1, string2) == 0)
		cout << "\nThe sentence is a palindrome\n";
	else
		cout << "\nThe sentence is not a palindrome\n";

	cout << endl;

	return 0;
}
