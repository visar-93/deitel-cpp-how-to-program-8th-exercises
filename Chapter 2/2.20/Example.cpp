#include "stdafx.h"
#include <iostream>
using namespace std;

int main()

{
double r;
double d;
double c;
double a;
double pi;

pi = 3.14159;

cout << "Please enter the radius of circle" << endl;
cin >> r;

d = r * 2;
c = 2 * pi * r;
a = pi * r * r;

cout << "The diameter of circle is d = 2 x r = " << d << endl;
cout << "The circumference of circle is c = 2 x pi x r = " << c << endl;
cout << "The area of circle is a = pi x r^2 = " << a << endl;

	return 0;
}
