#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int totalhours = 0;
double totalcharges = 0;
int cnt = 0;
int hour;
double charge;

void calculateCharges();

int main()
{
	cout << "Tony's park place\n\n";
	int countp;

	cout << setprecision(3);


	calculateCharges();

}
void calculateCharges()
{
	int count;
	int hours[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> hours[i];
	}

	cout << "Car\tHour\tCharge" << endl;
	for (count = 1; count <= 3; count++)
	{
		hour = hours[count - 1];
		cout << count << "\t" << hour << "\t";
		if (hour <= 3)
		{
			charge = 2.00;
		}
		else if (hour > 3 && hour < 24)
		{
			charge = 2.00 + (hour - 3)*0.50;
		}
		else if (hour >= 24)
		{
			charge = 10.00;
		}
		cout << charge << endl;

		totalhours = totalhours + hour;
		totalcharges = totalcharges + charge;
	}

	cout << "Total\t" << totalhours << "\t" << totalcharges << endl;

}
