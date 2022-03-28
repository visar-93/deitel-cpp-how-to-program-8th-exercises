#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double hypotenuse(double side1, double);

int main()
{
	double side1, side2;

	int triangle = 1;
	int run=0;
	cout << setprecision(2);
	for (triangle = 1; run != -1; ++triangle)
	{
		double sideone, sidetwo;
		cout << "For calculating hypotenuse pres any number or to cancel pres -1\n";
		cin >> run;
		if (run == -1)
		{
			break;
		}
		cout << "Enter side 1: ";
		cin >> sideone;
		cout << "Enter side 2: ";
		cin >> sidetwo;
		
		cout << setw(20) << "Triangle" << setw(20) << "Side One" << setw(20) << "Side Two" << setw(20) << "Hypotenuse" << endl;
		cout << setw(20) << triangle << setw(20) << sideone << setw(20) << sidetwo << setw(20) << hypotenuse(sideone,sidetwo) << endl;
	}
}

double hypotenuse(double side1, double side2)
{

	return sqrt((side1*side1) + (side2*side2));
}
