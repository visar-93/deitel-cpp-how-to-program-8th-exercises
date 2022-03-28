#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

double hypotenuse(double, double);

int main()
{
	double x, y;
	cin >> x >> y;

	cout << hypotenuse(x, y) << endl;
}

double hypotenuse(double x, double y)
{
	return sqrt((x*x) + (y*y));
}
