// class rectangle definition
#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "TwoDimensionalShapes.h"

class Rectangle : public TwoDimensionalShapes
{
public:
	Rectangle(double, double);
	void setSideOne(double);
	double getSideOne() const;
	void setSideTwo(double);
	double getSideTwo()const;
	virtual double getArea()const;
	virtual void print()const;
private:
	double firstSide;
	double secondSide;
};
#endif // !RECTANGLE_H
