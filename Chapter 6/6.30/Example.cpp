#include "stdafx.h"
#include <iostream>
using namespace std;

int reverse(int number);

int main()
{
	int num;
	cout << "Enter a number\n";
	cin >> num;
	cout << reverse(num);
};

int reverse(int number)
{
	int rev=0;

	while((number) >=1)
	{
		rev = rev*10 + number % 10;
		number = number / 10;
	}

	return rev;
}
