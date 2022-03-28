#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include"Rectangle.h"
using namespace std;

Rectangle::Rectangle(double *a, double *b, double *c, double *d,char x, char y)
{
	setCoordinates(a, b, c, d);
	setFillCharacter(x);
	setPerimeterCharacter(y);
}
void Rectangle::setCoordinates(double *p1, double *p2, double *p3, double *p4)
{
	//Arrangement of points
	// p4........p3
	// .         .
	// .         .
	// p1........p2

	const int x = 0, y = 1; // added for clarity

	if (p1[x] > 20.0 || p1[x] < 0.0) //  set each coordinate (each member of arrays point1, point2, point3, point4 which inlcude the coordinates x and y.
		point1[x] = 0.0;
	else
		point1[x] = p1[x];

	if (p1[y] > 20.0 || p1[y] < 0.0)
		point1[y] = 0.0;
	else
		point1[y] = p1[y];

	if (p2[x] > 20.0 || p2[x] < 0.0)
		point2[x] = 0.0;
	else
		point2[x] = p2[x];

	if (p2[y] > 20.0 || p2[y] < 0.0)
		point2[y] = 0.0;
	else
		point2[y] = p2[y];

	if (p3[x] > 20.0 || p3[x] < 0.0)
		point2[x] = 0.0;
	else
		point3[x] = p3[x];

	if (p3[y] > 20.0 || p3[y] < 0.0)
		point2[y] = 0.0;
	else
		point3[y] = p3[y];

	if (p4[x] > 20.0 || p4[x] < 0.0)
		point4[x] = 0.0;
	else
		point4[x] = p4[x];

	if (p4[y] > 20.0 || p4[y] < 0.0)
		point4[y] = 0.0;
	else
		point4[y] = p4[y];

	// verify that points are from a rectangle, program should check if points are paralel to each other and have the angle of 90 degrees between them
	if (p1[y] == p2[y] && p1[x] == p4[x] && p2[x] == p3[x] && p3[y] == p4[y])
	{
		setPerimeter();
		setArea();
		setSquare();
		setValid(true); // valid set of points
	}
	else
	{
		cout << "Coordinates do not form a rectangle!\n";
		setValid(false); // invalid set of points
	}
}
void Rectangle::setPerimeter()
{
	double l = fabs(point4[1] - point1[1]), // absolute value of y4-y1 which gives us the length in first quadrant 
		w = fabs(point2[0] - point1[0]); // absolute value of x2-x1 which gives us the width in first quadrant
	
	cout << setiosflags(ios::fixed | ios::showpoint)
	    << "Length = " << setprecision(1) << (l > w ? l : w)
		<< "\t" << "width = " << (l > w ? w : l)
		<< "\nThe perimeter is: " << 2 * (w + l) << "\n"
		<< resetiosflags(ios::fixed | ios::showpoint);
}
void Rectangle::setArea()
{
	double l = fabs(point4[1] - point1[1]),
		w = fabs(point2[0] - point1[0]);
	cout << setiosflags(ios::fixed | ios::showpoint)
	     << "\nThe area is: " << setprecision(1) << w * l
		<< resetiosflags(ios::fixed | ios::showpoint)
		<< "\n\n";
}
void Rectangle::setSquare(void)
{
	const int x = 0, y = 1; // added for clarity , they present coordinates and array members(assigned numbers)

	if (fabs(point4[y] - point1[y]) == fabs(point2[x] - point1[x]))
		cout << "The rectanble is a square.\n\n";
}

void Rectangle::setFillCharacter(char c)
{
	fillChar = c;
}
void Rectangle::setPerimeterCharacter(char c)
{
	periChar = c;
}
bool Rectangle::isValid(void)
{
	return valid;
}
void Rectangle::setValid(bool v)
{
	valid = v;
}
void Rectangle::draw(void)
{
	for (double y = 25.0; y >= 0; --y) {
		for (double x = 0.0; x <= 25.0; ++x)
		{
			if ((point1[0] == x && point1[1] == y) || (point4[0] == x && point4[1] == y))
			{
				//print horizontal perimeter of rectangle
				while (x <= point2[0])
				{
					cout << periChar;
					++x;
				}
				//print remainder of quadrant
				cout << ".";
			} // print vertical perimeter of rectangle
			else if (((x <= point4[0] && x >= point1[0])) && point4[1] >= y && point1[1] <= y)
			{
				cout << periChar;

				//fill inside of rectangle
				for (x++; x < point2[0];)
				{
					cout << fillChar;
					++x;
				}
				cout << periChar;
			}
			else
				cout << ".";
		}
		cout << "\n";
	}
}
