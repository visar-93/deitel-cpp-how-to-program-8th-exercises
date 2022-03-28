#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	int z;
	
	cout << "Enter x: ";
	cin >> x;
	cout << endl;
	cout << "Enter y: ";
	cin >> y;
	
	if (x >= 0)
	{
		z = x + y;
		x = x + 1;
	}

	cout << z << endl;
	cout << x << endl;

    return 0;
} 

// In one statement it should be: z=x++ + y; 
// In one statement, assign the sum of the current value of x and y to z and postincrement the value of x.
