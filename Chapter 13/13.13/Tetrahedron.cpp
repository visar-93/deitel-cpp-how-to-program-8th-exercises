// class Cube function definition
#include "stdafx.h"
#include <iostream>
#include "Tetrahedron.h"
using namespace std;

Tetrahedron::Tetrahedron(double r)
{
	setSide(r);
}

void Tetrahedron::setSide(double r)
{
	if (r > 0)
		side = r;
	else
		throw invalid_argument("Radius must be > 0");
}

double Tetrahedron::getSide()const
{
	return side;
}

double Tetrahedron::getArea()const
{
	return sqrt(3) * side*side;
}

double Tetrahedron::getVolume()const
{
	return (side * side * side) / (6 * sqrt(2));
}

void Tetrahedron::print()const
{
	cout << "Tetrahedron with\n"
		<< "Side length: " << getSide() << endl;
	ThreeDimensionalShapes::print();
	cout << getArea() << endl;
	cout << "The volume is: " << getVolume() << endl;
}
