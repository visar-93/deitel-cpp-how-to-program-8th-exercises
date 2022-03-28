#include "stdafx.h"
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	double xy1[2] = { 12.0,12.0 }, xy2[2] = { 18.0,12.0 },
		xy3[2] = { 18.0, 20.0 }, xy4[2] = { 12.0, 20.0 };
	Rectangle a(xy1, xy2, xy3, xy4, '?', '*');

	if (a.isValid())
		a.draw();

    return 0;
}
