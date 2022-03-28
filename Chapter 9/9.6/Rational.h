#include"stdafx.h"
#include<iostream>
using namespace std;

#ifndef  COMPLEX_H
#define COMPLEX_H


class Rational
{
public:
	Rational(int, int);
	Rational Adding(const Rational &);
	Rational Subtracting(const Rational &);
	Rational Multiplying(const Rational &);
	Rational Dividing(const Rational &);
	void PrintRationalform1();
	void PrintRationalform2();
private:
	int numerator;
	int denominator;
	void reduction();
};
#endif // ! COMPLEX_H
