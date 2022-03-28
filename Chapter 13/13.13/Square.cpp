#include "stdafx.h"
#include <iostream>
#include "Square.h"
using namespace std;

Square::Square(double side1)
{
	setSideOne(side1);
}

void Square::setSideOne(double side1)
{
	if (side1 > 0)
		firstSide = side1;
	else
		throw invalid_argument("Side must be > 0");
}

double Square::getSideOne() const
{
	return firstSide;
}

double Square::getArea() const
{
	return firstSide * firstSide;
}

void Square::print()const
{
	cout << "Square with\n"
		<< "Side: " << getSideOne() << endl;
	TwoDimensionalShapes::print();
	cout << getArea() << endl;
}
