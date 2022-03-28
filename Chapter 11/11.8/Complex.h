// Complex class definition.
#include<iostream>
#include <string>
using namespace std;
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
	friend ostream &operator<<(ostream &, const Complex &);
	friend istream &operator>>(istream &, Complex &);
public:
	Complex(double = 0.0, double = 0.0); // constructor
	Complex operator+(const Complex &) const; // addition
	Complex operator-(const Complex &) const; // subtraction
	Complex operator*(const Complex &) const; // multiplication
	bool operator==(const Complex &) const; // equality opeator
	bool operator!=(const Complex &) const;
	const Complex &operator=(const Complex &); // assignment operator
private:
	double real; // real part
	double imaginary; // imaginary part
}; // end class Complex

#endif
