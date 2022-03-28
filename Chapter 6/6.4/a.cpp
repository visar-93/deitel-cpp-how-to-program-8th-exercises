#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

double hypotenuse (double side1, double side2);

int main()
{
	double x, y;
	cin >> x >> y;

	cout << hypotenuse(x, y) << endl;
}

double hypotenuse(double side1, double side2)
{
	
	return sqrt((side1*side1)+(side2*side2));
}
