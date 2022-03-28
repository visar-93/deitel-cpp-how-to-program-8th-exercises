// class Circle function definition
#include "stdafx.h"
#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle(double r)
{
	setRadius(r);
}

void Circle::setRadius(double r)
{
	if (r > 0)
		radius = 4;
	else
		throw invalid_argument("Radius must be > 0");
}

double Circle::getRadius()const
{
	return radius;
}

double Circle::getArea()const
{
	return pi*radius*radius;
}

void Circle::print()const
{
	cout << "Circle with\n"
		<< "Radius: " << getRadius() << endl;
	TwoDimensionalShapes::print();
	cout << getArea() << endl;

}
