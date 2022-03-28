// class Rhombus definitions
#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "TwoDimensionalShapes.h"

class Rhombus : public TwoDimensionalShapes
{
public:
	Rhombus(double, double);
	void setOneDiagonal(double);
	double getOneDiagonal() const;
	void setTwoDiagonal(double);
	double getTwoDiagonal() const;
	virtual double getArea()const;
	virtual void print()const;
private:
	double firstDiagonal;
	double secondDiagonal;
};
#endif // !RHOMBUS_H
