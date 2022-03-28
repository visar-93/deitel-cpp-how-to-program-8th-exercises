// class triangle definition
#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "TwoDimensionalShapes.h"

class Triangle : public TwoDimensionalShapes
{
public:
	Triangle(double, double);
	void setBase(double);
	double getBase() const;
	void setHeight(double);
	double getHeight()const;
	virtual double getArea()const;
	virtual void print()const;
private:
	double base;
	double height;
};
#endif // !TRIANGLE_H
