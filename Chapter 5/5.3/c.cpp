#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter n: ";
	cin >> n;

	if (n != EOF)
	{
		switch (n)
		{
		case 1:
			cout << "The number is 1" << endl;
			break;
		case 2:
			cout << "The number is 2" << endl;
			break;
			
		default:
			cout << "The number is not 1 or 2" << endl;
			break;
		}
	}

}
