#include "stdafx.h"
#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack<char> charStack; // create Stack of ints
	char c;

	cout << "Enter a sentence:" << endl;

	while ((c = static_cast<char>(cin.get())) != '\n')
		charStack.push(c);

	cout << "\nThe sentence in reverse is:\n";

	while (!charStack.isStackEmpty())
	{
		charStack.pop(c);
		cout << c;
	}
	cout << '\n';

	return 0;
}
