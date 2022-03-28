#include "stdafx.h"
#include <iostream>
#include <iomanip>
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
		int k;

		if (s < z)
		{
			k = z;
			s = k;
		}
		else 
		{
			s = z;
		}		
	}

	cout << "The smallest is " << s << endl;

	return 0;
}
