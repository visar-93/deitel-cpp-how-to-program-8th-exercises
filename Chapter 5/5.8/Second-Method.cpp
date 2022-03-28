#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	int z;
	int s = 0;

	cout << "How many integers will be entered: ";
	cin >> x;

	for (y = 1; y <= x; y++)
	{
		cout << "Integer: ";
		cin >> z;

		if (y == 1)
		{
			s = z;
		}
	
		if (z < s)
		{
			s = z;
		}
	}

	cout << "The smallest is " << s << endl;
	return 0;
}
