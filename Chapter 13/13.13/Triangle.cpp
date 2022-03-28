// class Triangle function definition
#include "stdafx.h"
#include <iostream>
#include "Triangle.h"

using namespace std;

Triangle::Triangle(double b, double h)
{
	setBase(b);
	setHeight(h);
}

void Triangle::setBase(double b)
{
	if (b > 0)
		base = b;
	else
		throw invalid_argument("Base must be > 0");
}

double Triangle::getBase() const
{
	return base;
}

void Triangle::setHeight(double h)
{
	if (h > 0)
		height = h;
	else
		throw invalid_argument("Height must be > 0");
}

double Triangle::getHeight()const
{
	return height;
}
double Triangle::getArea() const
{
	return (height * base)/2;
}

void Triangle::print()const
{
	cout << "Triangle with\n"
		<< "Base: " << getBase() << endl
		<< "Height: " << getHeight() << endl;
	TwoDimensionalShapes::print();
	cout << getArea() << endl;
}
