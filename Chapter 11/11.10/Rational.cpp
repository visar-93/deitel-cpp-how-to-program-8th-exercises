#include"stdafx.h"
#include<iostream>
#include<ratio>
#include "Rational.h"
using namespace std;

Rational::Rational(int n, int d)
{
	if (n > 0 && d > 0)
	{
		numerator = n;
		denominator = d;
	
	}
	else
	{
		numerator = 1;
		denominator = 1;
	}
}
Rational Rational::operator+(const Rational &add) const
{
	Rational sum;

	sum.numerator = (add.numerator*denominator) + (add.denominator*numerator);
	sum.denominator = add.denominator*denominator;
	sum.reduction();

	return sum;
}
Rational Rational::operator-(const Rational &sub) const
{
	Rational res;
	res.numerator = (sub.denominator*numerator) - (sub.numerator*denominator);
	res.denominator = sub.denominator * denominator;
	res.reduction();

	return res;
}
Rational Rational::operator*(const Rational &mul) const
{
	Rational prod;
	prod.numerator = mul.numerator*numerator;
	prod.denominator = mul.denominator*denominator;
	prod.reduction();
	return prod;
}
Rational Rational::operator/(const Rational &div) const
{
	Rational res;
	res.numerator = numerator * div.denominator;
	res.denominator = denominator * div.numerator;
	res.reduction();

	return res;
}

int Rational::operator>(const Rational &right) const
{
	if (denominator > 0 && right.denominator > 0)
	{
		if (((numerator / denominator) + (numerator%denominator)) >
			((right.numerator / right.denominator) + (right.numerator % right.denominator)))
			return 1;

		else return -1;
	}
}

int Rational::operator<(const Rational &right) const
{
	if (denominator > 0 && right.denominator > 0)
	{
		if (((numerator / denominator) + (numerator%denominator)) <
			((right.numerator / right.denominator) + (right.numerator % right.denominator)))
			return 1;

		else return -1;
	}
}

bool Rational::operator==(const Rational &right) const
{

	if (denominator > 0 && right.denominator > 0)
	{
		if (((numerator / denominator) + (numerator%denominator)) ==
			((right.numerator / right.denominator) + (right.numerator % right.denominator)))
			return true;

		else return false;
	}
}

bool Rational::operator!=(const Rational &right) const
{

	if (denominator > 0 && right.denominator > 0)
	{
		if (((numerator / denominator) + (numerator%denominator)) !=
			((right.numerator / right.denominator) + (right.numerator % right.denominator)))
			return true;

		else return false;
	}
}

istream &operator>>(istream &input, Rational &num)
{
	input >> num.numerator;
	input >> num.denominator;

	return input;
}
ostream &operator<<(ostream &output, const Rational &num)
{
	output << num.numerator << "/" << num.denominator;

	return output;
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

		if (gcd != 0 && numerator >= gcd && denominator >= gcd)
		{
			numerator /= gcd;
			denominator /= gcd;
			if (numerator == denominator)
			{
				numerator = 1;
				denominator = 1;
				break;
			}
		}
		else
			break;
	}
}
