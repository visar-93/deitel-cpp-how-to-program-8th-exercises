// class Cube definitions
#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H
#include "ThreeDimensionalShapes.h"

class Tetrahedron : public ThreeDimensionalShapes
{
public:
	Tetrahedron(double);
	void setSide(double);
	double getSide()const;
	virtual double getArea()const;
	virtual double getVolume()const;
	virtual void print() const;
private:
	double side;
};
#endif // !TETRAHEDRON_H

