#include "stdafx.h"
#include <iostream>

using namespace std;



int smallest(int, int, int);

int main()
{
	int x, y, z;

	cin >> x >> y >> z;

	cout << "The smallest value is " << smallest(x, y, z) << endl;
}

int smallest(int a, int b, int c)
{
	int smallestValue = a;

	if (b < smallestValue)
		smallestValue = b;
	if (c < smallestValue)
		smallestValue = c;

	return smallestValue;
}
