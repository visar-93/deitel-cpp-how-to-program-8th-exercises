// Made by myself#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;

void isPerfect();
void perfectFinder();

int main()
{
	isPerfect();
	cout << "\n\n\n\n\n\n";
	perfectFinder();
};
void isPerfect()
{
	int div;
	int num;
	int prod;
	int sum = 0;
	int number;

	cout << "Enter a number: " << endl;
	cin >> number;

	for (div = 1; div <= number; div++)
	{
		prod = number / div;
		if (prod == 1)
		{
			break;
		}
		if (number%div == 0)
		{
			num = div;
		}
		else
		{
			continue;
		}
		cout << div << "    " << prod << endl;
		sum = sum + num;
	}

	if (sum != number)
	{
		cout << "Number " << number << " is not perfect\n";
	}
	else
	{
		cout << "Number " << number << " is perfect\n";
	}
}
void perfectFinder()
{
	int a[1000];
	int div;
	int prod;
	int number;
	int i;
	for (number = 1; number <= 1000000000000; number++)
	{
		int sum = 0;
		for (div = 1, i = 0; div <= number, i<1000; div++)
		{
			prod = number / div;
			if (prod == 1)
			{
				break;
			}
			if (number%div == 0)
			{
				a[i] = div;
				i++;
			}
			else
			{
				continue;
			}
			sum = sum + div;
		}

		if (sum == number)
		{
			cout << "Number " << number << " is perfect\n\n\n";
			for (int i = 0; i < 1000; i++)
			{
				if (a[i] <= 0)
					break;
				cout << "{ ";
				cout << a[i] << " ";
				cout << "}";
			}
			cout << "  Number : " << sum << " is perfect." << endl;
		}
	}
}
