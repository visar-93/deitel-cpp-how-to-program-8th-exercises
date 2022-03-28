#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundreths(double number);
double roundToThousandths(double number);

int main()
{
	double num;

	cout << "Please enter a number ";
	cin >> num;

	roundToInteger(num);
	roundToTenths(num);
	roundToHundreths(num);
	roundToThousandths(num);

	cout << "\tx" << "\ty\n";
	cout << "\t" << num<< "\t" << roundToInteger(num) << endl;
	cout << "\t" << num << "\t" << roundToTenths(num) << endl;
	cout << "\t" << num << "\t" << roundToHundreths(num) << endl;
	cout << "\t" << num << "\t" << roundToThousandths(num) << endl;
	cout << endl;
}
double roundToInteger(double number)
{
	double x;
	x = number;
	double y;
	y = floor(x + .5);
	return y;
}
double roundToTenths(double number)
{
	double x;
	x = number;
	double y;
	y = floor(x * 10.00 + .5) / 10.00;
	return y;
}
double roundToHundreths(double number)
{
	double x;
	x = number;
	double y;
	y = floor(x * 100.00 + .5) / 100.00;
	return y;
}
double roundToThousandths(double number)
{
	double x;
	x = number;
	double y;
	y = floor(x * 1000.00 + .5) / 1000.00;
	return y;
}
