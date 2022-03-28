#include "stdafx.h"
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;

inline double circleArea(double rad)
{
	double pi = 3.141593;

	return 2 * rad*pi;

}


int main()
{
	double radius;
	cout << "Enter the radius of circle: ";
	cin >> radius;

	cout << "The area of circle is: " << circleArea(radius) << endl;
};
