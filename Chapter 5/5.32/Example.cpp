#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double amount=1;
	double principal = 5000000.00;
	double rate = .05;
	int month;

	cout << "Month" << setw(21) << "Amount on deposit " << endl;

	cout << fixed << setprecision(2);

		for (month = 1; amount <=1000000000.00 ; ++month)
		{
			amount = principal * pow(1.0 + rate, month);

			if (amount > 1000000000.00)
			{
				break;
			}

			cout << setw(4) << month << setw(21) << amount << endl << endl;	
		}
		cout << "Facebook will achieve 1000000000.00 with 5% monthly rate in less than " << month << " months." << endl;
		
		cout << endl << endl << endl;

		for (month = 1; amount <= 2000000000.00; ++month)
		{
			amount = principal * pow(1.0 + rate, month);

			if (amount > 2000000000.00)
			{
				break;
			}

			cout << setw(4) << month << setw(21) << amount << endl << endl;
		}

		cout << "Facebook will achieve 2000000000.00 with 5% monthly rate in less than " << month << " months." << endl;
		cout << endl << endl;

	return 0;
}
