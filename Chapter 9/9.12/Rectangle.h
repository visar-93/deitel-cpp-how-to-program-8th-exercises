#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
	Rectangle(double *, double *,double *, double *); // default constructor
	void setCoordinates(double *, double *, double *, double *);
	void setPerimeter();
	void setArea();
	void setSquare();
private:
	double point1[2];
	double point2[2];
	double point3[2];
	double point4[2];
};
#endif // !RECTANGLE_h
