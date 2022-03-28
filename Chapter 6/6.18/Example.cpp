#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int integerPower(int base, int exp);

int main()
{
	int base, exp;

	cout << "Enter base: ";
	cin >> base;
	cout << "Enter exponent: ";
	cin >> exp;
	cout << base << " in power of " << exp << " is equal to: " << integerPower(base, exp) << endl;
}

int integerPower(int base, int exp)
{
	int count = 1;
	double power=1;
	for (count = 1; count <= exp; count++)
	{
		power = power * base;
	}
	return power;
}
