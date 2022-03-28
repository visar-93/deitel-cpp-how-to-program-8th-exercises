// class square definition
#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef SQUARE_H
#define SQUARE_H

#include "TwoDimensionalShapes.h"

class Square : public TwoDimensionalShapes
{
public:
	Square(double);
	void setSideOne(double);
	double getSideOne() const;
	virtual double getArea()const;
	virtual void print()const;
private:
	double firstSide;
};
#endif // !SQUARE_H
