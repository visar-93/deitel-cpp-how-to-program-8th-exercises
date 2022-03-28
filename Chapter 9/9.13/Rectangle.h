#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
	Rectangle(double *, double *,double *, double *, char, char); // default constructor
	void setCoordinates(double *, double *, double *, double *);
	void setPerimeter();
	void setArea();
	void setSquare();
	void draw(void);
	void setFillCharacter(char);
	void setPerimeterCharacter(char c);
	bool isValid(void);
	void setValid(bool);
private:
	double point1[2];
	double point2[2];
	double point3[2];
	double point4[2];
	char fillChar;
	char periChar;
	bool valid;
};
#endif // !RECTANGLE_h
