#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, dec;

	cout << "Please enter a binary number with ten digits (or -1 to quit).\n";
	cin >> num;

	num1 = num / 1000000000;
	cout << num1 << endl;

	num2 = num % 1000000000;
	num2 = num2 / 100000000;
	cout << num2 << endl;

	num3 = num % 100000000;
	num3 = num3 / 10000000;
	cout << num3 << endl;

	num4 = num % 10000000;
	num4 = num4 / 1000000;
	cout << num4 << endl;

	num5 = num % 1000000;
	num5 = num5 / 100000;
	cout << num5 << endl;

	num6 = num % 100000;
	num6 = num6 / 10000;
	cout << num6 << endl;

	num7 = num % 10000;
	num7 = num7 / 1000;
	cout << num7 << endl;

	num8 = num % 1000;
	num8 = num8 / 100;
	cout << num8 << endl;

	num9 = num % 100;
	num9 = num9 / 10;
	cout << num9 << endl;

	num10 = num % 10;
	cout << num10 << endl;

	if (num != -1)
	{
		dec = num10 * (1) + num9 * (2) + num8 * (4) + num7 * (8) + num6 * (16) + num5 * (32) + num4 * (64) + num3 * (128)
			+ num2 * (256) + num1 * (512);
		cout << "Equivalent decimal number is: " << dec << endl;
	}

	return 0;
}

