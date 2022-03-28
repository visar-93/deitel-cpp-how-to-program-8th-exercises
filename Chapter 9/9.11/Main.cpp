#include "stdafx.h"
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle rec1, rec2, rec3;
	rec1.setLength(2.6);
	rec1.setWidth(3.0);
	rec1.getPerimeter();
	rec1.getArea();
	rec1.setPrint();
	cout << endl;

	rec2.setLength(4.6);
	rec2.setWidth(5.1);
	rec2.getPerimeter();
	rec2.getArea();
	rec2.setPrint();
	cout << endl;

	rec3.setLength(21.3);
	rec3.setWidth(64.9);
	rec3.getPerimeter();
	rec3.getArea();
	rec3.setPrint();
	cout << endl;

    return 0;
}
