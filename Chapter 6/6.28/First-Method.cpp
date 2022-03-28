#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;

bool isPerfect(int number);
void perfectFinder();

int main()
{
	bool res;
	int number;
	cin >> number;
	res = isPerfect(number);
	if (res == true) {
		cout << number << " is perfect" << endl;
	}
	else {
		cout << number << " is not perfect" << endl;
	}
	//perfectFinder();

};
bool isPerfect(int number)
{
	int div;
	int num;
	int prod;
	int sum = 0;

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
			break;
		}
		cout << div << "    " << prod << endl;
		sum = sum + num;
	}

	return sum == number;
}

void perfectFinder()
{
	int a[1000];
	int div;
	int prod;
	int sum = 0;
	int number;
	int i = 0;

	for (number = 1; number <= 1000; number++)
	{
		for (div = 1, i = 0; div <= number; div++)
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
				break;
			}
			sum = sum + div;
		}

		if (sum != number)
		{
			break;
		}
		else
		{
			cout << "Number " << number << " is perfect\n";
			for (int i = 0; i < 1000; i++)
			{
				if (a[i] <= 0)
					break;
				cout << a[i] << " ";
			}
			cout << "  Number : " << sum  << " is perfect." << endl;
		}

	}
}
