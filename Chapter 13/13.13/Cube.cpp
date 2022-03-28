// class Cube function definition
#include "stdafx.h"
#include <iostream>
#include "Cube.h"
using namespace std;

Cube::Cube(double r)
{
	setSide(r);
}

void Cube::setSide(double r)
{
	if (r > 0)
		side = r;
	else
		throw invalid_argument("Radius must be > 0");
}

double Cube::getSide()const
{
	return side;
}

double Cube::getArea()const
{
	return 6 * (side * side);
}

double Cube::getVolume()const
{
	return side * side * side;
}

void Cube::print()const
{
	cout << "Cube with\n"
		<< "Side: " << getSide() << endl;
	ThreeDimensionalShapes::print();
	cout << getArea() << endl;
	cout << "The volume is: " << getVolume() << endl;
}

