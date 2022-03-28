#include "stdafx.h"
#include <iostream>
#include "Trapezoid.h"
using namespace std;

Trapezoid::Trapezoid(double sOne, double sTwo, double h)
{
	setSideOne(sOne);
	setSideTwo(sTwo);
	setHeight(h);
}

void Trapezoid::setSideOne(double one)
{
	if (one > 0)
		firstSide = one;
	else
		throw invalid_argument("Side must be > 0");
}

double Trapezoid::getSideOne() const
{
	return firstSide;
}

void Trapezoid::setSideTwo(double two)
{
	if (two > 0)
		secondSide = two;
	else
		throw invalid_argument("Side must be > 0");
}

double Trapezoid::getSideTwo() const
{
	return secondSide;
}

void Trapezoid::setHeight(double h)
{
	if (h > 0)
		height = h;
	else
		throw invalid_argument("Height must be > 0");
}

double Trapezoid::getHeight() const
{
	return height;
}
double Trapezoid::getArea()const
{
	return ((firstSide + secondSide) / 2)*height;
}

void Trapezoid::print() const
{
	cout << "Trapezoid with\n"
		<< "Side 1: " << getSideOne() << endl
		<< "Side 2: " << getSideTwo() << endl
		<< "Height: " << getHeight() << endl;
	TwoDimensionalShapes::print();
	cout << getArea() << endl;
}
