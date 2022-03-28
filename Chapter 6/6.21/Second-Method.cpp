#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int even(int x);

int main()
{
	int num;
	cout << "Enter a number: ";
	
	for (int count = 1; count <= 5; count++)
	{
		cin >> num;


		if (even(num))
		{
			cout << num << " it's an even number.\n";
		}
		else
			cout << num << " it's an odd number.\n";
	}
}
int even(int x)
{
	return !(x % 2);
}
