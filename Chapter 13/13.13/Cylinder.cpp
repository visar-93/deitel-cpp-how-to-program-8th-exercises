// class Cylinder function definition
#include "stdafx.h"
#include <iostream>
#include "Cylinder.h"
using namespace std;

Cylinder::Cylinder(double r, double h)
{
	setRadius(r);
	setHeight(h);
}

void Cylinder::setRadius(double r)
{
	if (r > 0)
		radius = 4;
	else
		throw invalid_argument("Radius must be > 0");
}

double Cylinder::getRadius()const
{
	return radius;
}

void Cylinder::setHeight(double h)
{
	if (h > 0)
		height = h;
	else
		throw invalid_argument("Height must be > 0");
}

double Cylinder::getHeight()const
{
	return height;
}

double Cylinder::getArea()const
{
	return 2*pi*radius*height + 2 *pi*(radius*radius);
}

double Cylinder::getVolume()const
{
	return pi * (radius*radius*radius) * height;
}

void Cylinder::print()const
{
	cout << "Cylinder with\n"
		<< "Radius: " << getRadius() << endl
		<< "Height: " << getHeight() << endl;
	ThreeDimensionalShapes::print();
	cout << getArea() << endl;
	cout << "The volume is: " << getVolume() << endl;
}
