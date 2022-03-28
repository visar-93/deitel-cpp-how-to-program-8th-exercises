#include "stdafx.h"
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	double w[2] = { 1.0,1.0 }, x[2] = { 5.0,1.0 },
		   y[2] = { 5.0,3.0 }, z[2] = { 1.0,3.0 },
	       j[2] = { 0.0,0.0 }, k[2] = { 1.0,0.0 },
		   m[2] = { 1.0,1.0 }, n[2] = { 0.0,1.0 },
		   v[2] = { 99.0,-2.3 };

	Rectangle a(z, y, x, w), b(j, k, m, n),
		      c(w, x, m, n), d(v, x, y, z);

    return 0;
}
