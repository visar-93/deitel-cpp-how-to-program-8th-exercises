// class Rectangle function definition
#include "stdafx.h"
#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double side1, double side2)
{
	setSideOne(side1);
	setSideTwo(side2);
}

void Rectangle::setSideOne(double side1)
{
	if (side1 > 0)
		firstSide = side1;
	else
		throw invalid_argument("Side must be > 0");
}

double Rectangle::getSideOne() const
{
	return firstSide;
}

void Rectangle::setSideTwo(double side2)
{
	if (side2 > 0)
		secondSide = side2;
	else
		throw invalid_argument("Side must be > 0");
}

double Rectangle::getSideTwo()const
{
	return secondSide;
}
double Rectangle::getArea() const
{
	return firstSide * secondSide;
}

void Rectangle::print()const
{
	cout << "Rectangle with\n"
		<< "Side 1: " << getSideOne() << endl
		<< "Side 2: " << getSideTwo() << endl;
	TwoDimensionalShapes::print();
	cout << getArea() << endl;
}
