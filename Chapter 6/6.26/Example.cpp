#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;

double celcius(double x);
double fahrenheit(double x);
void celciusToFarenheit();
void farenheitToCelcius();

int main()
{
	int temp;
	double cel;
	double far;

	cout << fixed << setprecision(2);

	cout << "Enter 1 to convert temperature from Celcius to Farenheit or\n"
		 << "Enter 2 to convert temperature from Farenheit to Celcius\n\n";
	cin >> temp;
	if (temp == 1)
	{
		cout << "Enter temperature in Celcius: ";
		cin >> cel;
		cout << "Equivalent temperature in Farenheit is: " << celcius(cel) << endl;
	}
	else if (temp == 2)
	{
		cout << "Enter temperature in Farenheit: ";
		cin >> far;
		cout << "Equivalent temperature in Celcius is: " << fahrenheit(far) << endl;
	}
	else if (temp != 1 && temp != 2)
	{
		cout << "Wrong option selected\n";
	}
	cout << endl;

	celciusToFarenheit();
	farenheitToCelcius();
}
double celcius(double x)
{
	return ((x * (9.0 / 5.0)) + 32.0);
}
double fahrenheit(double x)
{
	return ((x - 32.0)*(5.0 / 9.0));
}
void celciusToFarenheit()
{
	double f;

	cout << fixed << setprecision(2);
	cout << setw(20) << "Celcius" << setw(20) << "Farenheit" << endl << endl;

	for (int c = 0; c <= 100; c++)
	{
		f = ((c * (9.0 / 5.0)) + 32.0);
		cout << setw(20) << c << setw(20) << f << endl;
	}
	cout << endl;
}
void farenheitToCelcius()
{
	double c;

	cout << fixed << setprecision(2);
	cout << setw(20) << "Farenheit" << setw(20) << "Celcius" << endl << endl;

	for (int f = 32; f <= 212; f++)
	{
		c = ((f - 32.0)*(5.0 / 9.0));
		cout << setw(20) << f << setw(20) << c << endl;
	}
	cout << endl;
}
