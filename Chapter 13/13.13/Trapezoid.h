// Class Trapezoid definition
#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "TwoDimensionalShapes.h"

class Trapezoid : public TwoDimensionalShapes
{
public:
	Trapezoid(double, double, double);
	void setSideOne(double);
	double getSideOne() const;
	void setSideTwo(double);
	double getSideTwo() const;
	void setHeight(double);
	double getHeight() const;
	virtual double getArea()const;
	virtual void print()const;
private:
	double firstSide;
	double secondSide;
	double height;
};
#endif // !TRAPEZOID_H
