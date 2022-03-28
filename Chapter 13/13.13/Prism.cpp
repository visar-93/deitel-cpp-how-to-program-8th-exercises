// class Prism function definition
#include "stdafx.h"
#include <iostream>
#include "Prism.h"

using namespace std;

Prism::Prism(double b, double h, double l)
{
	setBase(b);
	setHeight(h);
	setLength(l);
}

void Prism::setBase(double b)
{
	if (b > 0)
		base = b;
	else
		throw invalid_argument("Base must be > 0");
}

double Prism::getBase() const
{
	return base;
}

void Prism::setHeight(double h)
{
	if (h > 0)
		height = h;
	else
		throw invalid_argument("Height must be > 0");
}

double Prism::getHeight()const
{
	return height;
}

void Prism::setLength(double l)
{
	if (l > 0)
		length = l;
	else
		throw invalid_argument("Length must be > 0");
}

double Prism::getLength()const
{
	return length;
}

double Prism::getArea() const
{
	return base*height + 3*(base*length);
}

double Prism::getVolume()const
{
	return 1 / 2 * base * height * length;
}

void Prism::print()const
{
	cout << "Prism with\n"
		<< "Base: " << getBase() << endl
		<< "Height: " << getHeight() << endl
		<< "Length: " << getLength() << endl;
	ThreeDimensionalShapes::print();
	cout << getArea() << endl;
	cout << "The volume is: " << getVolume() << endl;
}
