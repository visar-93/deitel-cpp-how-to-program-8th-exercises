#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
	Complex(double = 0, double = 0);
	void setComplexNumber(double, double);
	void addingComplex(const Complex & );
	void subtractingComplex(const Complex &);
	void printComplex();

private:
	double real;
	double imaginary;
};
// To deal with complex numbers you must call #include<complex> library,
// and use functions that provides this library. 
//In function members addingComplex and subtractingComplex in signature
//we call const Complex &. const Complex is a type of variable that this
//library provides us. In argument we call a complex reference, that means
//this function to perform needs a reference (address) of another object
// of this type


#endif // !COMPLEX
