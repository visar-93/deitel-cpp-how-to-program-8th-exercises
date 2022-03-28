#include "stdafx.h"
#include <iostream>
using namespace std;

#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
	Shape();
	virtual void print()const = 0;
private:

};

#endif // !SHAPE_H
