#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int miles;
	int counter = 1;
	int gallons;
	int total = 0;
	int togal = 0;
	double mpgTrip;
	double mpgTotal;

	cout << "Enter miles driven (-1 to quit): ";
	cin >> miles;

	while (miles != -1)
	{
		cout << "Enter gallons used: ";
		cin >> gallons;
		
		total = total + miles;
		togal = togal + gallons;
		mpgTrip = static_cast <double> (miles) / gallons;
		cout << "MPG this trip: " << setprecision(8) << mpgTrip << endl;
		mpgTotal = static_cast <double> (total) / togal;
		cout << "Total MPG: " << setprecision(8) << mpgTotal << endl;

		cout << "Enter miles driven (-1 to quit): ";
		cin >> miles;

	}
	
}
