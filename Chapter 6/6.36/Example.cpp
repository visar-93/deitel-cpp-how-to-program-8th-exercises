#include "stdafx.h"
#include <iostream>
using namespace std;

int power(int x, int y);

int main()
{
	int base;
	int exponent;
	cout << "Enter base: ";
	cin >> base;
	cout << "Enter exponent: ";
	cin >> exponent;
	
	cout << base << " in the power of " << exponent << " is equal to " << power(base, exponent) << endl;

};
int power(int x, int y)
{
	int pow=1;

	for (y; y >= 1; y--)
	{
		pow = pow * x;
	} 

	return pow;
}
