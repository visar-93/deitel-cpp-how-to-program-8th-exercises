// class Dodecahedron definitions
#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef DODECAHEDRON_H
#define DODECAHEDRON_H
#include "ThreeDimensionalShapes.h"

class Dodecahedron : public ThreeDimensionalShapes
{
public:
	Dodecahedron(double);
	void setSide(double);
	double getSide()const;
	virtual double getArea()const;
	virtual double getVolume()const;
	virtual void print() const;
private:
	double side;
	const double pi = 3.14159;
};
#endif // !DODECAHEDRON_H
