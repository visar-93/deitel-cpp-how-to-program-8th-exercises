#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int multipliest(int num1, int num2);

int main()
{
	int counter;
	int x;
	int y;

	for (counter = 1; counter <= 5; ++counter)
	{
		cout << "num1: ";
		cin >> x;
		cout << "num2: ";
		cin >> y;

		if (multipliest(x, y))
		{
			cout << "num2 is a multiple of num1 \n";
		}
		else
			cout << "num2 is not a multiple of num1 \n";
	}
	cout << endl;
}

int multipliest(int num1, int num2)
{
	return !(num2%num1);
}
