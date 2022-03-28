#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x;
	int y=0;
	int z;
	int s = 0;

	for (x = 0; x != -1; y++)
	{
		cout << "Enter x or -1 to exit: ";
		cin >> x;
		int k;

		if (s < x && x >=0)
		{
			k = x;
			s = k;
		}
		else if(x >= 0)
		{
			s = x;
		}		
	}

	cout << "The smallest is " << s << endl;

	return 0;
}
