// class Sphere function definition
#include "stdafx.h"
#include <iostream>
#include "Sphere.h"
using namespace std;

Sphere::Sphere(double r)
{
	setRadius(r);
}

void Sphere::setRadius(double r)
{
	if (r > 0)
		radius = r;
	else
		throw invalid_argument("Radius must be > 0");
}

double Sphere::getRadius()const
{
	return radius;
}

double Sphere::getArea()const
{
	return 4 * pi*radius;
}

double Sphere::getVolume()const
{
	return 4 / 3 * pi * (radius*radius*radius);
}

void Sphere::print()const
{
	cout << "Sphere with\n"
		<< "Radius: " << getRadius() << endl;
	ThreeDimensionalShapes::print();
	cout << getArea() << endl;
	cout << "The volume is: " << getVolume() << endl;
}
