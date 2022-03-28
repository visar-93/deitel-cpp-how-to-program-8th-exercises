#include "stdafx.h"
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;

double distanceBetweenPoints(double x1, double x2, double y1, double y2);

int main()
{
	cout << setprecision(3);
	double x1, x2, y1, y2;
	cout << "Enter first point: \nX1: ";
	cin >> x1;
	cout << "Y1: ";
	cin >> y1;
	cout << "Enter second point: \nX2: ";
	cin >> x2;
	cout << "Y2: ";
	cin >> y2;
	cout << "Distance between two points is: " << distanceBetweenPoints(x1, y1, x2, y2) << endl;

	return 0;
}
double distanceBetweenPoints(double x1, double y1, double x2, double y2)
{
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
} 
