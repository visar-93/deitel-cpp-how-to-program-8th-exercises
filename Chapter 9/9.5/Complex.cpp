#include "stdafx.h"
#include <complex>
#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double realPart, double imaginaryPart)
{
	setComplexNumber(realPart, imaginaryPart);
}
void Complex::setComplexNumber(double r, double i)
{
	real = r;
	imaginary = i;
}
void Complex::addingComplex(const Complex &a)
{
	real += a.real;
	imaginary += a.imaginary;
}
void Complex::subtractingComplex(const Complex &s)
{
	real -= s.real;
	imaginary -= s.imaginary;
}
void Complex::printComplex()
{
	cout << "(" << real << ", " << imaginary << "i)";
}
