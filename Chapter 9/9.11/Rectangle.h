#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
	Rectangle(double = 1.0, double = 1.0); // default constructor
	void setWidth(double);
	void setLength(double);
	void setPerimeter(double, double);
	void setArea(double, double);
	double getWidth();
	double getLength();
	double getPerimeter();
	double getArea();
	void setPrint();
private:
	double width;
	double length;
	double perimeter;
	double area;
};
#endif // !RECTANGLE_h
