// class Dodecahedron function definition
#include "stdafx.h"
#include <iostream>
#include "Dodecahedron.h"
using namespace std;

Dodecahedron::Dodecahedron(double r)
{
	setSide(r);
}

void Dodecahedron::setSide(double r)
{
	if (r > 0)
		side = r;
	else
		throw invalid_argument("Radius must be > 0");
}

double Dodecahedron::getSide()const
{
	return side;
}

double Dodecahedron::getArea()const
{
	return 3 * (sqrt(25 + 10 * sqrt(5)) * side * side);
}

double Dodecahedron::getVolume()const
{
	return ((15 + 7 * sqrt(5)) / 4)*side*side;
}

void Dodecahedron::print()const
{
	cout << "Dodecahedron with\n"
		<< "Side: " << getSide() << endl;
	ThreeDimensionalShapes::print();
	cout << getArea() << endl;
	cout << "The volume is: " << getVolume() << endl;
}
