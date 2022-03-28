#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int value;

	cout << "Enter value: ";
	cin >> value;

	switch (value % 2)
	{
	case 0:
		cout << "Even integer" << endl;
		break;
	case 1:
		cout << "Odd integer" << endl;
		break;
	}
}
