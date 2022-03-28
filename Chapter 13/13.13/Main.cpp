#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <typeinfo>
#include "Circle.h"
#include "Cone.h"
#include "Cube.h"
#include "Cylinder.h"
#include "Dodecahedron.h"
#include "Prism.h"
#include "Rectangle.h"
#include "Rhombus.h"
#include "Shape.h"
#include "Sphere.h"
#include "Square.h"
#include "Tetrahedron.h"
#include "Trapezoid.h"
#include "Triangle.h"
#include "TwoDimensionalShapes.h"
#include "ThreeDimensionalShapes.h"
using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	
	vector<Shape *> forms(13);

	// initialize vector with various kinds of Shapes
	forms[0] = new Triangle(2, 4);
	forms[1] = new Trapezoid(3, 6, 2);
	forms[2] = new Circle(5);
	forms[3] = new Rhombus(2, 8);
	forms[4] = new Rectangle(3, 7);
	forms[5] = new Square(3);
	forms[6] = new Sphere(8);
	forms[7] = new Cone(3, 9);
	forms[8] = new Dodecahedron(4);
	forms[9] = new Cube(4);
	forms[10] = new Cylinder(3, 2);
	forms[11] = new Prism(2, 4, 6);
	forms[12] = new Tetrahedron(5);
	
	for (size_t i = 0; i < forms.size(); ++i)
	{
		//forms[i]->print();
		//cout << endl;

		TwoDimensionalShapes *derivedTwoDimensionalShapes =
			dynamic_cast<TwoDimensionalShapes*>
			(forms[i]);

		if (derivedTwoDimensionalShapes != 0)
		{
			derivedTwoDimensionalShapes->print();
			cout << endl;
		}

		ThreeDimensionalShapes *derivedThreeDimensionalShapes =
			dynamic_cast<ThreeDimensionalShapes*>
			(forms[i]);
		if (derivedThreeDimensionalShapes != 0)
		{
			derivedThreeDimensionalShapes->print();
			cout << endl;
		}
	}
	return 0;
}
