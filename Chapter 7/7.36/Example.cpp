#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void stringReverse(const char[]);

int main()
{
	const int SIZE = 30;
	char strArray[SIZE] = "Print this string backwards.";
	cout << "Enter text: ";
	for (int loop = 0; loop < SIZE; ++loop)
		cout << strArray[loop];

	cout << endl;
	stringReverse(strArray);
	cout << endl;

	return 0;
}
void stringReverse(const char strArray[])
{
	if (strArray[0] == '\0')
		return;

	stringReverse(&strArray[1]);
	cout << strArray[0];
}
