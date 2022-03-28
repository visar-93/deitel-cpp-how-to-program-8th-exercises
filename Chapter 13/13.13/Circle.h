// class circle definition
#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H

#include "TwoDimensionalShapes.h"

class Circle : public TwoDimensionalShapes
{
public:
	Circle(double);
	void setRadius(double);
	double getRadius() const;
	virtual double getArea()const;
	virtual void print()const;
private:
	double radius;
	const double pi = 3.14159;
};
#endif // !CIRCLE_H
