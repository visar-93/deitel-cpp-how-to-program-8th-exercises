#include "stdafx.h"
#include <complex>
#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
	Complex b(1, 7);
	Complex c(2, 6);

	b.printComplex();
	cout << " + ";
	c.printComplex();
	cout << " = ";
	b.addingComplex(c);
	b.printComplex();

	cout << "\n";

	b.setComplexNumber(10, 1);
	c.setComplexNumber(11, 5);
	b.printComplex();
	cout << " - ";
	c.printComplex();
	cout << " = ";
	b.subtractingComplex(c);
	b.printComplex();
	cout << endl;

    return 0;
}
