#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int amount;
	int principal = 100000;
	double rate = .05;

	cout << "Year" << setw(21) << "Amount on deposit " << endl;

	cout << fixed << setprecision(2);

	for (int year = 1; year <= 10; ++year)
	{
		amount = principal * pow(1.0 + rate, year);

		cout << setw(10) << year << setw(21) << amount / 100 << "." << amount % 100 << endl;
	}

	return 0;
}
