#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double week = 200.00;
	double commission;
	double salary;
	double sales;

	cout << "Enter sales in dollars (-1 to end): ";
	cin >> sales;

	while (sales != -1)
	{
		salary = sales * 0.09 + 200;
		cout << "Salary is: " << salary;
		cout << endl;

		cout << "Enter sales in dollars (-1 to end): ";
		cin >> sales;

	}
    return 0;
}

