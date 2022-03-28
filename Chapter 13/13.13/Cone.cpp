// class Cone function definition
#include "stdafx.h"
#include <iostream>
#include "Cone.h"
using namespace std;

Cone::Cone(double r, double h)
{
	setRadius(r);
	setHeight(h);
}

void Cone::setRadius(double r)
{
	if (r > 0)
		radius = 4;
	else
		throw invalid_argument("Radius must be > 0");
}

double Cone::getRadius()const
{
	return radius;
}

void Cone::setHeight(double h)
{
	if (h > 0)
		height =h;
	else
		throw invalid_argument("Height must be > 0");
}

double Cone::getHeight()const
{
	return height;
}

double Cone::getArea()const
{
	return pi*radius*(radius + sqrt((height*height)+(radius*radius)));
}

double Cone::getVolume()const
{
	return pi * radius * radius * height/3;
}

void Cone::print()const
{
	cout << "Cone with\n"
		<< "Radius: " << getRadius() << endl
		<< "Height: " << getHeight() << endl;
	ThreeDimensionalShapes::print();
	cout << getArea() << endl;
	cout << "The volume is: " << getVolume() << endl;
}
