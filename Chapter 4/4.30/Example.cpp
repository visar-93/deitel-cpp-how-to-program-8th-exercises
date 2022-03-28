#include"stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double radius, pi, diameter, circumference, area;
	pi = 3.14159;

	cout << "Enter the radius: ";
	cin >> radius;
	cout << endl;

	if (radius > 0)
	{
		diameter = 2.00 * radius;
		circumference = 2.00 * pi * radius;
		area = (pi * pi) * radius;

		cout << "Diameter: " << diameter << endl;
		cout << "Circumference: " << circumference << endl;
		cout << "Area: " << area << endl;
	}
	else
		cout << "You entered 0 value.\n";
}
