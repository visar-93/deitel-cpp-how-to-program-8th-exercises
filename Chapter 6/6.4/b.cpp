#include "stdafx.h"
#include <iostream>

using namespace std;

int smallest(int x, int y, int z);

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	cout << "The smallest value is " << smallest(a, b, c) << endl;
}

int smallest (int x, int y, int z)
{
	int smallestValue = x;

	if (y < smallestValue)
		smallestValue = y;
	if (z < smallestValue)
		smallestValue = z;

	return smallestValue;
}
