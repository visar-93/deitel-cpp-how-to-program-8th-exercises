#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;

int gcd(int x, int y);

int main()
{
	int num1, num2;
	cout << "Enter number 1 and number 2: \n";
	cin >> num1;
	cin >> num2;
	cout << "The greatest Comon Divisor is: " << gcd(num1, num2) << endl;
	cout << endl;
};

int gcd(int x, int y)
{
	if (y < 1)
		return x;
	else
		return gcd(y, x % y);
	
}
