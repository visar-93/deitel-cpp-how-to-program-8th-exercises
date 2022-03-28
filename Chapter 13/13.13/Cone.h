// class Cone definition
#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef CONE_H
#define CONE_H
#include "ThreeDimensionalShapes.h"

class Cone : public ThreeDimensionalShapes
{
public:
	Cone(double,double);
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
#endif // !CONE_H
