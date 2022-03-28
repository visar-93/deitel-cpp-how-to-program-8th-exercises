// class Cylinder definition
#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef CYLINDER_H
#define CYLINDER_H
#include "ThreeDimensionalShapes.h"

class Cylinder : public ThreeDimensionalShapes
{
public:
	Cylinder(double, double);
	void setRadius(double);
	double getRadius()const;
	void setHeight(double);
	double getHeight()const;
	virtual double getArea()const;
	virtual double getVolume()const;
	virtual void print() const;
private:
	double radius;
	double height;
	const double pi = 3.14159;
};
#endif // !CYLINDER_H
