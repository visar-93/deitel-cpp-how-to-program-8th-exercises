#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef TWODIMENSIONALSHAPES_H
#define TWODIMENSIONALSHAPES_H

#include "Shape.h"

class TwoDimensionalShapes : public Shape
{
public:
	TwoDimensionalShapes();
	virtual double getArea()const = 0;
	virtual void print()const;
};


#endif // !TWODIMENSIONALSHAPES_H
