#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef THREEDIMENSIONALSHAPES_H
#define THREEDIMENSIONALSHAPES_H

#include "Shape.h"

class ThreeDimensionalShapes : public Shape
{
public:
	ThreeDimensionalShapes();
	virtual double getArea()const = 0;
	virtual double getVolume() const = 0;
	virtual void print()const;
};


#endif // !THREEDIMENSIONALSHAPES_H
