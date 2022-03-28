#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;

bool prime(int number);
void primeCalculation();

int main()
{
	/*int number;
	cin >> number;
	bool res;
	res = prime(number);
	if (res == true)
	{
		cout << "This number is Prime.\n";
	}
	else
		cout << "This is not Prime.\n"; */
	primeCalculation();
	cout << endl;

};

bool prime(int number)
{
	int i;
	int num = 0;

	for (i = 1; i <= number; i++)
	{
		if ((number%i) == 0)
		{
			num = num + i;
		}
		else
		{
			num = num;
		}
	}
	if (num == (number+1))
	{
		return true;
	}
	else
	{
		return false;
	}
}
void primeCalculation()
{
	int number;
	bool res;

	for (number = 2; number <= 10000; number++)
	{
		res = prime(number);
		if (res == true)
		{
			cout << number << " is Prime Number.\n";
		}
	}
}
