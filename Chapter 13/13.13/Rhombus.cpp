// Class rhombus function definitions
#include "stdafx.h"
#include <iostream>
#include "Rhombus.h"
using namespace std;

Rhombus::Rhombus(double diaOne, double diaTwo)
{
	setOneDiagonal(diaOne);
	setTwoDiagonal(diaTwo);
}

void Rhombus::setOneDiagonal(double one)
{
	if (one > 0)
		firstDiagonal = one;
	else
		throw invalid_argument("Side must be > 0");
}

double Rhombus::getOneDiagonal() const
{
	return firstDiagonal;
}

void Rhombus::setTwoDiagonal(double two)
{
	if (two > 0)
		secondDiagonal = two;
	else
		throw invalid_argument("Side must be > 0");
}

double Rhombus::getTwoDiagonal()const
{
	return secondDiagonal;
}

double Rhombus::getArea() const
{
	return (firstDiagonal*secondDiagonal) / 2;
}

void Rhombus::print()const
{
	cout << "Rhombus with\n"
		<< "First Diagonal: " << getOneDiagonal() << endl
		<< "Second Diagonal: " << getTwoDiagonal() << endl;
	TwoDimensionalShapes::print();
	cout << getArea() << endl;
}
