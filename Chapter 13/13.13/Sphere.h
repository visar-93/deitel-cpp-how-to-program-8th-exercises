// class sphere definitions
#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef SPHERE_H
#define SPHERE_H
#include "ThreeDimensionalShapes.h"

class Sphere : public ThreeDimensionalShapes
{
public:
	Sphere(double);
	void setRadius(double);
	double getRadius()const;
	virtual double getArea()const;
	virtual double getVolume()const;
	virtual void print() const;
private:
	double radius;
	const double pi = 3.14159;
};
#endif // !SPHERE_H
