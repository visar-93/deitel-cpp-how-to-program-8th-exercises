// class Cube definitions
#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef CUBE_H
#define CUBE_H
#include "ThreeDimensionalShapes.h"

class Cube : public ThreeDimensionalShapes
{
public:
	Cube(double);
	void setSide(double);
	double getSide()const;
	virtual double getArea()const;
	virtual double getVolume()const;
	virtual void print() const;
private:
	double side;
};
#endif // !CUBE_H
