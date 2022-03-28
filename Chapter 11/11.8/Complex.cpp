// Complex class member-function definitions.
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Complex.h" // Complex class definition
using namespace std;

// Constructor
Complex::Complex(double realPart, double imaginaryPart)
{
	real = realPart;
	imaginary = imaginaryPart;
} 

// addition operator
Complex Complex::operator+(const Complex &operand2) const
{
	Complex  sum;

	sum.real = real + operand2.real;
	sum.imaginary = imaginary + operand2.real;

	return sum;
} // end function operator+

// subtraction operator
Complex Complex::operator-(const Complex &operand2) const
{
	Complex dif;

	dif.real = real - operand2.real;
	dif.imaginary = imaginary - operand2.imaginary;

	return dif;
} // end function operator-
// multiplication operator
Complex Complex::operator*(const Complex & operand2) const
{
	Complex mul;

	mul.real = real * operand2.real + imaginary * operand2.imaginary;
	mul.imaginary = real * operand2.imaginary + imaginary * operand2.real;

	return mul;
}

// overload input operator for class Complex
// input values for real and imaginary numbers
istream &operator>>(istream &input, Complex &number)
{
	input >> number.real;
	input >> number.imaginary;

	return input;
}

// overload output operator for class Complex
// output values for real and imaginary numbers
ostream &operator<<(ostream &output, const Complex &number)
{
	output << "(" << number.real << " + j" << number.imaginary << ")";

	return output;
}

bool Complex::operator==(const Complex &right) const
{
	if (real == right.real && imaginary == right.imaginary)
		return true;
	else
		return false;
}

bool Complex::operator!=(const Complex &right)const
{
	if (real != right.real || imaginary != right.imaginary)
		return true;
	else
		return false;
}
const Complex &Complex::operator=(const Complex &right)
{
	real = right.real;
	imaginary = right.imaginary;

	return *this;
}
