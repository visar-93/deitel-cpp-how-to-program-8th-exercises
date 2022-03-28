#include"stdafx.h"
#include<iostream>
#include<ratio>
#include "Rational.h"
using namespace std;

Rational::Rational(int n=1, int d=1)
{
	numerator = n;;
	denominator = d;
}
Rational Rational::Adding(const Rational &a)
{
	Rational t;

	t.numerator = (a.numerator*denominator) + (a.denominator*numerator);
	t.denominator = a.denominator*denominator;
	t.reduction();
	return t;
}
Rational Rational::Subtracting(const Rational &s)
{
	Rational t;
	t.numerator = (s.denominator*numerator) - (s.numerator*denominator);
	t.denominator = s.denominator * denominator;
	t.reduction();

	return t;
}
Rational Rational::Multiplying(const Rational &m)
{
	Rational t;
	t.numerator = m.numerator*numerator;
	t.denominator = m.denominator*denominator;
	t.reduction();
	return t;
}
Rational Rational::Dividing(const Rational &d)
{
	Rational t;
	t.numerator = numerator * d.denominator;
	t.denominator = denominator * d.numerator;
	t.reduction();

	return t;
}
void::Rational::reduction()
{
	int largest;
	if (numerator > denominator)
		largest = numerator;
	else
		largest = denominator;
	int gcd = 0; // great common divisor
	for (int i = 2; i < largest; ++i)
	{
		if (numerator % i == 0 && denominator%i == 0)
			gcd = i;

		if (gcd != 0)
		{
			numerator /= gcd;
			denominator /= gcd;
		}
	}
}
void Rational::PrintRationalform1()
{
	if (denominator == 0)
		cout << "\nDIVIDE BY ZERO ERROR!!!";
	else if (numerator == 0)
		cout << 0;
	else cout << numerator << "/" << denominator;
}
void Rational::PrintRationalform2()
{
	cout << static_cast <double> (numerator) / denominator;
}
