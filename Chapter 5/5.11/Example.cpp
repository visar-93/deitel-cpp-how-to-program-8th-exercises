#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double amount;
	double principal = 1000.00;
	double rate = .05;

	cout << "Year" << setw(21) << "Amount on deposit " << endl;

	cout << fixed << setprecision(2);

	for (rate; rate <= 0.1; rate += 0.01)
	{
		for (int year = 1; year <= 10; ++year)
		{
			amount = principal * pow(1.0 + rate, year);

			cout << setw(4) << year << setw(21) << amount << endl;
		}
		cout << endl;
	}

	return 0;
}
