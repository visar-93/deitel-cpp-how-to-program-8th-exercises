#include"stdafx.h"
#include<iostream>
#include "Rational.h"
using namespace std;

int main()
{
	Rational c(1, 3), d(7, 8), x(1,1);

	c.PrintRationalform1();
	cout << " + ";
	d.PrintRationalform1();
	cout << " = ";
	x=c.Adding(d);
	x.PrintRationalform1();
	cout << "\n";
	x.PrintRationalform1();
	cout << " = ";
	x.PrintRationalform2();
	cout << "\n\n";

	c.PrintRationalform1();
	cout << " - ";
	d.PrintRationalform1();
	cout << " = ";
	x = c.Subtracting(d);
	x.PrintRationalform1();
	cout << "\n";
	x.PrintRationalform1();
	cout << " = ";
	x.PrintRationalform2();
	cout << "\n\n";

	c.PrintRationalform1();
	cout << " x ";
	d.PrintRationalform1();
	cout << " = ";
	x = c.Multiplying(d);
	x.PrintRationalform1();
	cout << "\n";
	x.PrintRationalform1();
	cout << " = ";
	x.PrintRationalform2();
	cout << "\n\n";

	c.PrintRationalform1();
	cout << " / ";
	d.PrintRationalform1();
	cout << " = ";
	x = c.Dividing(d);
	x.PrintRationalform1();
	cout << "\n";
	x.PrintRationalform1();
	cout << " = ";
	x.PrintRationalform2();
	cout << "\n\n";

    return 0;
}
