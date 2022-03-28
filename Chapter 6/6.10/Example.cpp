#include "stdafx.h"
#include <iostream>
using namespace std;

inline double sphereVolume(double radius)
{
	return (4.0 / 3.0 * 3.14159 * pow(radius, 3));
}

int main()
{
	double r;
	cout << "Please enter the radius of sphere: ";
	cin >> r;

	cout << "The spherevolume is: " << sphereVolume(r) << endl;
}
