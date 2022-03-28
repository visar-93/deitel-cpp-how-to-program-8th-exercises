#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include"Rectangle.h"
using namespace std;

Rectangle::Rectangle(double wid, double len)
{
	setPerimeter(wid, len);
	setArea(wid, len);
}
void Rectangle::setPerimeter(double w, double l)
{
	perimeter = 2 * w + 2 * l;
}
void Rectangle::setArea(double w, double l)
{
	area = w * l;
}
void Rectangle::setWidth(double w)
{
	if (w > 0 && w < 20)
		width = w;
	else
		width = 1.0;
}
void Rectangle::setLength(double l)
{
	if (l > 0 && l < 20)
		length = l;
	else
		length = 1.0;
}
double Rectangle::getWidth()
{
	return width;
}
double Rectangle::getLength()
{
	return length;
}
double Rectangle::getPerimeter()
{
	return perimeter;
}
double Rectangle::getArea()
{
	return area;
}
void Rectangle::setPrint()
{
	cout << "Length is: " << setw(4) << getLength() << endl;
	cout << "Width is: " << setw(4) << getWidth() << endl;
	cout << "Perimeter is : " << setw(4) << getPerimeter() << endl;
	cout << "Area is : " << setw(4) << getArea() << endl;
}
