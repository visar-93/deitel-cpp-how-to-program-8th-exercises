#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include<string>
using namespace std;

int quotient(int a, int b);
int remainder(int a, int b);
void seperate();

int main()
{
	int x;
	int y;

	cout << "Enter x: \n";
	cin >> x;
	cout << "Enter y: \n";
	cin >> y;

	cout << "The quotent for " << x << " \ " << y << " is " << quotient(x, y) << endl;
	cout << "The remainder for " << x << " \ " << y << " is " << remainder(x, y) << endl;
	cout << endl;
	seperate();

}
int quotient (int a, int b)
{
	return a / b;
}
int remainder(int a, int b)
{
	return a % b;
}
void seperate()
{
	int num;
	cout << "Enter a number between 1 and 32767.\n";
	cin >> num;

	if (num >= 1 && num <= 32767)
	{
		int num1, num2, num3, num4, num5;

		num1 = num / 10000;

		num2 = num % 10000;
		num2 = num2 / 1000;

		num3 = num % 1000;
		num3 = num3 / 100;

		num4 = num % 100;
		num4 = num4 / 10;

		num5 = num % 10;


		cout << num1 << "  " << num2 << "  " << num3 << "  " << num4 << "  " << num5 << endl;
	}
	else
		cout << "Wrong number entered.\n";

}
