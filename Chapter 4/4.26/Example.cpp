#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num, num1, num2, num3, num4, num5;
	cout << "Please enter a number with five digits (or -1 to quit).\n";
	cin >> num;

	num1 = num / 10000;
	
	num2 = num % 10000;
	num2 = num2 / 1000;
	
	num3 = num % 1000;
	num3 = num3 / 100;
	
	num4 = num % 100;
	num4 = num4 / 10;

	num5 = num % 10;
	
	if (num != -1)
	{
		if (num1 == num5 && num2 == num4)
			cout << "This number is a palindrome.\n";
		else
			cout << "This number is not a palindrome.\n";
	}
    return 0;
}
