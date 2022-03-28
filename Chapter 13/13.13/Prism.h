// class Prism definition
#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef PRISM_H
#define PRISM_H
#include "ThreeDimensionalShapes.h"

class Prism : public ThreeDimensionalShapes
{
public:
	Prism(double, double,double);
	void setBase(double);
	double getBase()const;
	void setHeight(double);
	double getHeight()const;
	void setLength(double);
	double getLength()const;
	virtual double getArea()const;
	virtual double getVolume()const;
	virtual void print() const;
private:
	double base;
	double height;
	double length;
};
#endif // !PRYSM_H
