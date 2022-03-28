#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;

bool isPerfect(int number);
void perfectFinder();
void printPerfect(int number);

int main()
{
	/*
	bool res;
	int number;
	cin >> number;
	res = isPerfect(number);
	if (res == true) {
		cout << number << " is perfect" << endl;
	}
	else {
		cout << number << " is not perfect" << endl;
	}*/

	perfectFinder();

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
			continue;
		}
		sum = sum + num;
	}

	return sum == number;
}

void perfectFinder()
{
	int a[1000];
	int number;
	int i = 0;

	for (number = 1; number <= 1000; number++)
	{
		bool res = isPerfect(number);
		if (res) {
			a[i] = number;
			i++;
		}
	}

	for (int i = 0; i < 1000; i++)
	{
		if (a[i] <= 0)
			break;
		printPerfect(a[i]);
	}
}

void printPerfect(int number) {
	int div;
	int num;
	int prod;
	for (div = 1; div <= number; div++)
	{
		prod = number / div;
		if (prod == 1)
		{
			break;
		}
		if (number % div == 0)
		{
			cout << div << " ";
		}
	}
	cout << number << endl;
}
